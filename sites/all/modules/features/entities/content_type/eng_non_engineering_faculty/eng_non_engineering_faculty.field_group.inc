<?php
/**
 * @file
 * eng_non_engineering_faculty.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_non_engineering_faculty_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eng_aff|node|non_engineering_faculty|form';
  $field_group->group_name = 'group_eng_aff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'non_engineering_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_non_eng_fac';
  $field_group->data = array(
    'label' => 'Engineering affiliation',
    'weight' => '15',
    'children' => array(
      0 => 'field_non_eng_fac_affiliation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eng-aff field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_eng_aff|node|non_engineering_faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_image|node|non_engineering_faculty|form';
  $field_group->group_name = 'group_name_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'non_engineering_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_non_eng_fac';
  $field_group->data = array(
    'label' => 'Faculty name, image, and website',
    'weight' => '14',
    'children' => array(
      0 => 'field_name',
      1 => 'field_profile_photo',
      2 => 'field_website',
      3 => 'field_non_eng_department',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_name_image|node|non_engineering_faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_non_eng_fac|node|non_engineering_faculty|form';
  $field_group->group_name = 'group_non_eng_fac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'non_engineering_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Non eng faculty',
    'weight' => '1',
    'children' => array(
      0 => 'group_name_image',
      1 => 'group_eng_aff',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-non-eng-fac field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_non_eng_fac|node|non_engineering_faculty|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering affiliation');
  t('Faculty name, image, and website');
  t('Non eng faculty');

  return $field_groups;
}
