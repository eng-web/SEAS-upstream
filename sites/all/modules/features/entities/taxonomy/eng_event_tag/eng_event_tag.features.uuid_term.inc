<?php
/**
 * @file
 * eng_event_tag.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_event_tag_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Student Profile',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5add4752-3a94-4d43-a4c2-d8ec26202eb6',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/student-profile',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Alumni',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '672900d4-9e16-4655-b050-94ee8ddc6c74',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/alumni',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Undergrad',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6b009d7e-7caf-4c7b-a0ed-ef984f71548d',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/undergrad',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cover',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73f4cdde-43e3-4093-9be7-cf26a57358f9',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/cover',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Featured',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '775b1436-7a50-47ec-a902-d66e02d5fd35',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/featured',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Grad',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bdfad04a-04ee-4dba-a75e-bc0e0aafd799',
    'vocabulary_machine_name' => 'engineering_event_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/grad',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
