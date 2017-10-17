<?php
/**
 * @file
 * eng_staff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_staff_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_bio|node|staff|form';
  $field_group->group_name = 'group_staff_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff bio',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_profile_photo',
      2 => 'field_staff_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-staff-bio field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_staff_bio|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_contact|node|staff|form';
  $field_group->group_name = 'group_staff_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff contact information',
    'weight' => '3',
    'children' => array(
      0 => 'field_office_room',
      1 => 'field_building',
      2 => 'field_institution',
      3 => 'field_city',
      4 => 'field_state',
      5 => 'field_zip_code',
      6 => 'field_telephone',
      7 => 'field_fax',
      8 => 'field_email',
      9 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-staff-contact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_staff_contact|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_name_title|node|staff|form';
  $field_group->group_name = 'group_staff_name_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff name and title',
    'weight' => '1',
    'children' => array(
      0 => 'field_staff_admin_title',
      1 => 'field_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-staff-name-title field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_staff_name_title|node|staff|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staff bio');
  t('Staff contact information');
  t('Staff name and title');

  return $field_groups;
}
