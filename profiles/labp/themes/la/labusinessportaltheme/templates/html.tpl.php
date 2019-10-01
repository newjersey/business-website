<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="lt-ie9" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width">
  <?php endif; ?>
  <!--[if IEMobile]><meta http-equiv="cleartype" content="on"><![endif]-->
  <!-- <link class="font" href="https://fonts.googleapis.com/css?family=Oswald:400" rel="stylesheet" type="text/css" rel="preload" as="style">
  <link class="font" href="https://fonts.googleapis.com/css?family=Oswald:300" rel="stylesheet" type="text/css" rel="preload" as="style"> -->
  <link class="font" href='https://fonts.googleapis.com/css?family=Droid+Sans:400,700' rel='stylesheet' type='text/css' rel="preload" as="style">
  <link class="font" href='https://fonts.googleapis.com/css?family=Merriweather:400,700' rel='stylesheet' type='text/css' rel="preload" as="style">

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php if ($add_html5_shim and !$add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5.js"></script>
    <![endif]-->
  <?php elseif ($add_html5_shim and $add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5-respond.js"></script>
    <![endif]-->
  <?php elseif ($add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/respond.js"></script>
    <![endif]-->
  <?php endif; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<div id="global_navbar_la_4324422" role="navigation" aria-labelledby="global_navbar_la_4324422">
  <!-- Global site tag (gtag.js) - Google Analytics -->
  <script async="" src="https://www.googletagmanager.com/gtag/js?id=UA-140253594-2"></script>
  <script>
    window.dataLayer = window.dataLayer || [];
    function gtag() {
      dataLayer.push(arguments);
    }
    gtag('js', new Date());
    gtag('config', 'UA-140253594-2');
  </script>
</div>


  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <script>
  window.intercomSettings = {
    app_id: "ozxx8n5h"
  };
</script>
<script>(function(){var w=window;var ic=w.Intercom;if(typeof ic==="function"){ic('reattach_activator');ic('update',w.intercomSettings);}else{var d=document;var i=function(){i.c(arguments);};i.q=[];i.c=function(args){i.q.push(args);};w.Intercom=i;var l=function(){var s=d.createElement('script');s.type='text/javascript';s.async=true;s.src='https://widget.intercom.io/widget/ozxx8n5h';var x=d.getElementsByTagName('script')[0];x.parentNode.insertBefore(s,x);};if(w.attachEvent){w.attachEvent('onload',l);}else{w.addEventListener('load',l,false);}}})();</script>
<!-- 
<script type="text/javascript">
var _userway_config = {
/* uncomment the following line to override default position*/
/* position: '1', */
/* uncomment the following line to override default size (values: small, large)*/
/* size: 'large', */
/* uncomment the following line to override default language (e.g., fr, de, es, he, nl, etc.)*/
/* language: 'en-US', */
/* uncomment the following line to override color set via widget (e.g., #053f67)*/
/* color: '#053f67', */
/* uncomment the following line to override type set via widget(1=person, 2=chair, 3=eye)*/
/* type: '1', */
/* uncomment the following line to override support on mobile devices*/
/* mobile: true, */
account: 'NpZX0ahXLd'
};
</script>
<script type="text/javascript" src="https://cdn.userway.org/widget.js"></script> -->

<script>
jQuery(document).ready(
  function ($) {
    var hedder = $(header);
    var winder = $(window);
    var notice = $("#alpha_notice");
    var burger = $(".meanmenu-reveal");
    var burgerMenu = $(".mean-nav");
    var adminOffset = 0;

    winder.scroll(function(){
      var targetOffset = adminOffset;
      var scrollTop = winder.scrollTop();
      var noticeHeight = parseInt($('#alpha_notice').css('height'));
      if (scrollTop > noticeHeight) {
        targetOffset = adminOffset;
      }else{
        targetOffset = noticeHeight - scrollTop;
      }

      hedder.css('top', targetOffset);
      if(burger) burger.css('top', targetOffset-47);
      if(burgerMenu) burgerMenu.css('top', targetOffset);
    });
    $('#main-menu').find('li>a:contains("Chat")').click(function(){Intercom('showNewMessage');return false;});
  });
  </script>
</body>
</html>
