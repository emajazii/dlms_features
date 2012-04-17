<?php
/**
 * @file
 * dlms_usage_statistics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlms_usage_statistics_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'book_usage_statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book usage statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book usage statistics';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_book_usage_date']['id'] = 'field_book_usage_date';
  $handler->display->display_options['fields']['field_book_usage_date']['table'] = 'field_data_field_book_usage_date';
  $handler->display->display_options['fields']['field_book_usage_date']['field'] = 'field_book_usage_date';
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_book_usage_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_book_usage_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_book_usage_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_book_usage_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_book_usage_date']['field_api_classes'] = 0;
  /* Field: Content: 000  */
  $handler->display->display_options['fields']['field_000_generalities']['id'] = 'field_000_generalities';
  $handler->display->display_options['fields']['field_000_generalities']['table'] = 'field_data_field_000_generalities';
  $handler->display->display_options['fields']['field_000_generalities']['field'] = 'field_000_generalities';
  $handler->display->display_options['fields']['field_000_generalities']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_000_generalities']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_000_generalities']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_000_generalities']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_000_generalities']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_000_generalities']['field_api_classes'] = 0;
  /* Field: Content: 100  */
  $handler->display->display_options['fields']['field_100_philosophy']['id'] = 'field_100_philosophy';
  $handler->display->display_options['fields']['field_100_philosophy']['table'] = 'field_data_field_100_philosophy';
  $handler->display->display_options['fields']['field_100_philosophy']['field'] = 'field_100_philosophy';
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_100_philosophy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_100_philosophy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_100_philosophy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_100_philosophy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_100_philosophy']['field_api_classes'] = 0;
  /* Field: Content: 200  */
  $handler->display->display_options['fields']['field_200_religion']['id'] = 'field_200_religion';
  $handler->display->display_options['fields']['field_200_religion']['table'] = 'field_data_field_200_religion';
  $handler->display->display_options['fields']['field_200_religion']['field'] = 'field_200_religion';
  $handler->display->display_options['fields']['field_200_religion']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_200_religion']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_200_religion']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_200_religion']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_200_religion']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_200_religion']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_200_religion']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_200_religion']['field_api_classes'] = 0;
  /* Field: Content: 300 */
  $handler->display->display_options['fields']['field_300_social_sciences']['id'] = 'field_300_social_sciences';
  $handler->display->display_options['fields']['field_300_social_sciences']['table'] = 'field_data_field_300_social_sciences';
  $handler->display->display_options['fields']['field_300_social_sciences']['field'] = 'field_300_social_sciences';
  $handler->display->display_options['fields']['field_300_social_sciences']['label'] = '300';
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_300_social_sciences']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_300_social_sciences']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_300_social_sciences']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_300_social_sciences']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_300_social_sciences']['field_api_classes'] = 0;
  /* Field: Content: 400 */
  $handler->display->display_options['fields']['field_400_language']['id'] = 'field_400_language';
  $handler->display->display_options['fields']['field_400_language']['table'] = 'field_data_field_400_language';
  $handler->display->display_options['fields']['field_400_language']['field'] = 'field_400_language';
  $handler->display->display_options['fields']['field_400_language']['label'] = '400';
  $handler->display->display_options['fields']['field_400_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_400_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_400_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_400_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_400_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_400_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_400_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_400_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_400_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_400_language']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_400_language']['field_api_classes'] = 0;
  /* Field: Content: 500 */
  $handler->display->display_options['fields']['field_500_pure_sciences']['id'] = 'field_500_pure_sciences';
  $handler->display->display_options['fields']['field_500_pure_sciences']['table'] = 'field_data_field_500_pure_sciences';
  $handler->display->display_options['fields']['field_500_pure_sciences']['field'] = 'field_500_pure_sciences';
  $handler->display->display_options['fields']['field_500_pure_sciences']['label'] = '500';
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_500_pure_sciences']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_500_pure_sciences']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_500_pure_sciences']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_500_pure_sciences']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_500_pure_sciences']['field_api_classes'] = 0;
  /* Field: Content: 600 */
  $handler->display->display_options['fields']['field_600_technology']['id'] = 'field_600_technology';
  $handler->display->display_options['fields']['field_600_technology']['table'] = 'field_data_field_600_technology';
  $handler->display->display_options['fields']['field_600_technology']['field'] = 'field_600_technology';
  $handler->display->display_options['fields']['field_600_technology']['label'] = '600';
  $handler->display->display_options['fields']['field_600_technology']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_600_technology']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_600_technology']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_600_technology']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_600_technology']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_600_technology']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_600_technology']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_600_technology']['field_api_classes'] = 0;
  /* Field: Content: 700 */
  $handler->display->display_options['fields']['field_700_the_arts']['id'] = 'field_700_the_arts';
  $handler->display->display_options['fields']['field_700_the_arts']['table'] = 'field_data_field_700_the_arts';
  $handler->display->display_options['fields']['field_700_the_arts']['field'] = 'field_700_the_arts';
  $handler->display->display_options['fields']['field_700_the_arts']['label'] = '700';
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_700_the_arts']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_700_the_arts']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_700_the_arts']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_700_the_arts']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_700_the_arts']['field_api_classes'] = 0;
  /* Field: Content: 800 */
  $handler->display->display_options['fields']['field_800_literature']['id'] = 'field_800_literature';
  $handler->display->display_options['fields']['field_800_literature']['table'] = 'field_data_field_800_literature';
  $handler->display->display_options['fields']['field_800_literature']['field'] = 'field_800_literature';
  $handler->display->display_options['fields']['field_800_literature']['label'] = '800';
  $handler->display->display_options['fields']['field_800_literature']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_800_literature']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_800_literature']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_800_literature']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_800_literature']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_800_literature']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_800_literature']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_800_literature']['field_api_classes'] = 0;
  /* Field: Content: 900 */
  $handler->display->display_options['fields']['field_900_general_geography']['id'] = 'field_900_general_geography';
  $handler->display->display_options['fields']['field_900_general_geography']['table'] = 'field_data_field_900_general_geography';
  $handler->display->display_options['fields']['field_900_general_geography']['field'] = 'field_900_general_geography';
  $handler->display->display_options['fields']['field_900_general_geography']['label'] = '900';
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_900_general_geography']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_900_general_geography']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_900_general_geography']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_900_general_geography']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_900_general_geography']['field_api_classes'] = 0;
  /* Field: Content: Total */
  $handler->display->display_options['fields']['field_book_usage_total']['id'] = 'field_book_usage_total';
  $handler->display->display_options['fields']['field_book_usage_total']['table'] = 'field_data_field_book_usage_total';
  $handler->display->display_options['fields']['field_book_usage_total']['field'] = 'field_book_usage_total';
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_book_usage_total']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_book_usage_total']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_book_usage_total']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_book_usage_total']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_book_usage_total']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Action';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
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
    'book_usage_statistics' => 'book_usage_statistics',
  );
  /* Filter criterion: Content: Date (field_book_usage_date) */
  $handler->display->display_options['filters']['field_book_usage_date_value']['id'] = 'field_book_usage_date_value';
  $handler->display->display_options['filters']['field_book_usage_date_value']['table'] = 'field_data_field_book_usage_date';
  $handler->display->display_options['filters']['field_book_usage_date_value']['field'] = 'field_book_usage_date_value';
  $handler->display->display_options['filters']['field_book_usage_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_usage_date_value']['expose']['operator_id'] = 'field_book_usage_date_value_op';
  $handler->display->display_options['filters']['field_book_usage_date_value']['expose']['label'] = 'Search by date';
  $handler->display->display_options['filters']['field_book_usage_date_value']['expose']['operator'] = 'field_book_usage_date_value_op';
  $handler->display->display_options['filters']['field_book_usage_date_value']['expose']['identifier'] = 'field_book_usage_date_value';
  $handler->display->display_options['filters']['field_book_usage_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_book_usage_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_book_usage_date_value']['year_range'] = '-0:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'book-usage-statistics';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Book usage statistics';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['book_usage_statistics'] = $view;

  $view = new view;
  $view->name = 'readers_statistics';
  $view->description = 'Displays the statistics of readers attendance daily';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Readers statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Readers statistics';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reader_statistics_date']['id'] = 'field_reader_statistics_date';
  $handler->display->display_options['fields']['field_reader_statistics_date']['table'] = 'field_data_field_reader_statistics_date';
  $handler->display->display_options['fields']['field_reader_statistics_date']['field'] = 'field_reader_statistics_date';
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_reader_statistics_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_reader_statistics_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_reader_statistics_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_reader_statistics_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_reader_statistics_date']['field_api_classes'] = 0;
  /* Field: Content: 10am */
  $handler->display->display_options['fields']['field_morning_readers']['id'] = 'field_morning_readers';
  $handler->display->display_options['fields']['field_morning_readers']['table'] = 'field_data_field_morning_readers';
  $handler->display->display_options['fields']['field_morning_readers']['field'] = 'field_morning_readers';
  $handler->display->display_options['fields']['field_morning_readers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_morning_readers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_morning_readers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_morning_readers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_morning_readers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_morning_readers']['field_api_classes'] = 0;
  /* Field: Content: 12am */
  $handler->display->display_options['fields']['field_afternoon_readers']['id'] = 'field_afternoon_readers';
  $handler->display->display_options['fields']['field_afternoon_readers']['table'] = 'field_data_field_afternoon_readers';
  $handler->display->display_options['fields']['field_afternoon_readers']['field'] = 'field_afternoon_readers';
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_afternoon_readers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_afternoon_readers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_afternoon_readers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_afternoon_readers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_afternoon_readers']['field_api_classes'] = 0;
  /* Field: Content: 4pm */
  $handler->display->display_options['fields']['field_evening_readers']['id'] = 'field_evening_readers';
  $handler->display->display_options['fields']['field_evening_readers']['table'] = 'field_data_field_evening_readers';
  $handler->display->display_options['fields']['field_evening_readers']['field'] = 'field_evening_readers';
  $handler->display->display_options['fields']['field_evening_readers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_evening_readers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_evening_readers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_evening_readers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_evening_readers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_evening_readers']['field_api_classes'] = 0;
  /* Field: Content: Total */
  $handler->display->display_options['fields']['field_total_readers']['id'] = 'field_total_readers';
  $handler->display->display_options['fields']['field_total_readers']['table'] = 'field_data_field_total_readers';
  $handler->display->display_options['fields']['field_total_readers']['field'] = 'field_total_readers';
  $handler->display->display_options['fields']['field_total_readers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_total_readers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_total_readers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_total_readers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_total_readers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_total_readers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_total_readers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_total_readers']['field_api_classes'] = 0;
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
    'readers_statistics' => 'readers_statistics',
  );

  /* Display: Readers statistics */
  $handler = $view->new_display('page', 'Readers statistics', 'page');
  $handler->display->display_options['path'] = 'readers-statistics';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Readers statistics';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['readers_statistics'] = $view;

  return $export;
}
