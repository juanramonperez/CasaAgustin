<?php
/**
 * @file
 * agustin_productos.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function agustin_productos_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administrador.
  $menus['menu-administrador'] = array(
    'menu_name' => 'menu-administrador',
    'title' => 'Administrador',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrador');


  return $menus;
}
