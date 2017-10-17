jQuery(document).ready(function ($) {

    //set alt tag from title tag

    $('article.node-news p img.figure').each(function() {
        var alt = $('article.node-news p img.figure').attr('title');
        if (this.alt == "")
            this.alt = alt;
    });

    // remove styles from images in news articles

    $('article.node-news p img.figure').removeAttr('style');

    // legacy script to add captions to images in news stories
    $('article.node-news p img.figure, article.node-page p img.figure').each(function (i, val) {
        //HTML element that will be rendered, wrapped in the appropriate divs, with a caption below
        var ele = '<figure class="' + $(val).attr("class") + '" style="' + $(val).attr("style") + '">';
        ele += '<img src="' + $(val).attr("src") + '" alt="' + $(val).attr("alt") + '" title="' + $(val).attr("title") + '" style="';
        ele += $(val).attr("style") + '" class="' + $(val).attr("class") + '"/>';
        ele += "<figcaption><p>" + $(val).attr("title") + "</p></figcaption></figure>";

        //Replce the current element with the new one.
        $(val).replaceWith(ele);

        // Remove height attribute from div.figure
        $('div.figure').css('height', '');
    });
    $('.faculty-item .image img').removeAttr('title');
    $('.faculty-profile .faculty-profile-content .image img').removeAttr('title');
    $('.figure img').removeAttr('title');
    $('.image img').removeAttr('title');

    // menu fixes
    $('.main-navigation > li > ul').removeAttr('class');
    // $('.main-navigation > li > ul > li').find('ul').before('<span class="more">+</span>');
    $('.main-navigation > li').find('ul').before('<span class="more">+</span>');
    $('.main-navigation span.more').click(function() {
        $(this).next('ul').toggle();
        var spantext = $(this).text();
        if ( spantext == '+' ) {
            $(this).text('-');
        } else {
            $(this).text('+');
        }
    });

    // mobile navigation
    $('#menu-icon').click(function () {
        $('body').addClass('mobile-menu');
    });
    $('#menu-icon-close').click(function () {
        $('body').removeClass('mobile-menu');
    });

    // Search input placholder attribute
    $("#edit-search-api-views-fulltext").attr("placeholder", "Type here to search");

    // Fixed Header
    $(window).scroll(function () {
        if ($(window).scrollTop() > 156) {
            $('.site-container').addClass('navbar-fixed');
        }
        if ($(window).scrollTop() < 156) {
            $('.site-container').removeClass('navbar-fixed');
        }
    });
});