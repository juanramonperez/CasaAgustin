<?php
/**
 * @file
 * agustin_ventas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function agustin_ventas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function agustin_ventas_node_info() {
  $items = array(
    'movimiento' => array(
      'name' => t('Movimiento'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
