<?php
/**
 * @file
 * eng_student_status.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_student_status_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
