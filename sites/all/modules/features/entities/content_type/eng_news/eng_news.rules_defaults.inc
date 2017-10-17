<?php
/**
 * @file
 * eng_news.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function eng_news_default_rules_configuration() {
  $items = array();
  $items['rules_news_publish'] = entity_import('rules_config', '{ "rules_news_publish" : {
      "LABEL" : "Scheduler - Published news",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "scheduler" ],
      "ON" : { "scheduler_node_has_been_published_event" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "news" : "news" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Your article was published!",
            "message" : "Dear [node:field-news-author], \\r\\n\\r\\nGood news! Your article, \\u0022[node:title]\\u0027 was published and can be viewed at the following URL [node:url].\\r\\n\\r\\nThanks for your good work,\\r\\n\\r\\n-- Engineering communications",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
