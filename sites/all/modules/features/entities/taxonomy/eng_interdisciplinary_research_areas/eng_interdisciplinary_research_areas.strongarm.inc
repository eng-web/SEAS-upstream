<?php
/**
 * @file
 * eng_interdisciplinary_research_areas.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_interdisciplinary_research_areas_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_interdisciplinary_research_pattern';
  $strongarm->value = 'interdisciplinary-research/[term:name]';
  $export['pathauto_taxonomy_term_engineering_interdisciplinary_research_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term_engineering_interdisciplinary_research';
  $strongarm->value = 'engineering_interdisciplinary_research';
  $export['uuid_features_file_taxonomy_term_engineering_interdisciplinary_research'] = $strongarm;

  return $export;
}
