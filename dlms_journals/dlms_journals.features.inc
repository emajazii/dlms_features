<?php
/**
 * @file
 * dlms_journals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlms_journals_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function dlms_journals_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlms_journals_node_info() {
  $items = array(
    'journal' => array(
      'name' => t('Journal'),
      'base' => 'node_content',
      'description' => t('Enter Journal Details'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
