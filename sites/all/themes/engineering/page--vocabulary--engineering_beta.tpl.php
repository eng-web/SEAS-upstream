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
<?php if ($tabs): ?>
    <div class="tabs">
        <?php print render($tabs); ?>

    </div><!-- / .tabs / -->
<?php endif; ?>

<?php print render($page['help']); ?>

<?php if ($action_links): ?>
    <ul class="action-links">
        <?php print render($action_links); ?>
    </ul>
<?php endif; ?>

<?php if ($page['content_pre']): ?>
    <?php print render($page['content_pre']); ?>
<?php endif; ?>
<?php print render($page['content']); ?>

<?php if ($page['content_post']): ?>
    <?php print render($page['content_post']); ?>
<?php endif; ?>


<footer>
    <div class="content">
        <?php print render($page['footer']); ?>

    </div> <!-- / .content / -->
    <section class="engineering-info">
        <div class="footer-logo">
            <h3><a href="<?php print $front_page; ?>">Princeton University School of Engineering and Applied Science</a>
            </h3>
        </div>
        <div class="address">
            <p>School of Engineering and Applied Science<br>Princeton, New Jersey 08544</p>
        </div>
        <div class="copyright">
            <p>
                &copy; <?php print render(date('Y')) . ' The Trustees of Princeton University<br>Princeton, New Jersey 08544 USA' ?></p>
        </div> <!-- / .copyright / -->
    </section> <!-- / #engineering-info / -->
</footer>