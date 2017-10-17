<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php
$field_hero_image = field_get_items('node', $node, 'field_hero_img');
$image_url = file_create_url($field_hero_image[0]['uri']);
?>
<section class="events-header" style="<?php print "background:url('$image_url') no-repeat 50% 50%;" ?>">
    <div class="content"></div>
</section>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">

    <header>
        <?php if ($title): ?>
            <?php print render($title_prefix); ?>
            <h1 class="title" id="page-title"><?php print $title; ?></h1>
            <?php print render($title_suffix); ?>
        <?php endif; ?>
    </header>
    <?php print '<strong>Date and time</strong>: ' . render($content['field_event_time']); ?>
    <?php if ($field_event_location): ?>
        <p class="location">
            <?php print '<strong>Location</strong>:' . render($content['field_event_location']); ?></p>
    <?php endif; ?>

    <?php if ($field_event_speaker): ?>
        <p class="speaker">
            <?php print '<strong>Speaker</strong>:' . render($content['field_event_speaker']); ?>
        </p>
    <?php endif; ?>
    <?php if ($field_event_type): ?>
        <p class="type">
            <?php print '<strong>Series</strong>:' . render($content['field_event_type']); ?>
        </p>
    <?php endif; ?>
    <?php if ($field_event_website): ?>
        <p class="website">
            <strong>Additional information</strong>: <a href="<?php print $content['field_event_website']['#items'][0]['url']; ?>" target="_blank">Event website</a>
        </p>
    <?php endif; ?>
    <!--<p class="content">
        <?php //print render($content['body']); ?>
    </p>-->

    <?php if ($field_event_google_map) : ?>
        <section id="google-map" class="map">
            <div class="map-content">
                <?php
                print render($content['field_event_google_map']); ?>
            </div>
        </section>
    <?php endif; ?>

</article>

<div class="related-items">


    <?php if ($field_event_impact) : ?>
        <section id="associated-impact" class="related-impact">
            <div class="news-content">
                <?php
                print render($related_impact_heading);
                $eng_impact_area = field_view_field('node', $node, 'field_events_related_impact', array('label' => 'hidden'));
                print '<h2>Areas of Impact</h2>' . render($eng_impact_area);
                ?>
            </div> <!-- / .content / -->
        </section> <!-- / #areas of impact / -->
    <?php endif; ?>

    <?php if (($field_event_department && $field_event_center)) : ?>
        <section id="associated-departments associated-centers" class="related-departments-centers">
            <div class="department-center-content">
                <div class="department-center-items">
                    <?php
                    $eng_related_dept = field_view_field('node', $node, 'field_events_related_depts', array('label' => 'hidden'));
                    $eng_related_center = field_view_field('node', $node, 'field_events_related_center', array('label' => 'hidden'));
                    print render($related_departments_heading);
                    print '<h2>Associated Departments and Centers</h2>' . render($eng_related_dept) . render($eng_related_center); ?>
                </div>
            </div><!-- / .content / -->
        </section><!-- / #associated departments / -->

    <?php elseif ($field_event_department) : ?>
        <section id="associated-departments associated-centers" class="related-departments-centers">
            <div class="department-center-content">
                <div class="department-center-items">
                    <?php
                    $eng_related_dept = field_view_field('node', $node, 'field_events_related_depts', array('label' => 'hidden'));
                    print render($related_departments_heading);
                    print '<h2>Associated Departments and Centers</h2>' . render($eng_related_dept) . render($eng_related_center);
                    ?>
                </div>
            </div> <!-- / .content / -->
        </section> <!-- / #associated departments / -->


    <?php elseif ($field_event_center) : ?>
        <section id="associated-departments associated-centers" class="related-departments-centers">
            <div class="department-center-content">
                <div class="department-center-items">
                    <?php
                    $eng_related_center = field_view_field('node', $node, 'field_events_related_center', array('label' => 'hidden'));
                    print render($related_departments_heading);
                    print '<h2>Associated Departments and Centers</h2>' . render($eng_related_dept) . render($eng_related_center);
                    ?>
                </div>
            </div> <!-- / .content / -->
        </section> <!-- / #associated departments / -->

    <?php else : ?>

    <?php endif; ?>
</div>

