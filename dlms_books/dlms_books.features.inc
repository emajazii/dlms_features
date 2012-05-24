<?php
/**
 * @file
 * dlms_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlms_books_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dlms_books_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlms_books_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('Enter book details'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'borrow_return' => array(
      'name' => t('Borrow/Return'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
