<?php
/**
 * @file
 * eng_affiliated_centers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_affiliated_centers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_affiliated_center_pattern';
  $strongarm->value = 'affiliate-centers/[term:name]';
  $export['pathauto_taxonomy_term_affiliated_center_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_auto_redirect';
  $strongarm->value = 1;
  $export['redirect_auto_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term_affiliated_center';
  $strongarm->value = 'affiliated_center';
  $export['uuid_features_entity_taxonomy_term_affiliated_center'] = $strongarm;

  return $export;
}
