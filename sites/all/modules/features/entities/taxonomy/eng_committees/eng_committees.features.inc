<?php
/**
 * @file
 * eng_committees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_committees_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
