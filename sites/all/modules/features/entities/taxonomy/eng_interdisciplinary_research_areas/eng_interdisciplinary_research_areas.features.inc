<?php
/**
 * @file
 * eng_interdisciplinary_research_areas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_interdisciplinary_research_areas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
