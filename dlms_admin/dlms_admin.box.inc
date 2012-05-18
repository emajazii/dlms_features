<?php
/**
 * @file
 * dlms_admin.box.inc
 */

/**
 * Implements hook_default_box().
 */
function dlms_admin_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'admin_menu_book';
  $box->plugin_key = 'simple';
  $box->title = 'Books';
  $box->description = 'Admin menu for books';
  $box->options = array(
    'body' => array(
      'value' => '<div class="user-admin-menu">
<ul class "user-admin-menu-link">
<li><a href="node/add/book" class="add-book-icon add"><span class="icon"></span><span class="label">Add book</span></a></li>
<li><a href="admin/structure/taxonomy/subjects" class="book-subject-icon view"><span class="icon"></span><span class="label">View book subjects</span></a></li>
<li><a href="admin/structure/taxonomy/subjects/add" class="add-book-subject-icon add"><span class="icon"></span><span class="label">Add book subjects</span></a></li>
<li><a href="borrowed-books" class="borrowed-books-icon book"><span class="icon"></span><span class="label">Borrowed books</span></a></li>
<li><a href="over-due-books" class="overdue-books-icon book"><span class="icon"></span><span class="label">Overdue books</span></a></li>
</ul>
</div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['admin_menu_book'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'admin_menu_manual_journal';
  $box->plugin_key = 'simple';
  $box->title = 'Manual & Journal';
  $box->description = 'Admin menu for manual and journal';
  $box->options = array(
    'body' => array(
      'value' => '<div class="manual-journal-admin-menu">
<ul class "manual-journal-admin-menu-link">
<li><a href="node/add/manual" class="add-manual-icon add"><span class="icon"></span><span class="label">Add manual</span></a></li>
<li><a href="node/add/journal" class="add-journal-icon add"><span class="icon"></span><span class="label">Add journal</span></a></li>
</ul>
</div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['admin_menu_manual_journal'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'admin_menu_newspaper';
  $box->plugin_key = 'simple';
  $box->title = 'Newspapers';
  $box->description = 'Admin menu for newspapers';
  $box->options = array(
    'body' => array(
      'value' => '<div class="newspaper-admin-menu">
<ul class "newspaper-admin-menu-link">
<li><a href="node/add/newspaper" class="add-newspaper-icon add"><span class="icon"></span><span class="label">Add newspaper</span></a></li>
<li><a href="admin/structure/taxonomy/newspaper" class="newspaper-type-icon view"><span class="icon"></span><span class="label">View newspaper types</span></a></li>
<li><a href="admin/structure/taxonomy/newspaper/add" class="add-newspaper-type-icon add"><span class="icon"></span><span class="label">Add newspaper type</span></a></li>

</ul>
</div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['admin_menu_newspaper'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'admin_menu_paper';
  $box->plugin_key = 'simple';
  $box->title = 'Papers';
  $box->description = 'Admin menu for papers';
  $box->options = array(
    'body' => array(
      'value' => '<div class="paper-admin-menu">
<ul class "paper-admin-menu-link">
<li><a href="node/add/paper" class="add-paper-icon add"><span class="icon"></span><span class="label">Add paper</span></a></li>
<li><a href="admin/structure/taxonomy/category" class="book-category-icon view"><span class="icon"></span><span class="label">View paper categories</span></a></li>
<li><a href="admin/structure/taxonomy/category/add" class="add-paper-category-icon add"><span class="icon"></span><span class="label">Add paper category</span></a></li>

</ul>
</div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['admin_menu_paper'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'admin_menu_statistics';
  $box->plugin_key = 'simple';
  $box->title = 'Statistics';
  $box->description = 'Admin menu for book usage and library usage statistics';
  $box->options = array(
    'body' => array(
      'value' => '<div class="statistics-admin-menu">
<ul class "statistics-admin-menu-link">
<li><a href="book-usage-statistics" class="book-usage-statistics-icon stat"><span class="icon"></span><span class="label">Book usage statistics</span></a></li>
<li><a href="readers-statistics" class="library-usage-icon stat"><span class="icon"></span><span class="label">Library usage statistics</span></a></li>

</ul>
</div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['admin_menu_statistics'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'dlms_user_menu';
  $box->plugin_key = 'simple';
  $box->title = 'Users';
  $box->description = 'Admin menu for users';
  $box->options = array(
    'body' => array(
      'value' => '<div class="user-admin-menu">
<ul class "user-admin-menu-link">
<li><a href="admin/people/create" class="add-user-icon add"><span class="icon"></span><span class="label">Add user</span></a></li>
<li><a href="library-users" class="view-users-icon view"><span class="icon"></span><span class="label">View users</span></a></li>
</ul>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['dlms_user_menu'] = $box;

  return $export;
}
