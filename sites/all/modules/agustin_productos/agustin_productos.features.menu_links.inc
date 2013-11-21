<?php
/**
 * @file
 * agustin_productos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function agustin_productos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administrador_agregar-producto:node/add/producto
  $menu_links['menu-administrador_agregar-producto:node/add/producto'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'node/add/producto',
    'router_path' => 'node/add/producto',
    'link_title' => 'Agregar producto',
    'options' => array(
      'query' => array(
        'destination' => 'admin/productos',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_agregar-producto:node/add/producto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-administrador_productos:admin/productos',
  );
  // Exported menu link: menu-administrador_productos:admin/productos
  $menu_links['menu-administrador_productos:admin/productos'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/productos',
    'router_path' => 'admin/productos',
    'link_title' => 'Productos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_productos:admin/productos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agregar producto');
  t('Productos');


  return $menu_links;
}
