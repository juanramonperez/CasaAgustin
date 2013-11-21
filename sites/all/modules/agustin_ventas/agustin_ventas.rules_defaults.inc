<?php
/**
 * @file
 * agustin_ventas.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function agustin_ventas_default_rules_configuration() {
  $items = array();
  $items['rules_descontar_stock'] = entity_import('rules_config', '{ "rules_descontar_stock" : {
      "LABEL" : "Descontar Stock",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Ventas" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--producto" : { "bundle" : "producto" } },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:field-cantidad" ],
            "op" : "\\u003C",
            "value" : [ "node-unchanged:field-cantidad" ]
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "movimiento",
              "param_title" : "Venta de [node:title] - [node:changed]",
              "param_author" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "movimiento" : "Movimiento" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node-unchanged:field-cantidad" ],
              "op" : "-",
              "input_2" : [ "node:field-cantidad" ]
            },
            "PROVIDE" : { "result" : { "cantidad" : "Cantidad" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "cantidad" ],
              "op" : "*",
              "input_2" : [ "node:field-precio" ]
            },
            "PROVIDE" : { "result" : { "importe" : "Importe" } }
          }
        },
        { "data_set" : { "data" : [ "movimiento:field-producto" ], "value" : [ "node" ] } },
        { "data_set" : { "data" : [ "movimiento:field-cantidad" ], "value" : [ "cantidad" ] } },
        { "data_set" : { "data" : [ "movimiento:field-importe" ], "value" : [ "importe" ] } },
        { "data_set" : {
            "data" : [ "movimiento:field-precio" ],
            "value" : [ "node:field-precio" ]
          }
        }
      ]
    }
  }');
  return $items;
}
