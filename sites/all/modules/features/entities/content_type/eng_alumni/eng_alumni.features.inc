<?php
/**
 * @file
 * eng_alumni.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_alumni_ctools_plugin_api($module = NULL, $api = NULL) {
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
function eng_alumni_node_info() {
  $items = array(
    'alumni' => array(
      'name' => t('Alumni'),
      'base' => 'node_content',
      'description' => t('Add an alumnus.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
