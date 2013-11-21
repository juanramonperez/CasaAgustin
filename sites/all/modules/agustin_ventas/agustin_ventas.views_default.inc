<?php
/**
 * @file
 * agustin_ventas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agustin_ventas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_ventas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Ventas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ventas';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
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
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No se registraron ventas en esta fecha';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relación: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_producto_target_id']['id'] = 'field_producto_target_id';
  $handler->display->display_options['relationships']['field_producto_target_id']['table'] = 'field_data_field_producto';
  $handler->display->display_options['relationships']['field_producto_target_id']['field'] = 'field_producto_target_id';
  $handler->display->display_options['relationships']['field_producto_target_id']['label'] = 'Producto';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_producto_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Producto';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Contenido: Precio */
  $handler->display->display_options['fields']['field_precio_1']['id'] = 'field_precio_1';
  $handler->display->display_options['fields']['field_precio_1']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio_1']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio_1']['label'] = 'Precio Unitario';
  $handler->display->display_options['fields']['field_precio_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Cantidad */
  $handler->display->display_options['fields']['field_cantidad']['id'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['table'] = 'field_data_field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['field'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Importe */
  $handler->display->display_options['fields']['field_importe']['id'] = 'field_importe';
  $handler->display->display_options['fields']['field_importe']['table'] = 'field_data_field_importe';
  $handler->display->display_options['fields']['field_importe']['field'] = 'field_importe';
  $handler->display->display_options['fields']['field_importe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_importe']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movimiento' => 'movimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Fecha: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Fecha';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );

  /* Display: Admin Ventas */
  $handler = $view->new_display('page', 'Admin Ventas', 'page');
  $handler->display->display_options['path'] = 'admin/ventas';
  $translatables['admin_ventas'] = array(
    t('Master'),
    t('Ventas'),
    t('más'),
    t('Filtrar'),
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
    t('No se registraron ventas en esta fecha'),
    t('Producto'),
    t('Fecha'),
    t('Precio Unitario'),
    t('Cantidad'),
    t('Importe'),
    t('Admin Ventas'),
  );
  $export['admin_ventas'] = $view;

  return $export;
}
