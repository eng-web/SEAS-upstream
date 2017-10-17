<?php
/**
 * @file
 * eng_advisory_council_member.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_advisory_council_member_ctools_plugin_api($module = NULL, $api = NULL) {
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
function eng_advisory_council_member_node_info() {
  $items = array(
    'advisory_council_member' => array(
      'name' => t('Advisory Council Member'),
      'base' => 'node_content',
      'description' => t('Add an advisory council member.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
