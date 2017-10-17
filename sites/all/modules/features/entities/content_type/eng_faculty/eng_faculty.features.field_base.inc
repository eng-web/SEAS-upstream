<?php
/**
 * @file
 * eng_faculty.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function eng_faculty_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faculty_news'.
  $field_bases['field_faculty_news'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faculty_news',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  // Exported field_base: 'field_other_affiliations_view'.
  $field_bases['field_other_affiliations_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_affiliations_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  // Exported field_base: 'field_primary_affiliations_view'.
  $field_bases['field_primary_affiliations_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_primary_affiliations_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  // Exported field_base: 'field_topic_affiliations_view'.
  $field_bases['field_topic_affiliations_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topic_affiliations_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  return $field_bases;
}
