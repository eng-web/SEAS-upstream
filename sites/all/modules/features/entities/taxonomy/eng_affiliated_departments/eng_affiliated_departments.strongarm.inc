<?php
/**
 * @file
 * eng_affiliated_departments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_affiliated_departments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_affiliated_department_pattern';
  $strongarm->value = 'affiliate-departments/[term:name]';
  $export['pathauto_taxonomy_term_affiliated_department_pattern'] = $strongarm;

  return $export;
}
