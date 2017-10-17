<?php
/**
 * @file
 * eng_shared_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_shared_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function eng_shared_fields_paragraphs_info() {
  $items = array(
    'eng_paragraph_company' => array(
      'name' => 'Institution',
      'bundle' => 'eng_paragraph_company',
      'locked' => '1',
    ),
    'eng_paragraph_degree' => array(
      'name' => 'Degree',
      'bundle' => 'eng_paragraph_degree',
      'locked' => '1',
    ),
    'news_author' => array(
      'name' => 'News author',
      'bundle' => 'news_author',
      'locked' => '1',
    ),
    'news_img_12col' => array(
      'name' => 'Image: Full-width',
      'bundle' => 'news_img_12col',
      'locked' => '1',
    ),
    'news_img_3col' => array(
      'name' => 'Image: One-fourth',
      'bundle' => 'news_img_3col',
      'locked' => '1',
    ),
    'news_img_4col' => array(
      'name' => 'Image: One-third',
      'bundle' => 'news_img_4col',
      'locked' => '1',
    ),
    'news_img_6col' => array(
      'name' => 'Image: Half-width',
      'bundle' => 'news_img_6col',
      'locked' => '1',
    ),
    'news_img_8col' => array(
      'name' => 'Image: Two-thirds',
      'bundle' => 'news_img_8col',
      'locked' => '1',
    ),
    'news_img_9col' => array(
      'name' => 'Image: Three-fourths',
      'bundle' => 'news_img_9col',
      'locked' => '1',
    ),
    'news_lede' => array(
      'name' => 'Lede',
      'bundle' => 'news_lede',
      'locked' => '1',
    ),
    'news_pull_quote_12col' => array(
      'name' => 'Pull quote: Full-width',
      'bundle' => 'news_pull_quote_12col',
      'locked' => '1',
    ),
    'news_pull_quote_3col' => array(
      'name' => 'Pull quote: One-fourth',
      'bundle' => 'news_pull_quote_3col',
      'locked' => '1',
    ),
    'news_pull_quote_4col' => array(
      'name' => 'Pull quote: One-third',
      'bundle' => 'news_pull_quote_4col',
      'locked' => '1',
    ),
    'news_pull_quote_6col' => array(
      'name' => 'Pull quote: Half-width',
      'bundle' => 'news_pull_quote_6col',
      'locked' => '1',
    ),
    'news_pull_quote_8col' => array(
      'name' => 'Pull quote: Two-thirds',
      'bundle' => 'news_pull_quote_8col',
      'locked' => '1',
    ),
    'news_pull_quote_9col' => array(
      'name' => 'Pull quote: Three-fourths',
      'bundle' => 'news_pull_quote_9col',
      'locked' => '1',
    ),
    'news_text_12col' => array(
      'name' => 'Text: Full-width',
      'bundle' => 'news_text_12col',
      'locked' => '1',
    ),
    'news_text_3col' => array(
      'name' => 'Text: One-fourth',
      'bundle' => 'news_text_3col',
      'locked' => '1',
    ),
    'news_text_4col' => array(
      'name' => 'Text: One-third',
      'bundle' => 'news_text_4col',
      'locked' => '1',
    ),
    'news_text_6col' => array(
      'name' => 'Text: Half-width',
      'bundle' => 'news_text_6col',
      'locked' => '1',
    ),
    'news_text_8col' => array(
      'name' => 'Text: Two-thirds',
      'bundle' => 'news_text_8col',
      'locked' => '1',
    ),
    'news_text_9col' => array(
      'name' => 'Text: Three-fourths',
      'bundle' => 'news_text_9col',
      'locked' => '1',
    ),
    'news_video_12col' => array(
      'name' => 'Video: Full-width',
      'bundle' => 'news_video_12col',
      'locked' => '1',
    ),
    'news_video_3col' => array(
      'name' => 'Video: One-fourth',
      'bundle' => 'news_video_3col',
      'locked' => '1',
    ),
    'news_video_4col' => array(
      'name' => 'Video: One-third',
      'bundle' => 'news_video_4col',
      'locked' => '1',
    ),
    'news_video_6col' => array(
      'name' => 'Video: Half-width',
      'bundle' => 'news_video_6col',
      'locked' => '1',
    ),
    'news_video_8col' => array(
      'name' => 'Video: Two-thirds',
      'bundle' => 'news_video_8col',
      'locked' => '1',
    ),
    'news_video_9col' => array(
      'name' => 'Video: Three-fourths',
      'bundle' => 'news_video_9col',
      'locked' => '1',
    ),
    'page_img_12col' => array(
      'name' => 'Page Image: Full-width',
      'bundle' => 'page_img_12col',
      'locked' => '1',
    ),
    'page_img_3col' => array(
      'name' => 'Page Image: One-fourth',
      'bundle' => 'page_img_3col',
      'locked' => '1',
    ),
    'page_img_4col' => array(
      'name' => 'Page Image: One-third',
      'bundle' => 'page_img_4col',
      'locked' => '1',
    ),
    'page_img_6col' => array(
      'name' => 'Page Image: Half-width',
      'bundle' => 'page_img_6col',
      'locked' => '1',
    ),
    'page_img_8col' => array(
      'name' => 'Page Image: Two-thirds',
      'bundle' => 'page_img_8col',
      'locked' => '1',
    ),
    'page_img_9col' => array(
      'name' => 'Page Image: Three-fourths',
      'bundle' => 'page_img_9col',
      'locked' => '1',
    ),
    'page_text_12col' => array(
      'name' => 'Page Text Full-Width',
      'bundle' => 'page_text_12col',
      'locked' => '1',
    ),
    'page_text_3col' => array(
      'name' => 'Page Text: One-fourth',
      'bundle' => 'page_text_3col',
      'locked' => '1',
    ),
    'page_text_4col' => array(
      'name' => 'Page Text: One-third',
      'bundle' => 'page_text_4col',
      'locked' => '1',
    ),
    'page_text_6col' => array(
      'name' => 'Page Text: One-half',
      'bundle' => 'page_text_6col',
      'locked' => '1',
    ),
    'page_text_8col' => array(
      'name' => 'Page Text: Two-thirds',
      'bundle' => 'page_text_8col',
      'locked' => '1',
    ),
    'page_text_9col' => array(
      'name' => 'Page Text: Three-fourths',
      'bundle' => 'page_text_9col',
      'locked' => '1',
    ),
    'page_video_12col' => array(
      'name' => 'Page Video: Full-width',
      'bundle' => 'page_video_12col',
      'locked' => '1',
    ),
    'page_video_3col' => array(
      'name' => 'Page Video: One-fourth',
      'bundle' => 'page_video_3col',
      'locked' => '1',
    ),
    'page_video_4col' => array(
      'name' => 'Page Video: Two-thirds',
      'bundle' => 'page_video_4col',
      'locked' => '1',
    ),
    'page_video_6col' => array(
      'name' => 'Page Video: Half-width',
      'bundle' => 'page_video_6col',
      'locked' => '1',
    ),
    'page_video_8col' => array(
      'name' => 'Page Video: Two-thirds',
      'bundle' => 'page_video_8col',
      'locked' => '1',
    ),
    'page_video_9col' => array(
      'name' => 'Page Video: Three-fourths',
      'bundle' => 'page_video_9col',
      'locked' => '1',
    ),
  );
  return $items;
}
