<?php
/**
 * @file
 * eng_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eng_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|eng_events|form';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eng_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_speaker_desc';
  $field_group->data = array(
    'label' => 'Date and time',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_time',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Date and time',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-date-time field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_date_time|node|eng_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_map_locations|node|eng_events|form';
  $field_group->group_name = 'group_event_map_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eng_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_speaker_desc';
  $field_group->data = array(
    'label' => 'Maps',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_location',
      1 => 'field_event_google_map',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-map-locations field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_map_locations|node|eng_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gen_event_info|node|eng_events|form';
  $field_group->group_name = 'group_gen_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eng_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_speaker_desc';
  $field_group->data = array(
    'label' => 'General event information',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_event_website',
      2 => 'field_event_speaker',
      3 => 'title',
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
  $field_groups['group_gen_event_info|node|eng_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|eng_events|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eng_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_speaker_desc';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_impact',
      1 => 'field_event_type',
      2 => 'field_featured_event',
      3 => 'field_event_department',
      4 => 'field_event_center',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tags|node|eng_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_speaker_desc|node|eng_events|form';
  $field_group->group_name = 'group_title_speaker_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eng_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title, date, speaker, and description',
    'weight' => '2',
    'children' => array(
      0 => 'group_date_time',
      1 => 'group_event_map_locations',
      2 => 'group_gen_event_info',
      3 => 'group_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Title, date, speaker, and description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-speaker-desc field-group-htabs',
      ),
    ),
  );
  $field_groups['group_title_speaker_desc|node|eng_events|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date and time');
  t('General event information');
  t('Maps');
  t('Tags');
  t('Title, date, speaker, and description');

  return $field_groups;
}
