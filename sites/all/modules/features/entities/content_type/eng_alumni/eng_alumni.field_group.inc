<?php
/**
 * @file
 * eng_alumni.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_alumni_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiliations|node|alumni|form';
  $field_group->group_name = 'group_affiliations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliations',
    'weight' => '2',
    'children' => array(
      0 => 'field_department',
      1 => 'field_center',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-affiliations field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_affiliations|node|alumni|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|alumni|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni';
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
  $field_groups['group_contact_info|node|alumni|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|node|alumni|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_company',
      2 => 'field_degree',
      3 => 'field_profile_photo',
      4 => 'title',
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
  $field_groups['group_profile|node|alumni|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliations');
  t('Contact information');
  t('Profile');

  return $field_groups;
}
