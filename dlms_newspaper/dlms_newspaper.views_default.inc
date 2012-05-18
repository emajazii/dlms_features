<?php
/**
 * @file
 * dlms_newspaper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlms_newspaper_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'newspaper';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newspaper';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newspaper';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_newspaper_title']['id'] = 'field_newspaper_title';
  $handler->display->display_options['fields']['field_newspaper_title']['table'] = 'field_data_field_newspaper_title';
  $handler->display->display_options['fields']['field_newspaper_title']['field'] = 'field_newspaper_title';
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_newspaper_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_newspaper_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_newspaper_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_newspaper_title']['field_api_classes'] = 0;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_newspaper_publication_date']['id'] = 'field_newspaper_publication_date';
  $handler->display->display_options['fields']['field_newspaper_publication_date']['table'] = 'field_data_field_newspaper_publication_date';
  $handler->display->display_options['fields']['field_newspaper_publication_date']['field'] = 'field_newspaper_publication_date';
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_newspaper_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_newspaper_publication_date']['field_api_classes'] = 0;
  /* Field: Content: Receive date  */
  $handler->display->display_options['fields']['field_newspaper_received_date']['id'] = 'field_newspaper_received_date';
  $handler->display->display_options['fields']['field_newspaper_received_date']['table'] = 'field_data_field_newspaper_received_date';
  $handler->display->display_options['fields']['field_newspaper_received_date']['field'] = 'field_newspaper_received_date';
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_newspaper_received_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_newspaper_received_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_newspaper_received_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_newspaper_received_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_newspaper_received_date']['field_api_classes'] = 0;
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
    'newspaper' => 'newspaper',
  );
  /* Filter criterion: Content: Publication Date (field_newspaper_publication_date) */
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['id'] = 'field_newspaper_publication_date_value';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['table'] = 'field_data_field_newspaper_publication_date';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['field'] = 'field_newspaper_publication_date_value';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['expose']['operator_id'] = 'field_newspaper_publication_date_value_op';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['expose']['label'] = 'Search by date';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['expose']['operator'] = 'field_newspaper_publication_date_value_op';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['expose']['identifier'] = 'field_newspaper_publication_date_value';
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_newspaper_publication_date_value']['year_range'] = '1960:+0';
  /* Filter criterion: Content: Title (field_newspaper_title) */
  $handler->display->display_options['filters']['field_newspaper_title_tid']['id'] = 'field_newspaper_title_tid';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['table'] = 'field_data_field_newspaper_title';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['field'] = 'field_newspaper_title_tid';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['value'] = '';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_newspaper_title_tid']['expose']['operator_id'] = 'field_newspaper_title_tid_op';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['expose']['label'] = 'Search by Title';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['expose']['operator'] = 'field_newspaper_title_tid_op';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['expose']['identifier'] = 'field_newspaper_title_tid';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_newspaper_title_tid']['vocabulary'] = 'newspaper';
  $handler->display->display_options['filters']['field_newspaper_title_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'newspaper';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Newspaper catalog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['newspaper'] = $view;

  return $export;
}
