<?php
/**
 * @file
 * eng_councils.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_councils_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
