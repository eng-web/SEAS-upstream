<?php
/**
 * @file
 * eng_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eng_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function eng_event_node_info() {
  $items = array(
    'eng_events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Events across the school.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
