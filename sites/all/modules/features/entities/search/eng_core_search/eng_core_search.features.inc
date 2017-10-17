<?php
/**
 * @file
 * eng_core_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eng_core_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eng_core_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function eng_core_search_default_search_api_index() {
  $items = array();
  $items['core_search'] = entity_import('search_api_index', '{
    "name" : "Core search",
    "machine_name" : "core_search",
    "description" : "Index for core search",
    "server" : "solr",
    "item_type" : "multiple",
    "options" : {
      "datasource" : { "types" : [ "paragraphs_item", "node", "taxonomy_term" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "node" : { "type" : "integer", "entity_type" : "node" },
        "node:body:summary" : { "type" : "text", "boost" : "5.0" },
        "node:body:value" : { "type" : "text", "boost" : "5.0" },
        "node:field_center" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_center:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "13.0" },
        "node:field_department" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_department:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_email" : { "type" : "text", "boost" : "5.0" },
        "node:field_event_impact" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_event_impact:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_event_time:value" : { "type" : "list\\u003Cdate\\u003E" },
        "node:field_event_time:value2" : { "type" : "list\\u003Cdate\\u003E" },
        "node:field_event_website:title" : { "type" : "text", "boost" : "3.0" },
        "node:field_event_website:url" : { "type" : "uri" },
        "node:field_faculty_title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_name:family" : { "type" : "text", "boost" : "21.0" },
        "node:field_name:generational" : { "type" : "text", "boost" : "21.0" },
        "node:field_name:given" : { "type" : "text", "boost" : "21.0" },
        "node:field_name:middle" : { "type" : "text", "boost" : "21.0" },
        "node:field_news" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "node:field_news:field_content:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_news:field_news_content:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_office_room" : { "type" : "text", "boost" : "5.0" },
        "node:field_page_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "node:field_page_content:field_content:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_primary_affiliations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_publish_date" : { "type" : "date" },
        "node:field_related_people:field_name:family" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_related_people:field_name:generational" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_related_people:field_name:given" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_related_people:field_name:middle" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:field_related_people:title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_research_area" : { "type" : "text", "boost" : "5.0" },
        "node:field_research_specialization" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_research_specialization:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "13.0" },
        "node:field_staff_admin_title" : { "type" : "list\\u003Ctext\\u003E" },
        "node:field_summary:value" : { "type" : "text", "boost" : "5.0" },
        "node:field_telephone" : { "type" : "text", "boost" : "5.0" },
        "node:field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_topics:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "node:status" : { "type" : "boolean" },
        "node:title" : { "type" : "text", "boost" : "21.0" },
        "paragraphs_item:bundle" : { "type" : "text" },
        "paragraphs_item:field_content:value" : { "type" : "text", "boost" : "5.0" },
        "paragraphs_item:field_news_content:value" : { "type" : "text", "boost" : "5.0" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_term:description" : { "type" : "text", "boost" : "13.0" },
        "taxonomy_term:field_eng_center" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_term:field_eng_department" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_term:field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_term:name" : { "type" : "text", "boost" : "13.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "node:feed" : "node:feed",
              "node:feed_item" : "node:feed_item",
              "node:twitter_tweet_feed" : "node:twitter_tweet_feed",
              "node:twitter_user_profile" : "node:twitter_user_profile",
              "taxonomy_term:tags" : "taxonomy_term:tags",
              "taxonomy_term:scald_tags" : "taxonomy_term:scald_tags",
              "taxonomy_term:engineering_staff_tags" : "taxonomy_term:engineering_staff_tags",
              "taxonomy_term:student_status" : "taxonomy_term:student_status",
              "taxonomy_term:affiliated_center" : "taxonomy_term:affiliated_center",
              "taxonomy_term:affiliated_department" : "taxonomy_term:affiliated_department",
              "taxonomy_term:committees" : "taxonomy_term:committees",
              "taxonomy_term:council" : "taxonomy_term:council",
              "taxonomy_term:interdisciplinary_programs" : "taxonomy_term:interdisciplinary_programs",
              "taxonomy_term:faculty_research_specialties" : "taxonomy_term:faculty_research_specialties",
              "taxonomy_term:eng_news_partners" : "taxonomy_term:eng_news_partners",
              "taxonomy_term:hashtag_terms" : "taxonomy_term:hashtag_terms",
              "taxonomy_term:user_mention_terms" : "taxonomy_term:user_mention_terms"
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "node" : true,
              "search_api_language" : true,
              "paragraphs_item:bundle" : true,
              "node:title" : true,
              "node:field_faculty_title" : true,
              "node:field_research_area" : true,
              "node:field_topics" : true,
              "node:field_email" : true,
              "node:field_office_room" : true,
              "node:field_telephone" : true,
              "node:field_primary_affiliations" : true,
              "node:field_research_specialization" : true,
              "node:field_staff_admin_title" : true,
              "node:field_center" : true,
              "node:field_department" : true,
              "node:field_event_impact" : true,
              "node:field_page_content" : true,
              "taxonomy_term:name" : true,
              "taxonomy_term:description" : true,
              "taxonomy_term:field_topics" : true,
              "taxonomy_term:field_eng_department" : true,
              "taxonomy_term:field_eng_center" : true,
              "paragraphs_item:field_news_content:value" : true,
              "paragraphs_item:field_content:value" : true,
              "node:body:value" : true,
              "node:field_topics:name" : true,
              "node:field_name:given" : true,
              "node:field_name:middle" : true,
              "node:field_name:family" : true,
              "node:field_name:generational" : true,
              "node:field_research_specialization:name" : true,
              "node:field_center:name" : true,
              "node:field_department:name" : true,
              "node:field_event_time:value" : true,
              "node:field_event_time:value2" : true,
              "node:field_event_impact:name" : true,
              "node:field_event_website:title" : true,
              "node:field_event_website:url" : true,
              "node:field_related_people:title" : true,
              "node:field_summary:value" : true,
              "node:field_related_people:field_name:given" : true,
              "node:field_related_people:field_name:middle" : true,
              "node:field_related_people:field_name:family" : true,
              "node:field_related_people:field_name:generational" : true,
              "node:field_page_content:field_content:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "node" : true, "paragraphs_item:field_news_content:value" : true },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "paragraphs_item:field_news_content:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "paragraphs_item:field_news_content:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : { "paragraphs_item:field_news_content:value" : true },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function eng_core_search_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
