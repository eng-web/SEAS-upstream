<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<!DOCTYPE html>
<html lang="en-US">
<head>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>

    <script src="https://use.typekit.net/kkp6omw.js"></script>
    <script>try {
            Typekit.load({async: true});
        } catch (e) {
        }</script>
    <script>

        $(document).ready(function () {
            $('#map').addClass('scrolloff');                // set the mouse events to none when doc is ready

            $('#overlay').on("mouseup", function () {          // lock it when mouse up
                $('#map').addClass('scrolloff');
                //somehow the mouseup event doesn't get call...
            });
            $('#overlay').on("mousedown", function () {        // when mouse down, set the mouse events free
                $('#map').removeClass('scrolloff');
            });
            $("#map").mouseleave(function () {              // becuase the mouse up doesn't work...
                $('#map').addClass('scrolloff');            // set the pointer events to none when mouse leaves the map area
                // or you can do it on some other event
            });

        });
    </script>
    <script>
        (function (i, s, o, g, r, a, m) {
            i['GoogleAnalyticsObject'] = r;
            i[r] = i[r] || function () {
                (i[r].q = i[r].q || []).push(arguments)
            }, i[r].l = 1 * new Date();
            a = s.createElement(o),
                m = s.getElementsByTagName(o)[0];
            a.async = 1;
            a.src = g;
            m.parentNode.insertBefore(a, m)
        })(window, document, 'script', 'https://www.google-analytics.com/analytics.js', 'ga');

        ga('create', 'UA-1399820-1', 'auto');
        ga('send', 'pageview');

    </script>
</head>
<div class="site-container">
    <div class="site">
        <body class="<?php print $classes; ?>">
        <?php print $page_top; ?>
        <?php print $page; ?>
        <?php print $page_bottom; ?>
        </body>
    </div><!-- / .site / -->
</div><!-- / .site-container / -->
</html>