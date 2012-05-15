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

  /* Display: Catalog by Author */
  $handler = $view->new_display('page', 'Catalog by Author', 'page_1');
  $handler->display->display_options['display_description'] = 'Sorted Listing of Books by Author';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_book_authors' => 'field_book_authors',
    'field_book_image' => 'field_book_authors',
    'title' => 'title',
    'field_book_subject' => 'field_book_subject',
    'field_class_no' => 'field_class_no',
    'field_book_available' => 'field_book_available',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_book_authors' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_book_image' => array(
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
    'field_book_subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_book_available' => array(
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_book_authors']['id'] = 'field_book_authors';
  $handler->display->display_options['fields']['field_book_authors']['table'] = 'field_data_field_book_authors';
  $handler->display->display_options['fields']['field_book_authors']['field'] = 'field_book_authors';
  $handler->display->display_options['fields']['field_book_authors']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_book_authors']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_book_authors']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_book_authors']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_book_authors']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_book_authors']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_book_authors']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_book_subject']['id'] = 'field_book_subject';
  $handler->display->display_options['fields']['field_book_subject']['table'] = 'field_data_field_book_subject';
  $handler->display->display_options['fields']['field_book_subject']['field'] = 'field_book_subject';
  $handler->display->display_options['fields']['field_book_subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_book_subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_book_subject']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_book_subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_book_subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_book_subject']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_book_subject']['field_api_classes'] = 0;
  /* Field: Content: Class number */
  $handler->display->display_options['fields']['field_class_no']['id'] = 'field_class_no';
  $handler->display->display_options['fields']['field_class_no']['table'] = 'field_data_field_class_no';
  $handler->display->display_options['fields']['field_class_no']['field'] = 'field_class_no';
  $handler->display->display_options['fields']['field_class_no']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_class_no']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_class_no']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_class_no']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_class_no']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_class_no']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_class_no']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_class_no']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_class_no']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_class_no']['field_api_classes'] = 0;
  /* Field: Content: Qty available */
  $handler->display->display_options['fields']['field_book_available']['id'] = 'field_book_available';
  $handler->display->display_options['fields']['field_book_available']['table'] = 'field_data_field_book_available';
  $handler->display->display_options['fields']['field_book_available']['field'] = 'field_book_available';
  $handler->display->display_options['fields']['field_book_available']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_book_available']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_book_available']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_book_available']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_book_available']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_book_available']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_book_available']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_book_available']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_book_available']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_book_available']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_book_available']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Author(s) (field_book_authors) */
  $handler->display->display_options['sorts']['field_book_authors_value']['id'] = 'field_book_authors_value';
  $handler->display->display_options['sorts']['field_book_authors_value']['table'] = 'field_data_field_book_authors';
  $handler->display->display_options['sorts']['field_book_authors_value']['field'] = 'field_book_authors_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'book' => 'book',
  );
  /* Filter criterion: Content: Author(s) (field_book_authors) */
  $handler->display->display_options['filters']['field_book_authors_value']['id'] = 'field_book_authors_value';
  $handler->display->display_options['filters']['field_book_authors_value']['table'] = 'field_data_field_book_authors';
  $handler->display->display_options['filters']['field_book_authors_value']['field'] = 'field_book_authors_value';
  $handler->display->display_options['filters']['field_book_authors_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_book_authors_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['operator_id'] = 'field_book_authors_value_op';
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['label'] = 'Search author';
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['operator'] = 'field_book_authors_value_op';
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['identifier'] = 'field_book_authors_value';
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_book_authors_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'book-catalog/author';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Author';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['journal_catalog'] = $view;

  return $export;
}
