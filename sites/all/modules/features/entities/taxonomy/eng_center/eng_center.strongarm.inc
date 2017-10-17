<?php
/**
 * @file
 * eng_center.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_center_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_centers_pattern';
  $strongarm->value = 'centers/[term:name]';
  $export['pathauto_taxonomy_term_engineering_centers_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term_engineering_centers';
  $strongarm->value = 'engineering_centers';
  $export['uuid_features_file_taxonomy_term_engineering_centers'] = $strongarm;

  return $export;
}
