<?php
/**
 * @file
 * eng_affiliated_departments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_affiliated_departments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
