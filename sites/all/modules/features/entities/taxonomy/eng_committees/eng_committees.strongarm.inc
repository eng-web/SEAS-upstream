<?php
/**
 * @file
 * eng_committees.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_committees_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_committees_pattern';
  $strongarm->value = 'affiliate-committees/[term:name]';
  $export['pathauto_taxonomy_term_committees_pattern'] = $strongarm;

  return $export;
}
