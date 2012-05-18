<?php
/**
 * @file
 * dlms_journals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlms_journals_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'journal_catalog';
  $view->description = 'A listing of Books';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Journal Catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Journal Catalog';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_journal_image' => 'title',
    'title' => 'field_journal_image',
    'field_journal_publisher' => 'field_journal_publisher',
    'field_journal_date' => 'field_journal_date',
    'field_jounal_volume' => 'field_jounal_volume',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_journal_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jounal_volume' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_journal_image']['id'] = 'field_journal_image';
  $handler->display->display_options['fields']['field_journal_image']['table'] = 'field_data_field_journal_image';
  $handler->display->display_options['fields']['field_journal_image']['field'] = 'field_journal_image';
  $handler->display->display_options['fields']['field_journal_image']['label'] = 'Title';
  $handler->display->display_options['fields']['field_journal_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_journal_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_journal_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_journal_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_journal_image']['settings'] = array(
    'image_style' => 'thumb-book',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_journal_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Publisher(s) */
  $handler->display->display_options['fields']['field_journal_publisher']['id'] = 'field_journal_publisher';
  $handler->display->display_options['fields']['field_journal_publisher']['table'] = 'field_data_field_journal_publisher';
  $handler->display->display_options['fields']['field_journal_publisher']['field'] = 'field_journal_publisher';
  $handler->display->display_options['fields']['field_journal_publisher']['label'] = 'Publisher';
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_journal_publisher']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_journal_publisher']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal_publisher']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_journal_publisher']['field_api_classes'] = 0;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_journal_date']['id'] = 'field_journal_date';
  $handler->display->display_options['fields']['field_journal_date']['table'] = 'field_data_field_journal_date';
  $handler->display->display_options['fields']['field_journal_date']['field'] = 'field_journal_date';
  $handler->display->display_options['fields']['field_journal_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_journal_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_journal_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_journal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_journal_date']['field_api_classes'] = 0;
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_jounal_volume']['id'] = 'field_jounal_volume';
  $handler->display->display_options['fields']['field_jounal_volume']['table'] = 'field_data_field_jounal_volume';
  $handler->display->display_options['fields']['field_jounal_volume']['field'] = 'field_jounal_volume';
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_jounal_volume']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_jounal_volume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_jounal_volume']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_jounal_volume']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'Search title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'journal' => 'journal',
  );

  /* Display: Journal Catalog */
  $handler = $view->new_display('page', 'Journal Catalog', 'page');
  $handler->display->display_options['display_description'] = 'a listing of all the journals';
  $handler->display->display_options['path'] = 'journal-catalog/title';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Title';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Journal catalog';
  $handler->display->display_options['tab_options']['description'] = 'a listing of all the journals';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['journal_catalog'] = $view;

  return $export;
}
