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
 *
 */
$new_scald_markup = $content['field_profile_photo'][0]['#markup'];
$char_strip = array("<div class='image'>", "</div>");
$new_scald_markup = str_replace($char_strip, " ", $new_scald_markup);
$content['field_profile_photo'][0]['#markup'] = $new_scald_markup;
?>
<div class="faculty-profile">

    <div class="image">
        <a href="<?php print $content['field_website']['#items'][0]['url']; ?>"
           target="_blank"><?php print render($content['field_profile_photo']); ?></a>
    </div>

    <div class="profile-info">
        <h1><a href="<?php print $content['field_website']['#items'][0]['url']; ?>"
               target="_blank"><?php print render($content['field_name']); ?></a></h1>

        <?php foreach ($fac_title as $the_title) { //loops through each faculty title (josh)
            echo '<h2>' . $the_title['safe_value'] . '</h2>';
        } ?>

        <p>
            <strong>Office:</strong> <?php print render($content['field_office_room']); ?> <?php print render($content['field_building']); ?>
            <br> <?php print trim(render($content['field_city'])) . ','; ?><?php print render($content['field_state']); ?> <?php print render($content['field_zip_code']); ?>
        </p>

        <?php if ($field_email) : ?>
            <p><strong>Email:</strong> <?php print render($content['field_email']); ?></p>
        <?php endif; ?>

        <?php if ($field_telephone) : ?>
            <p><strong>Phone:</strong> <?php print render($content['field_telephone']); ?></p>
        <?php endif; ?>

        <?php if ($field_fax) : ?>
            <p><strong>Fax:</strong> <?php print render($content['field_fax']); ?></p>
        <?php endif; ?>

        <?php if ($field_research_specialization) : ?>
        <p><strong>Interdisciplinary Research Area:</strong>
            <?php
            $total = count($fac_research);
            $i = 0;
            foreach ($fac_research as $name => $the_research) {
                $i++;
                $research_name = $the_research['entity']->name;
                $characters_in_name = array(", ", " ");
                $research_slug = strtolower(str_replace($characters_in_name, "-", $research_name));
                $research_link = "<a href='/interdisciplinary-research/$research_slug'>" . $research_name . '</a>';
                echo $research_link;
                if ($i != $total) echo ', ';
            }
            ?>
            <?php endif; ?>

            <?php if ($field_research_area) : ?>
        <p><strong>Research Specializations:</strong> <?php print render($content['field_research_area']); ?></p>
    <?php endif; ?>
    </div><!-- / .profile-info / -->
</div>
</div><!-- / .node / -->

<div class="related-items">

    <!-- faculty news -->

    <?php if ($eng_faculty_news = field_view_field('node', $node, 'field_faculty_news', array('label' => 'hidden'))) : ?>
        <section id="associated-news" class="related-news">
            <div class="news-content">
                <?php print '<h2>Related News</h2>' . render($eng_faculty_news); ?>
            </div> <!-- end news content -->
        </section><!-- end associated news section -->
    <?php endif; ?>


    <!-- faculty impact -->

    <?php if ($field_topics): ?>
        <section id="associated-impact" class="related-impact">
            <div class="impact-content">
                <?php
                $eng_core_topics = field_view_field('node', $node, 'field_topic_affiliations_view', array('label' => 'hidden'));
                print '<h2>Areas of Impact</h2>' . render($eng_core_topics);
                ?>
            </div><!-- end content -->
        </section><!-- end associated impact section -->
    <?php endif; ?>

    <!-- primary affiliations -->
    <?php if ($field_primary_affiliations) : ?>
        <section id="associated-primary-affiliations" class="related-departments-centers">
            <div class="department-center-content">
                <?php
                $eng_primary_affiliation = field_view_field('node', $node, 'field_primary_affiliations_view', array('label' => 'hidden'));
                print '<h2>Primary affiliation</h2>' . render($eng_primary_affiliation);
                ?>
            </div><!-- end content -->
        </section><!-- end associated-primary-affiliations-->
    <?php endif; ?>
</div>


    <?php /* if ($field_other_affiliations) : ?>
        <section id="associated-other-affiliations" class="related-departments-centers">
            <div class="department-center-content">
                <?php
                $eng_other_affiliation = field_view_field('node', $node, 'field_other_affiliations_view', array('label' => 'hidden'));
                print '<h2>Other affiliations</h2>' . render($eng_other_affiliation);
                ?>
            </div> <!-- / .content / -->
        <!-- </section> <!-- / #associated-other-affiliations / -->
    <?php endif; ?>*/
