<?php
/**
 * @file
 * eng_faculty.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_faculty_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiliation_tags_fac|node|faculty|form';
  $field_group->group_name = 'group_affiliation_tags_fac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Primary affiliations',
    'weight' => '16',
    'children' => array(
      0 => 'field_primary_affiliations',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Primary affiliations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-affiliation-tags-fac field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_affiliation_tags_fac|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_fac|node|faculty|form';
  $field_group->group_name = 'group_contact_fac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '14',
    'children' => array(
      0 => 'field_building',
      1 => 'field_city',
      2 => 'field_email',
      3 => 'field_fax',
      4 => 'field_office_room',
      5 => 'field_state',
      6 => 'field_telephone',
      7 => 'field_zip_code',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-fac field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_fac|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|faculty|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty contact information',
    'weight' => '2',
    'children' => array(
      0 => 'field_website',
      1 => 'field_building',
      2 => 'field_city',
      3 => 'field_email',
      4 => 'field_fax',
      5 => 'field_office_room',
      6 => 'field_state',
      7 => 'field_telephone',
      8 => 'field_zip_code',
      9 => 'field_research_group_website',
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
  $field_groups['group_contact_info|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_media|node|faculty|form';
  $field_group->group_name = 'group_faculty_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty social media',
    'weight' => '4',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faculty-media field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_faculty_media|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_profile|node|faculty|form';
  $field_group->group_name = 'group_faculty_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty profile',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_photo',
      1 => 'field_facebook',
      2 => 'field_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faculty-profile field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_faculty_profile|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impact|node|faculty|form';
  $field_group->group_name = 'group_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Impact and interdisciplinary research',
    'weight' => '18',
    'children' => array(
      0 => 'field_research_area',
      1 => 'field_topics',
      2 => 'field_research_specialization',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Impact and interdisciplinary research',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-impact field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_impact|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_title_fac|node|faculty|form';
  $field_group->group_name = 'group_name_title_fac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Name and title',
    'weight' => '13',
    'children' => array(
      0 => 'field_faculty_title',
      1 => 'field_name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-name-title-fac field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_name_title_fac|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_title|node|faculty|form';
  $field_group->group_name = 'group_name_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty name and title',
    'weight' => '1',
    'children' => array(
      0 => 'group_impact',
      1 => 'group_affiliation_tags_fac',
      2 => 'group_contact_fac',
      3 => 'group_name_title_fac',
      4 => 'group_social_fac',
      5 => 'group_other_aff',
      6 => 'group_publish_directory',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_name_title|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_aff|node|faculty|form';
  $field_group->group_name = 'group_other_aff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Other affiliations',
    'weight' => '17',
    'children' => array(
      0 => 'field_other_affiliations',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-aff field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_other_aff|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publish_directory|node|faculty|form';
  $field_group->group_name = 'group_publish_directory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Publish to research directory?',
    'weight' => '19',
    'children' => array(
      0 => 'field_faculty_exclude_rd',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publish-directory field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publish_directory|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research|node|faculty|form';
  $field_group->group_name = 'group_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliations and research',
    'weight' => '4',
    'children' => array(
      0 => 'field_research_area',
      1 => 'field_topics',
      2 => 'field_other_affiliations',
      3 => 'field_primary_affiliations',
      4 => 'field_research_specialization',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Affiliations and research',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-research field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_research|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_fac|node|faculty|form';
  $field_group->group_name = 'group_social_fac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_name_title';
  $field_group->data = array(
    'label' => 'Department, research website, and social media links',
    'weight' => '15',
    'children' => array(
      0 => 'field_website',
      1 => 'field_profile_photo',
      2 => 'field_research_group_website',
      3 => 'field_facebook',
      4 => 'field_twitter',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Department, research website, and social media links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-social-fac field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_social_fac|node|faculty|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliations and research');
  t('Contact information');
  t('Department, research website, and social media links');
  t('Faculty contact information');
  t('Faculty name and title');
  t('Faculty profile');
  t('Faculty social media');
  t('Impact and interdisciplinary research');
  t('Name and title');
  t('Other affiliations');
  t('Primary affiliations');
  t('Publish to research directory?');

  return $field_groups;
}
