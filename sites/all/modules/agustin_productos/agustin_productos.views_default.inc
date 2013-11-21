<?php
/**
 * @file
 * agustin_productos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agustin_productos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_productos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Productos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de Productos';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Buscar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fotos' => 'field_fotos',
    'field_codigo' => 'field_codigo',
    'field_marca' => 'field_marca',
    'title' => 'title',
    'field_proveedor' => 'field_proveedor',
    'field_precio' => 'field_precio',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fotos' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codigo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marca' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_proveedor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_precio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No se encontraron productos que coincidan con los criterios de búsqueda. Inténtelo nuevamente por favor';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Campo: Contenido: Cantidad */
  $handler->display->display_options['fields']['field_cantidad']['id'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['table'] = 'field_data_field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['field'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['label'] = '';
  $handler->display->display_options['fields']['field_cantidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cantidad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cantidad']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  /* Campo: Contenido: Código */
  $handler->display->display_options['fields']['field_codigo']['id'] = 'field_codigo';
  $handler->display->display_options['fields']['field_codigo']['table'] = 'field_data_field_codigo';
  $handler->display->display_options['fields']['field_codigo']['field'] = 'field_codigo';
  $handler->display->display_options['fields']['field_codigo']['type'] = 'text_plain';
  /* Campo: Contenido: Marca */
  $handler->display->display_options['fields']['field_marca']['id'] = 'field_marca';
  $handler->display->display_options['fields']['field_marca']['table'] = 'field_data_field_marca';
  $handler->display->display_options['fields']['field_marca']['field'] = 'field_marca';
  $handler->display->display_options['fields']['field_marca']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Producto';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Proveedor */
  $handler->display->display_options['fields']['field_proveedor']['id'] = 'field_proveedor';
  $handler->display->display_options['fields']['field_proveedor']['table'] = 'field_data_field_proveedor';
  $handler->display->display_options['fields']['field_proveedor']['field'] = 'field_proveedor';
  $handler->display->display_options['fields']['field_proveedor']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['settings'] = array(
    'thousand_separator' => '.',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Cantidad';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
//dpm($data);
if(isset($data->field_field_cantidad[0][\'raw\'][\'value\'])){
  print custom_build_change_stock_link($data->nid, $data->field_field_cantidad[0][\'raw\'][\'value\']);
}else{
  print custom_build_change_stock_link($data->nid, 0);
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Campo: Contenido: Enlace de edición */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operaciones';
  /* Campo: Contenido: Enlace de borrado */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Marca (field_marca) */
  $handler->display->display_options['filters']['field_marca_tid']['id'] = 'field_marca_tid';
  $handler->display->display_options['filters']['field_marca_tid']['table'] = 'field_data_field_marca';
  $handler->display->display_options['filters']['field_marca_tid']['field'] = 'field_marca_tid';
  $handler->display->display_options['filters']['field_marca_tid']['value'] = '';
  $handler->display->display_options['filters']['field_marca_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_marca_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_marca_tid']['expose']['operator_id'] = 'field_marca_tid_op';
  $handler->display->display_options['filters']['field_marca_tid']['expose']['label'] = 'Marca';
  $handler->display->display_options['filters']['field_marca_tid']['expose']['operator'] = 'field_marca_tid_op';
  $handler->display->display_options['filters']['field_marca_tid']['expose']['identifier'] = 'field_marca_tid';
  $handler->display->display_options['filters']['field_marca_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_marca_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_marca_tid']['vocabulary'] = 'marca';
  /* Criterios de filtrado: Contenido: Proveedor (field_proveedor) */
  $handler->display->display_options['filters']['field_proveedor_tid']['id'] = 'field_proveedor_tid';
  $handler->display->display_options['filters']['field_proveedor_tid']['table'] = 'field_data_field_proveedor';
  $handler->display->display_options['filters']['field_proveedor_tid']['field'] = 'field_proveedor_tid';
  $handler->display->display_options['filters']['field_proveedor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_proveedor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proveedor_tid']['expose']['operator_id'] = 'field_proveedor_tid_op';
  $handler->display->display_options['filters']['field_proveedor_tid']['expose']['label'] = 'Proveedor';
  $handler->display->display_options['filters']['field_proveedor_tid']['expose']['operator'] = 'field_proveedor_tid_op';
  $handler->display->display_options['filters']['field_proveedor_tid']['expose']['identifier'] = 'field_proveedor_tid';
  $handler->display->display_options['filters']['field_proveedor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_proveedor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proveedor_tid']['vocabulary'] = 'proveedor';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'producto' => 'producto',
  );

  /* Display: Admin Productos */
  $handler = $view->new_display('page', 'Admin Productos', 'page');
  $handler->display->display_options['path'] = 'admin/productos';
  $translatables['admin_productos'] = array(
    t('Master'),
    t('Listado de Productos'),
    t('más'),
    t('Buscar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('No se encontraron productos que coincidan con los criterios de búsqueda. Inténtelo nuevamente por favor'),
    t('Foto'),
    t('Código'),
    t('Marca'),
    t('Producto'),
    t('Proveedor'),
    t('Precio'),
    t('Cantidad'),
    t('Operaciones'),
    t('Enlace de borrado'),
    t('Nombre'),
    t('Admin Productos'),
  );
  $export['admin_productos'] = $view;

  return $export;
}
