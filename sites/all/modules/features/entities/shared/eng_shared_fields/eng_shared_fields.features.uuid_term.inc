<?php
/**
 * @file
 * eng_shared_fields.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_shared_fields_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'The Princeton Rocketry Club',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ec06d0f-72eb-4b2b-ad16-1b8d03c00a47',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/princeton-rocketry-club',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'undefined',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '448f9799-c52f-40a1-a6f4-39469177731d',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/undefined',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'faculty',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5262775e-22f7-4846-b760-a5062ecbc732',
    'vocabulary_machine_name' => 'scald_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'scald-tags/faculty',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sameer Khan/Fotobuddy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '61a6763c-508d-44db-987c-addb5f91afc7',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/sameer-khanfotobuddy',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'innovation-forum',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9319efe3-f1bd-4d91-8b91-521bb059d184',
    'vocabulary_machine_name' => 'scald_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'scald-tags/innovation-forum',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'David Kelly Crow',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a4434316-865f-4c79-ad19-91d420b199d0',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/david-kelly-crow',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fotobuddy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dc8013ad-784a-4180-bc58-7ec6f76ad8b7',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/fotobuddy',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Frank Wojciechowski',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e6576902-7997-4402-956c-5efd75e3f04f',
    'vocabulary_machine_name' => 'scald_authors',
    'scald_author_url' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'authors/frank-wojciechowski',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'David Kelly Crow',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f640aad2-85d9-4b4a-bfda-72295803de5c',
    'vocabulary_machine_name' => 'scald_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'scald-tags/david-kelly-crow',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
