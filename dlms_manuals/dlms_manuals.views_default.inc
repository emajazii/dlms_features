<?php
/**
 * @file
 * dlms_manuals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlms_manuals_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'manuals';
  $view->description = 'machine operation manuals';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manuals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manual';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Receive date  */
  $handler->display->display_options['fields']['field_manuals_receive_date']['id'] = 'field_manuals_receive_date';
  $handler->display->display_options['fields']['field_manuals_receive_date']['table'] = 'field_data_field_manuals_receive_date';
  $handler->display->display_options['fields']['field_manuals_receive_date']['field'] = 'field_manuals_receive_date';
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manuals_receive_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manuals_receive_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manuals_receive_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manuals_receive_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_manuals_receive_date']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_manuals_title']['id'] = 'field_manuals_title';
  $handler->display->display_options['fields']['field_manuals_title']['table'] = 'field_data_field_manuals_title';
  $handler->display->display_options['fields']['field_manuals_title']['field'] = 'field_manuals_title';
  $handler->display->display_options['fields']['field_manuals_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manuals_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manuals_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manuals_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manuals_title']['field_api_classes'] = 0;
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_manuals_quantity']['id'] = 'field_manuals_quantity';
  $handler->display->display_options['fields']['field_manuals_quantity']['table'] = 'field_data_field_manuals_quantity';
  $handler->display->display_options['fields']['field_manuals_quantity']['field'] = 'field_manuals_quantity';
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manuals_quantity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manuals_quantity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manuals_quantity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manuals_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_manuals_quantity']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manual' => 'manual',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manual';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manual Catalog';
  $handler->display->display_options['menu']['description'] = 'machine operation manuals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['manuals'] = $view;

  return $export;
}
