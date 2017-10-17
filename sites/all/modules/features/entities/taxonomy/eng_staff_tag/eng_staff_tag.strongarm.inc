<?php
/**
 * @file
 * eng_staff_tag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_staff_tag_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_engineering_staff_tags_pattern';
  $strongarm->value = 'staff/[term:name]';
  $export['pathauto_taxonomy_term_engineering_staff_tags_pattern'] = $strongarm;

  return $export;
}
