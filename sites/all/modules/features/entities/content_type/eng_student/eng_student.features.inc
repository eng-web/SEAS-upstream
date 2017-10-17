<?php
/**
 * @file
 * eng_student.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_student_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function eng_student_node_info() {
  $items = array(
    'student' => array(
      'name' => t('Student'),
      'base' => 'node_content',
      'description' => t('Add a student.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
