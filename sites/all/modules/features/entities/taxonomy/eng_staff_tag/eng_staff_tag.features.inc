<?php
/**
 * @file
 * eng_staff_tag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_staff_tag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
