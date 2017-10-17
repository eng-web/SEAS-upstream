<?php
/**
 * @file
 * eng_eprinceton_twitter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eng_eprinceton_twitter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_twitter_tweet_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_twitter_tweet_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_twitter_tweet_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_twitter_tweet_feed';
  $strongarm->value = 1;
  $export['comment_form_location_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_twitter_tweet_feed';
  $strongarm->value = '1';
  $export['comment_preview_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_twitter_tweet_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_twitter_tweet_feed';
  $strongarm->value = '0';
  $export['comment_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_twitter_tweet_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_twitter_tweet_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_twitter_tweet_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_twitter_tweet_feed';
  $strongarm->value = '1';
  $export['node_preview_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_twitter_tweet_feed';
  $strongarm->value = 1;
  $export['node_submitted_twitter_tweet_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_twitter_tweet_feed_pattern';
  $strongarm->value = 'tweets/[node:title]';
  $export['pathauto_node_twitter_tweet_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_twitter_user_profile_pattern';
  $strongarm->value = '';
  $export['pathauto_node_twitter_user_profile_pattern'] = $strongarm;

  return $export;
}
