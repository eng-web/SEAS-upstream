<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
/**
 * TODO
 * WHITESPACE IS ADDED AROUND $CONTENT['FIELDS'] - NEEDS REMOVAL.
 * INSERT COMMAS FOR EACH AUTHOR, BUT HIDE COMMA WITH CSS FOR LAST CHILD
 */
//echo '<span class=YOUR_CUSTOM_CLASS>';

if (isset($content['field_princeton_office']) == TRUE){
    print render ($content['field_eng_news_author']);
    print 'From' . render($content['field_princeton_office']);
}
elseif (isset($content['field_organization']) == TRUE){
    print render($content['field_eng_news_author']);
    echo ',';
    print render($content['field_organization']);
}
else {
    print render($content['field_eng_news_author']);
}
//echo '</span>';
?>

