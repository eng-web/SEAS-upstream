<?php
/**
 * @file
 * eng_eprinceton_twitter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eng_eprinceton_twitter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eng_tweet_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tweet Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Tweet Contents */
  $handler->display->display_options['fields']['field_tweet_contents']['id'] = 'field_tweet_contents';
  $handler->display->display_options['fields']['field_tweet_contents']['table'] = 'field_data_field_tweet_contents';
  $handler->display->display_options['fields']['field_tweet_contents']['field'] = 'field_tweet_contents';
  $handler->display->display_options['fields']['field_tweet_contents']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_contents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_contents']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_tweet_contents']['element_default_classes'] = FALSE;
  /* Field: Content: Linked Images */
  $handler->display->display_options['fields']['field_tweet_linked_images']['id'] = 'field_tweet_linked_images';
  $handler->display->display_options['fields']['field_tweet_linked_images']['table'] = 'field_data_field_tweet_linked_images';
  $handler->display->display_options['fields']['field_tweet_linked_images']['field'] = 'field_tweet_linked_images';
  $handler->display->display_options['fields']['field_tweet_linked_images']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_linked_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_linked_images']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_tweet_linked_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_linked_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_linked_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_tweet_linked_images']['delta_offset'] = '0';
  /* Field: Content: Link To Tweet */
  $handler->display->display_options['fields']['field_link_to_tweet']['id'] = 'field_link_to_tweet';
  $handler->display->display_options['fields']['field_link_to_tweet']['table'] = 'field_data_field_link_to_tweet';
  $handler->display->display_options['fields']['field_link_to_tweet']['field'] = 'field_link_to_tweet';
  $handler->display->display_options['fields']['field_link_to_tweet']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_tweet']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_tweet']['alter']['text'] = '<a href="[field_link_to_tweet-value]">[field_link_to_tweet-value]</a>';
  $handler->display->display_options['fields']['field_link_to_tweet']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_tweet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_tweet']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_link_to_tweet']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<hr>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'twitter_tweet_feed' => 'twitter_tweet_feed',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tweet Contents (field_tweet_contents) */
  $handler->display->display_options['filters']['field_tweet_contents_value']['id'] = 'field_tweet_contents_value';
  $handler->display->display_options['filters']['field_tweet_contents_value']['table'] = 'field_data_field_tweet_contents';
  $handler->display->display_options['filters']['field_tweet_contents_value']['field'] = 'field_tweet_contents_value';
  $handler->display->display_options['filters']['field_tweet_contents_value']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['field_tweet_contents_value']['value'] = 'RT';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'eprinceton_twitter');
  $handler->display->display_options['path'] = 'eprinceton';
  $export['eng_tweet_feed'] = $view;

  return $export;
}
