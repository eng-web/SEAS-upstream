<?php
/**
 * @file
 * eng_staff_tag.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_staff_tag_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '33ae0607-579e-4bbb-bc9d-407151a9fe4c',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/development',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Associate Dean - Development',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '62bc4a99-a295-4f63-9217-f6b64e566503',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/associate-dean-development',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dean',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '84df83ba-c318-4608-966f-611e4ac3d2a3',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/dean',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Associate Dean - Undergraduate Affairs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '86f0bcb8-82f9-41cc-a3d2-2b0e10881cf1',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/associate-dean-undergraduate-affairs',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Administrative',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89135476-40b5-4639-ad0e-3e8fc017e197',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/administrative',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Communications',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '96a56ef4-14c7-470c-8b5c-b907fcf5cb99',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/communications',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Vice Dean',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '9c78abba-a6e6-4def-8be8-18c4f3a1e30f',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/vice-dean',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Building and Technical Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => 'ab3fde2d-be60-4dda-9b2b-3e4f6f975b46',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/building-and-technical-services',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mail, Receiving, and Stockroom',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'bf458965-f900-414e-9111-233cb38300b4',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/mail-receiving-and-stockroom',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Associate Dean - Graduate Affairs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => 'c8966271-febf-45c1-903c-bb3d77490002',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/associate-dean-graduate-affairs',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Machine Shop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'e8555ae4-5d05-4ec5-94ca-c79e0c6f35bc',
    'vocabulary_machine_name' => 'engineering_staff_tags',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'staff/machine-shop',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
