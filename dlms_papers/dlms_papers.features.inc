<?php
/**
 * @file
 * dlms_papers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlms_papers_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function dlms_papers_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlms_papers_node_info() {
  $items = array(
    'paper' => array(
      'name' => t('Paper'),
      'base' => 'node_content',
      'description' => t('Enter details of Conferences, Seminars, Symposiums and Reports'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
