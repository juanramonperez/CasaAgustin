<?php
/**
 * @file
 * agustin_configuracion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function agustin_configuracion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administrador_agregar-marca:admin/structure/taxonomy/marca/add
  $menu_links['menu-administrador_agregar-marca:admin/structure/taxonomy/marca/add'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/structure/taxonomy/marca/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Agregar marca',
    'options' => array(
      'query' => array(
        'destination' => 'admin/structure/taxonomy/marca',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_agregar-marca:admin/structure/taxonomy/marca/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-administrador_marcas:admin/structure/taxonomy/marca',
  );
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
  // Exported menu link: menu-administrador_agregar-proveedor:admin/structure/taxonomy/proveedor/add
  $menu_links['menu-administrador_agregar-proveedor:admin/structure/taxonomy/proveedor/add'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/structure/taxonomy/proveedor/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Agregar proveedor',
    'options' => array(
      'query' => array(
        'destination' => 'admin/structure/taxonomy/proveedor',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_agregar-proveedor:admin/structure/taxonomy/proveedor/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-administrador_proveedores:admin/structure/taxonomy/proveedor',
  );
  // Exported menu link: menu-administrador_marcas:admin/structure/taxonomy/marca
  $menu_links['menu-administrador_marcas:admin/structure/taxonomy/marca'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/structure/taxonomy/marca',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Marcas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_marcas:admin/structure/taxonomy/marca',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
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
  // Exported menu link: menu-administrador_proveedores:admin/structure/taxonomy/proveedor
  $menu_links['menu-administrador_proveedores:admin/structure/taxonomy/proveedor'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/structure/taxonomy/proveedor',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Proveedores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_proveedores:admin/structure/taxonomy/proveedor',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administrador_ventas:admin/ventas
  $menu_links['menu-administrador_ventas:admin/ventas'] = array(
    'menu_name' => 'menu-administrador',
    'link_path' => 'admin/ventas',
    'router_path' => 'admin/ventas',
    'link_title' => 'Ventas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrador_ventas:admin/ventas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agregar marca');
  t('Agregar producto');
  t('Agregar proveedor');
  t('Marcas');
  t('Productos');
  t('Proveedores');
  t('Ventas');


  return $menu_links;
}
