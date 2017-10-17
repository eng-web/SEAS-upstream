<?php
/**
 * @file
 * eng_advisory_council_member.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_advisory_council_member_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|advisory_council_member|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advisory_council_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '0',
    'children' => array(
      0 => 'field_name',
      1 => 'field_company_information',
      2 => 'field_degree_information',
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
  $field_groups['group_contact_info|node|advisory_council_member|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dept_and_center|node|advisory_council_member|form';
  $field_group->group_name = 'group_dept_and_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advisory_council_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advisory Council affiliation',
    'weight' => '1',
    'children' => array(
      0 => 'field_center',
      1 => 'field_department',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advisory Council affiliation',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dept-and-center field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_dept_and_center|node|advisory_council_member|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|node|advisory_council_member|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advisory_council_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_profile_photo',
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
  $field_groups['group_profile|node|advisory_council_member|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advisory Council affiliation');
  t('Contact information');
  t('Profile');

  return $field_groups;
}
