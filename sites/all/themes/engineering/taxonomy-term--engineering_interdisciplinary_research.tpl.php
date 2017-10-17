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
 * Interdisciplinary research area row code
 *
 *  if (isset($content['field_interdisciplinary_units']) == TRUE || $content['field_interdisciplinary_units'] == "none") {
 *   //When field has value, print the heading and values (josh)
 * print '<h2>Related interdisciplinary centers and programs</h2>';
 * //Field variable is in field--field_interdisciplinary_units.tpl.php (josh)
 * print render($content['field_interdisciplinary_units']);
 * }
 */
$field_hero_image = field_get_items('taxonomy_term', $term, 'field_hero_img');
$image_url = file_create_url($field_hero_image[0]['uri']);
$image_alt = $content['field_hero_img'][0]['#item']['alt'];
?>
<div id="<?php print strtolower(str_replace(" ", "-", $term_name)); ?>" class="<?php print "research" ?>">

    <?php if (!$page): ?>
        <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
    <?php endif; ?>
    <section class="impact-header">
        <div class="impact-header-inner">
            <div class="content">
                <h1 class="title" id="page-title"><?php print $term_name ?></h1>
                <p><?php print render($content['description']); ?></p>
            </div>
            <div class="header-image">
                <img src="<?php print render($image_url) ?>" alt="<?php print render($image_alt) ?>">
            </div>
        </div>
    </section>

    <div class="content">

        <!-- associated faculty -->
        <section id="<?php $characters = array(" (", ")", ", ", " ");
        print strtolower(str_replace($characters, "-", $term_name)) . '-related-faculty' ?>" class="related-faculty">
            <div class="faculty-content">
                <h2>Faculty</h2>
                <?php
                $research_faculty = field_view_field('taxonomy_term', $term, 'field_research_related_faculty', array('label' => 'hidden'));
                print render($research_faculty);
                ?>
            </div>
        </section><!-- end associated faculty -->
    </div>
</div>