<?php

/**
 * @file
 * Default theme implementation to display a term.
 *
 * Available variables:
 * - $name: (deprecated) The unsanitized name of the term. Use $term_name
 *   instead.
 * - $content: An array of items for the content of the term (fields and
 *   description). Use render($content) to print them all, or print a subset
 *   such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $term_url: Direct URL of the current term.
 * - $term_name: Name of the current term.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - taxonomy-term: The current template type, i.e., "theming hook".
 *   - vocabulary-[vocabulary-name]: The vocabulary to which the term belongs to.
 *     For example, if the term is a "Tag" it would result in "vocabulary-tag".
 *
 * Other variables:
 * - $term: Full term object. Contains data that may not be safe.
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $page: Flag for the full page state.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the term. Increments each time it's output.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_taxonomy_term()
 * @see template_process()
 *
 * @ingroup themeable
 *
 * This used to be on the bottom of the page after Areas of Impact
 * <!-- advisory council -->
 * <section id="<?php print strtolower(str_replace(" ", "-", $term_name)) . '-advisory-council'?>" class="advisory-council">
 *     <div class="advisory-council-content">
 *         <h2>Advisory Council</h2>
 *         <?php
 *         $center_advisory_council = field_view_field('taxonomy_term', $term, 'field_center_advisory_council', array('label' =>'hidden'));
 *         print render($center_advisory_council);
 *         ?>
 *     </div>
 * </section><!-- end advisory council -->
 */
$field_hero_image = field_get_items('taxonomy_term', $term, 'field_hero_img');
$image_url = file_create_url($field_hero_image[0]['uri']);
$image_alt = $content['field_hero_img'][0]['#item']['alt'];
?>

<div id="<?php print strtolower(str_replace(" ", "-", $term_name)); ?>" class="<?php print "impact" ?>">

    <?php if (!$page): ?>
        <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
    <?php endif; ?>
    <section class="center-header">
        <div class="center-header-inner">
            <div class="content">
                <h1 class="title" id="page-title"><?php print $term_name ?></h1>
                <p><?php print render($content['description']); ?></p>
                <?php print '<p class="learn-more-button"><a href=' . ($content['field_center_link'][0]['#element']['url']) . ' target="_blank">Visit Center Website</a></p>'; ?>
            </div>
            <div class="header-image">
                <img src="<?php print render($image_url) ?>" alt="<?php print render($image_alt) ?>">
            </div>
        </div>
    </section>
    <div class="content">

        <!-- associated faculty -->
        <section id="<?php print strtolower(str_replace(" ", "-", $term_name)) . '-related-faculty' ?>"
                 class="related-faculty">
            <div class="faculty-content">
                <?php
                $center_faculty = field_view_field('taxonomy_term', $term, 'field_center_faculty_view', array('label' => 'hidden'));
                //$center_associated_faculty = field_view_field('taxonomy_term', $term, 'field_center_aff_fac_view', array('label' => 'hidden'));

                print '<h2>Faculty</h2>
                    <div class="faculty-items">' . render($center_faculty) . '</div>';

                ?>
            </div>
        </section><!-- end faculty -->

        <div class="related-items">

            <!-- related news -->
            <?php
            if ($content['field_center_news_view']) : ?>
                <section id="<?php print strtolower(str_replace(" ", "-", $term_name)) . '-related-news' ?>"
                         class="related-news">
                    <div class="news-content">
                        <?php $center_news = field_view_field('taxonomy_term', $term, 'field_center_news_view', array('label' => 'hidden'));
                        print '<h2>' . render($term_name) . ' News</h2>';
                        print render($center_news);
                        ?>
                    </div>
                </section> <!-- end related news -->
            <?php endif; ?>


            <!-- related events-->

            <?php
            if ($content['field_related_events_view']) : ?>
                <section id="<?php print strtolower(str_replace(" ", "-", $term_name)) . '-related-events' ?>"
                         class="related-events">
                    <div class="events-content">
                        <?php $center_events = field_view_field('taxonomy_term', $term, 'field_related_events_view', array('label' => 'hidden'));
                        print '<h2>' . render($term_name) . ' Events</h2>';
                        print render($center_events);
                        ?>
                    </div>
                </section> <!-- end related events-->
            <?php endif; ?>

            <!-- areas of impact -->
            <div id="<?php print strtolower(str_replace(" ", "-", $term_name)) . '-related-impact' ?>"
                 class="related-impact">
                <div class="impact-content">
                    <h2>Areas of Impact</h2>
                    <?php
                    $center_impact = field_view_field('taxonomy_term', $term, 'field_center_topic_view', array('label' => 'hidden'));
                    print render($center_impact);
                    ?>
                </div>
            </div><!-- end div impact. the impact continues -->

        </div>

    </div>

</div>
