<?php
/**
 * @file
 * eng_news_tag.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function eng_news_tag_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Featured',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '06637542-48a5-4306-91de-3aa416387eb0',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/featured',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Top',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '1455c497-5dbb-46b0-a0fa-996b06b226a4',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/top',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Alumni',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '379cadde-c1bc-4bd0-b77c-ed402458a42e',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/alumni',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Undergrad',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '582e419e-528c-4c71-b51d-812c7d3b89b1',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/undergrad',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Grad',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '8bfd3160-1279-4f90-8af2-115f23c0623f',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/grad',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Front page',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '9bcc7ae7-a51e-47ae-a24e-c008cd6f787a',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/front-page',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'befcac8b-e04f-4e93-85ac-aa04cd40bd46',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/research',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Student Profile',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'ffb6fb38-ba05-495a-a3ab-7b329c107c8d',
    'vocabulary_machine_name' => 'engineering_news_type',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/student-profile',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
