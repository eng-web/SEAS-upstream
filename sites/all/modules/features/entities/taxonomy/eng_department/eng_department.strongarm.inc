<?php
/**
 * @file
 * eng_department.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_department_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_departments_pattern';
  $strongarm->value = 'departments/[term:name]';
  $export['pathauto_taxonomy_term_engineering_departments_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term_engineering_departments';
  $strongarm->value = 'engineering_departments';
  $export['uuid_features_entity_taxonomy_term_engineering_departments'] = $strongarm;

  return $export;
}
