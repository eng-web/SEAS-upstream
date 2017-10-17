<?php
/**
 * @file
 * eng_tag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_tag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
