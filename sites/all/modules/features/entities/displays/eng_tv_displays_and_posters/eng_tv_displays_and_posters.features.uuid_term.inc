<?php
/**
 * @file
 * eng_tv_displays_and_posters.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_tv_displays_and_posters_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Safety display',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '105172aa-5d43-4c61-b2b7-8c4634f12750',
    'vocabulary_machine_name' => 'televisions',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'television/safety-display',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lobby display',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c748da3-c9ba-4b9c-8757-fa4a516f4b29',
    'vocabulary_machine_name' => 'televisions',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'television/lobby-display',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Friend center',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7ab7f9f7-99dd-43b4-8691-342d26c29551',
    'vocabulary_machine_name' => 'televisions',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'television/friend-center',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'MAE television',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a59f8a79-dbc1-4919-a012-5b687537a9bd',
    'vocabulary_machine_name' => 'televisions',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'television/mae-television',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ACE display',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bd9f4834-880e-4f05-b634-13c31e2ed7bd',
    'vocabulary_machine_name' => 'televisions',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'television/ace-display',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
