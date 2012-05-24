<?php
/**
 * @file
 * dlms_usage_statistics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlms_usage_statistics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dlms_usage_statistics_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlms_usage_statistics_node_info() {
  $items = array(
    'book_usage_statistics' => array(
      'name' => t('Book usage statistics'),
      'base' => 'node_content',
      'description' => t('the daily statistics of books under a subject category that has been read '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'readers_statistics' => array(
      'name' => t('Readers statistics'),
      'base' => 'node_content',
      'description' => t('A table detailing the statistics of readers in the library, on a daily basis.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
