<?php
/**
 * @file
 * eng_impact.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_impact_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_impact_pattern';
  $strongarm->value = 'impact/[term:name]';
  $export['pathauto_taxonomy_term_engineering_impact_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term_engineering_impact';
  $strongarm->value = 'engineering_impact';
  $export['uuid_features_file_taxonomy_term_engineering_impact'] = $strongarm;

  return $export;
}
