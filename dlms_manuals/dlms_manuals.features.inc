<?php
/**
 * @file
 * dlms_manuals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlms_manuals_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function dlms_manuals_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlms_manuals_node_info() {
  $items = array(
    'manual' => array(
      'name' => t('Manual'),
      'base' => 'node_content',
      'description' => t('machine operation manuals'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
