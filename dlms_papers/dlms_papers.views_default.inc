<?php
/**
 * @file
 * dlms_papers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlms_papers_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'paper_categories';
  $view->description = 'view of all the authors';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Paper categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Paper Listing';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_paper_presenter' => 'field_paper_presenter',
    'field_paper_venue' => 'field_paper_venue',
    'field_paper_date' => 'field_paper_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_paper_presenter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_paper_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_paper_date' => array(
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
  /* Relationship: Content: Category (field_paper_category) */
  $handler->display->display_options['relationships']['field_paper_category_tid']['id'] = 'field_paper_category_tid';
  $handler->display->display_options['relationships']['field_paper_category_tid']['table'] = 'field_data_field_paper_category';
  $handler->display->display_options['relationships']['field_paper_category_tid']['field'] = 'field_paper_category_tid';
  $handler->display->display_options['relationships']['field_paper_category_tid']['required'] = 1;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'book-title-author';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Presenter(s) */
  $handler->display->display_options['fields']['field_paper_presenter']['id'] = 'field_paper_presenter';
  $handler->display->display_options['fields']['field_paper_presenter']['table'] = 'field_data_field_paper_presenter';
  $handler->display->display_options['fields']['field_paper_presenter']['field'] = 'field_paper_presenter';
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_presenter']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_presenter']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_paper_presenter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_paper_presenter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_paper_presenter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_paper_presenter']['field_api_classes'] = 0;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_paper_venue']['id'] = 'field_paper_venue';
  $handler->display->display_options['fields']['field_paper_venue']['table'] = 'field_data_field_paper_venue';
  $handler->display->display_options['fields']['field_paper_venue']['field'] = 'field_paper_venue';
  $handler->display->display_options['fields']['field_paper_venue']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_venue']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_venue']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_paper_venue']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_paper_venue']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_paper_venue']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_paper_venue']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_paper_date']['id'] = 'field_paper_date';
  $handler->display->display_options['fields']['field_paper_date']['table'] = 'field_data_field_paper_date';
  $handler->display->display_options['fields']['field_paper_date']['field'] = 'field_paper_date';
  $handler->display->display_options['fields']['field_paper_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_paper_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_paper_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_paper_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_paper_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_paper_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_paper_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_paper_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_paper_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_paper_category_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = 1;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'paper' => 'paper',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'paper-listing';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Paper';
  $handler->display->display_options['menu']['description'] = 'reports, conferences, symposiums and seminars';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['paper_categories'] = $view;

  return $export;
}
