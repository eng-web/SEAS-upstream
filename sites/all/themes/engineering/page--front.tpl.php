<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<section id="university-bar">
    <div class="content">
        <h3><a href="http://www.princeton.edu" target="_blank">Princeton University</a></h3>
        <nav>
            <?php print render($page['utility_navigation']); ?>
        </nav>
    </div> <!-- / .content / -->
</section> <!-- / #university-bar / -->
<header class="site-header">
<div class="content">
        <?php if ($site_name || $site_slogan): ?>
            <?php if ($site_name): ?>
                <?php if ($title): ?>
                    <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a></h1>
                <?php else: ?>
                    <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a></h1>
                <?php endif; ?>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
                <p><?php print $site_slogan; ?></p>
            <?php endif; ?>
        <?php endif; ?>
        <?php print render($page['header']); ?>
        <a id="menu-icon" href="#mobile-menu"><span class="button-text">Mobile Menu</span></a>
        <nav>
            <a id="menu-icon-close" href="#"><span class="button-text">Close Menu</span></a>
            <?php print render($page['main_navigation']); ?>
        </nav>
    </div> <!-- / .content / -->
</header>
<?php print $messages; ?>

<section id="main">
    <div class="content">

        <?php print render($page['help']); ?>

        <?php if ($action_links): ?>
            <ul class="action-links">
                <?php print render($action_links); ?>
            </ul>
        <?php endif; ?>

    </div> <!-- / .content / -->
</section> <!-- / #main / -->

<section class="featured-story">
    <?php if ($page['content_pre']): ?>
        <?php print render($page['content_pre']); ?>
    <?php endif; ?>
</section>

<div class="related-items">
    <!-- front page news -->
    <section class="related-news">
        <div class="news-content">
            <?php print render($page['content']); ?>
        </div>
    </section>
    <!-- end news -->

    <!-- deans message -->
    <section class="deans-note">
        <div class="content">
            <div class="deans-note-information">
                <h2>Create. Educate. Serve</h2>
                <p>At Princeton Engineering, we see engineering as science in the service of society. For more about our vision for engineering and how to engage with us in creating, learning, and serving, please visit the welcome  message from Dean Emily A. Carter.</p>
                <p class="learn-more-button"><a href="/engage">Learn more</a></p>
            </div>
        </div>
    </section>
    <!-- end deans message -->

    <!-- front page events content -->
    <section class="related-events">
        <div class="events-content">
            <?php if ($page['content_post']): ?>
                <?php print render($page['content_post']);?>
            <?php endif; ?>
        </div>
    </section>
    <!-- end events -->

    <!-- Tours -->
    <section class="tours">
        <div class="content">
            <div class="tour-information">
                <h2>Tour the School of Engineering</h2>
                <p>Princeton Engineering welcomes visits from prospective students. Members of the Tau Beta Pi engineering honor society provide tours for prospective undergraduates and their families and happily answer questions. We encourage students to couple the engineering tour with Princeton's Orange Key tour and Admission Office information session. </p>
                <p class="sign-up-button"><a href="https://engineering-tours.princeton.edu/" target="_blank">Sign Up</a></p>
            </div>
        </div>
    </section>
    <!-- End Tours -->

    <!-- Start Twitter -->
    <section class="twitter">
        <div class="content">
            <!-- front page tweets -->
            <?php if ($page['social_media']): ?>
                <?php print render($page['social_media']);?>
            <?php endif; ?>
        </div>
    </section>
    <!-- End Twitter -->
</div>

<footer>
    <div class="content">
        <?php print render($page['footer']); ?>

    </div> <!-- / .content / -->
    <section class="engineering-info">
        <div class="footer-logo">
            <h3><a href="<?php print $front_page; ?>">Princeton University School of Engineering and Applied Science</a></h3>
        </div>
        <div class="address">
            <p>School of Engineering and Applied Science<br>Princeton, New Jersey 08544</p>
        </div>
        <div class="copyright">
            <p>&copy; <?php print render(date('Y')) .  ' The Trustees of Princeton University<br>Princeton, New Jersey 08544 USA' ?></p>
        </div> <!-- / .copyright / -->
    </section> <!-- / #engineering-info / -->
</footer>