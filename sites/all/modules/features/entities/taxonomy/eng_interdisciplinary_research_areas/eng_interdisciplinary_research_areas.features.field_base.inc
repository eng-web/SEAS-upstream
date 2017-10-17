<?php
/**
 * @file
 * eng_interdisciplinary_research_areas.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function eng_interdisciplinary_research_areas_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hero_image'.
  $field_bases['field_hero_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_image',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  return $field_bases;
}
