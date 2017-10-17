<?php
/**
 * @file
 * eng_student.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_student_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiliation|node|student|form';
  $field_group->group_name = 'group_affiliation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliations',
    'weight' => '11',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_center',
      2 => 'field_department',
      3 => 'field_adviser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-affiliation field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_affiliation|node|student|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|student|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '0',
    'children' => array(
      0 => 'field_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_info|node|student|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|node|student|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '1',
    'children' => array(
      0 => 'field_student_status',
      1 => 'field_thesis',
      2 => 'field_extracurricular',
      3 => 'field_honors',
      4 => 'field_for_fun',
      5 => 'field_lede',
      6 => 'field_profile_photo',
      7 => 'field_research_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_profile|node|student|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliations');
  t('Contact information');
  t('Profile');

  return $field_groups;
}
