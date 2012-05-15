<?php
/**
 * @file
 * dlms.box.inc
 */

/**
 * Implements hook_default_box().
 */
function dlms_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'menu_create_library_contents';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Displays menu to create library contents';
  $box->options = array(
    'body' => array(
      'value' => '<div><span class="first"><a href="node/add/book">Add Book</a></span><span class="second"></span></div>
<div><span class="first"><a href="node/add/journal">Add Journal</a></span><span class="second"></span></div>
<div><span class="first"><a href="node/add/paper">Add Paper</a></span><span class="second"></span></div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => 'menu-add-library-content',
  );
  $export['menu_create_library_contents'] = $box;

  return $export;
}
