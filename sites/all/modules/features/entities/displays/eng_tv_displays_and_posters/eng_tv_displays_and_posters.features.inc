<?php
/**
 * @file
 * eng_tv_displays_and_posters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_tv_displays_and_posters_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eng_tv_displays_and_posters_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function eng_tv_displays_and_posters_node_info() {
  $items = array(
    'poster' => array(
      'name' => t('Poster'),
      'base' => 'node_content',
      'description' => t('Posters for TV displays'),
      'has_title' => '1',
      'title_label' => t('Poster title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
