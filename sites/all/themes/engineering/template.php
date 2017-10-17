<?php

/**
 * @file
 * template.php file for the engineering theme
 *
 */

/**
 * Returns HTML for a menu link and submenu.
 * pick up in git
 *
 * @param $variables
 *   An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @ingroup themeable
 */

// Add new class names to Navigation Menus
function engineering_menu_tree__main_menu($variables)
{
    return '<ul class="main-navigation">' . $variables['tree'] . '</ul>';
}

function engineering_menu_tree__menu_utility_menu($variables)
{
    return '<ul class="utility-navigation">' . $variables['tree'] . '</ul>';
}


// Strip menu of all classes
function engineering_menu_link(array $variables)
{
    //unset all the classes
    unset($variables['element']['#attributes']['class']);

    $element = $variables['element'];

    if ($variables['element']['#attributes'])

        $sub_menu = '';

    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

// Taxonomy template
function engineering_preprocess_taxonomy_term(&$variables)
{
    //$term = dsm($variables['content']);
    //$term;


    $variables['content'] = array();
    foreach (element_children($variables['elements']) as $key) {
        $variables['content'][$key] = $variables['elements'][$key];
    }

    /**
     * This statement was for jobs -- keeping for now but will remove (josh)
     * var_dump($variables['content']);
     * if (isset($variables['content']['name']) == 'Mechanical and Aerospace Engineering') {
     * $variables['mae_test'] = '<h3>' . 'test jobs' . '</h3>';
     * / $url = 'https://puwebp.princeton.edu/AcadHire/services/listing/requisitions/list?dept_code=25100';
     * $out = qp(QueryPath::HTML_STUB, 'body')->append('<ul/>')->find('ul');
     * foreach (qp($url, 'entry') as $result) {
     * $title = $result->children('position')->text();
     * $description = $result->children('description')->text();
     * }
     *
     * $out->append("<li><$title<br>$description</li>");
     * }
     * $variables['mae_jobs'] = $out->writeHTML();
     * }
     **/
}


// Create node--content_type template
function engineering_preprocess_page(&$variables)
{
    //$page = dsm($variables['page']);
    //$page;
    unset($variables['page']['content']['system_main']['default_message']);
    // If the content type's machine name is "my_machine_name" the file
    // name will be "page--my-machine-name.tpl.php".
    if (isset($variables['node']->type)) {
        $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }

    if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {

        // Creates page--vocabulary--TAXONOMY_TERM_NAME.tpl.php template file
        $term = taxonomy_term_load(arg(2));
        $variables['theme_hook_suggestions'][] = 'page__vocabulary__' . $term->vocabulary_machine_name;

        // removes default listing and pagination of taxonomy view listing
        unset($variables['page']['content']['system_main']['nodes']);
        unset($variables['page']['content']['system_main']['pager']);
        unset($variables['page']['content']['system_main']['no_content']);


    }


    //if ($variables['node']->type="")

}

// function engineering_preprocess_taxonomy_term(&$variables) {
//     $variables['view_mode'] = $variables['elements']['#view_mode'];
//     $variables['term'] = $variables['elements']['#term'];
//     $term = $variables['term'];

//     $uri = entity_uri('taxonomy_term', $term);
//     $variables['term_url'] = url($uri['path'], $uri['options']);
//     $variables['term_name'] = check_plain($term->name);
//     $variables['page'] = $variables['view_mode'] == 'full' && taxonomy_term_is_page($term);

//     // Flatten the term object's member fields.
//     $variables = array_merge((array) $term, $variables);

//     // Gather classes, and clean up name so there are no underscores.
//     $vocabulary_name_css = str_replace('_', '-', $term->vocabulary_machine_name);
//     $variables['classes_array'][] = 'vocabulary-' . $vocabulary_name_css;

//     // If the content type's machine name is "my_machine_name" the file
//     $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $term->vocabulary_machine_name;
//     $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $term->tid;
// }

// Create node--content_type-teaser template
function engineering_preprocess_node(&$variables)
{
    //$node = dsm($variables['node']);
    //$node;


    if ($variables['view_mode'] == 'teaser') {
        $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__teaser';
    }
    /**
     * checks for faculty nodes and multiple titles.
     * if faculty have more than one title, loop through the array
     * and add to custom array variable (josh)
     */
    if (($variables['node']->type == 'faculty')) {
        if (count($variables['field_faculty_title']) >= 0) {
            foreach ($variables['field_faculty_title'] as $id => $faculty_title) {
                //this var is called by node--faculty.tpl.php;
                $variables['fac_title'][] = $faculty_title;
            }
        }
    }

    if (($variables['node']->type == 'faculty')) {
        if (count($variables['field_research_specialization']) >= 0) {
            foreach ($variables['field_research_specialization'] as $rid => $fac_research) {
                //this var is in node--faculty.tpl.php;
                $variables['fac_research'][] = $fac_research;
            }
        }
    }


}

// Remove Height and Width Inline Styles from Drupal Images
function engineering_preprocess_image(&$variables)
{
    foreach (array('width', 'height') as $key) {
        unset($variables[$key]);
    }
}

function engineering_field__field_company_title($variables)
{
    //dsm($variables);
    /*
     * This adds custom classes to the ADVISORY COUNCIL FIELD COMPANY TITLE to handle multiple titles.
     *
     */
    $output = '';

    // Render the label, if it's not hidden.
    if (!$variables['label_hidden']) {
        $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
    }

    // Render the items.
    //$output .= '<div class="event-time">';
    foreach ($variables['items'] as $delta => $item) {
        $classes = 'advisory-council-title';
        $output .= '<span class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</span><br>';
    }
    //$output .= '</div>';

    /**
     * Hiding for now. (josh)
     *
     * Render the top-level DIV.
     *
     * $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';
     **/

    return $output;
}

//Simple link for Scald File provider
function scald_file_theme_registry_alter(&$theme_registry)
{
    //dpm($theme_registry);
    $theme_registry['scald_file_render']['theme paths'] = array(0 => drupal_get_path('theme', 'engineering'));
    $theme_registry['scald_file_render']['theme path'] = drupal_get_path('theme', 'engineering');
    $theme_registry['scald_file_render']['path'] = drupal_get_path('theme', 'engineering');

    //tell theme to use pdf-theme.tpl.php for bare bones
    $theme_registry['scald_file_render']['template'] = 'pdf-theme';

}

?>
