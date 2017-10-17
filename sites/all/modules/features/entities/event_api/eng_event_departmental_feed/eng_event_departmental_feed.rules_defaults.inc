<?php
/**
 * @file
 * eng_event_departmental_feed.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function eng_event_departmental_feed_default_rules_configuration() {
  $items = array();
  $items['eng_event_departmental_feed_event_published_alert'] = entity_import('rules_config', '{ "eng_event_departmental_feed_event_published_alert" : {
      "LABEL" : "Event published notification",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "2",
      "OWNER" : "rules",
      "TAGS" : [ "email", "events" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--eng_events" : { "bundle" : "eng_events" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "eng_events" : "eng_events" } }
          }
        },
        { "AND" : [
            { "data_is" : { "data" : [ "node:status" ], "value" : "1" } },
            { "NOT user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "8" : "8" } },
                "operation" : "OR"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : [ "node:author:mail" ],
              "subject" : "Your event was published!\\r\\n",
              "body" : "Hi [node:author:field_display_name], \\r\\n\\r\\nGood news. \\u0022[node:title]\\u0022 has been published and can be viewed \\u003Ca href=\\u0022[node:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E.\\r\\n\\r\\nSchool of Engineering and Applied Science",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_event_author" : "Send status event author" } }
          }
        }
      ]
    }
  }');
  $items['rules_eng_event_importer_alert'] = entity_import('rules_config', '{ "rules_eng_event_importer_alert" : {
      "LABEL" : "Event importer notification",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "OWNER" : "rules",
      "TAGS" : [ "email", "events" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert--eng_events" : { "bundle" : "eng_events" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "eng_events" : "eng_events" } }
          }
        },
        { "AND" : [
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "8" : "8" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : "\\u003Cengweb@princeton.edu\\u003E",
              "subject" : "A new event has been added",
              "body" : "Hi, \\r\\n\\r\\n\\u003Cp\\u003E\\u0022[node:title]\\u0022 has been added by [node:author:field-display-name].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003EDepartment or Center\\u003C\\/strong\\u003E: [node:field-event-department][node:field-event-center]\\r\\n\\u003Cstrong\\u003EEvent website\\u003C\\/strong\\u003E: [node:field-event-website:url]\\r\\n\\u003Cstrong\\u003ELocation\\u003C\\/strong\\u003E: [node:field-event-location:title]\\r\\n\\r\\nEdit link: [node:edit-url]\\r\\nEvent link: [node:url]\\r\\n\\r\\n\\u003Cp\\u003EAll the latest event submissions can be viewed at [site:url]admin\\/workbench\\/content\\/events.\\u003C\\/p\\u003E\\r\\n\\r\\nThanks,\\r\\n[site:name]",
              "plaintext" : "Hi, \\r\\n\\r\\n\\u0022[node:title]\\u0022 has been published. \\r\\n\\r\\nDepartment or Center: [node:field-event-department][node:field-event-center]\\r\\n\\r\\nEvent website: [node:field-event-website]\\r\\n\\r\\nDate \\/ Time: [node:field-event-time]\\r\\n\\r\\nLocation: [node:field-event-location]\\r\\n\\r\\nAuthor: [node:author]\\r\\n\\r\\nEdit link: [node:edit-url]\\r\\n\\r\\nEvent link: [node:url]\\r\\n\\r\\nAll the latest event submissions can be viewed at [site:url]admin\\/workbench\\/content\\/events.\\r\\n\\r\\nThanks,\\r\\n\\r\\n[site:name]",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status" : "Send status" } }
          }
        },
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : [ "site:current-user:mail" ],
              "subject" : "Thanks for adding your event!\\r\\n\\r\\n",
              "body" : "Hi [node:author:field_display_name], \\r\\n\\r\\nThanks for adding \\u0022[node:title]\\u0022 to our event listing. The event will be published shortly. Edits to this event can be made by visiting [node:edit-url]. \\r\\n\\r\\nSchool of Engineering and Applied Science",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_event_author" : "Send status event author" } }
          }
        }
      ]
    }
  }');
  $items['rules_event_api_importer_notification'] = entity_import('rules_config', '{ "rules_event_api_importer_notification" : {
      "LABEL" : "Event API importer notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "email", "events" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert--eng_events" : { "bundle" : "eng_events" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "eng_events" : "eng_events" } }
          }
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "site:feed-node" ] } },
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : "\\u003Cengweb@princeton.edu\\u003E",
              "subject" : "A new event has been added",
              "body" : "Hi, \\r\\n\\r\\n\\u003Cp\\u003E\\u0022[node:title]\\u0022 has been added by [node:field-event-department][node:field-event-center]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003EEvent website\\u003C\\/strong\\u003E: [node:field-event-website:url]\\r\\n\\u003Cstrong\\u003ELocation\\u003C\\/strong\\u003E: [node:field-event-location:title]\\r\\n\\r\\nEdit link: [node:edit-url]\\r\\nEvent link: [node:url]\\r\\n\\r\\n\\u003Cp\\u003EAll the latest event submissions can be viewed at [site:url]admin\\/workbench\\/content\\/events.\\u003C\\/p\\u003E\\r\\n\\r\\nThanks,\\r\\n[site:name]",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_api" : "Send status api" } }
          }
        }
      ]
    }
  }');
  $items['rules_event_content_update_notification'] = entity_import('rules_config', '{ "rules_event_content_update_notification" : {
      "LABEL" : "Event content update notification",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--eng_events" : { "bundle" : "eng_events" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "eng_events" : "eng_events" } }
          }
        },
        { "AND" : [
            { "NOT data_is" : { "data" : [ "node:created" ], "value" : [ "node:changed" ] } },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "8" : "8" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : "\\u003Cengweb@princeton.edu\\u003E",
              "subject" : "An event was updated",
              "body" : "Hi, \\r\\n\\r\\n\\u003Cp\\u003E\\u0022[node:title]\\u0022 was updated by [node:author:field-display-name] and needs review.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003EDepartment or Center\\u003C\\/strong\\u003E: [node:field-event-department][node:field-event-center]\\r\\n\\u003Cstrong\\u003EEvent website\\u003C\\/strong\\u003E: [node:field-event-website:url]\\r\\n\\u003Cstrong\\u003ELocation\\u003C\\/strong\\u003E: [node:field-event-location:title]\\r\\n\\r\\nEdit link: [node:edit-url]\\r\\nEvent link: [node:url]\\r\\n\\r\\n\\u003Cp\\u003EAll the latest event submissions can be viewed at [site:url]admin\\/workbench\\/content\\/events.\\u003C\\/p\\u003E\\r\\n\\r\\nThanks,\\r\\n[site:name]",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_update" : "Send status update" } }
          }
        },
        { "mimemail" : {
            "USING" : {
              "key" : "[site:name]",
              "to" : "\\u003C[node:author:mail]\\u003E",
              "cc" : "\\u003Cengweb@princeton.edu\\u003E",
              "subject" : "Thanks for adding your event!",
              "body" : "Hi [node:author:field_display_name], \\r\\n\\r\\nThanks for updating \\u0022[node:title]\\u0022. The event will be published shortly. Additional edits to this event can be made by visiting [node:edit-url]. \\r\\n\\r\\nSchool of Engineering and Applied Science",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_event_author_updated" : "Send status event author updated" } }
          }
        }
      ]
    }
  }');
  return $items;
}
