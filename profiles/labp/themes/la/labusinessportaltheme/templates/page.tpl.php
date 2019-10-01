<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */


// Render specific components.
$footer_content1 = render($page['footer_content1']);
$footer_content2 = render($page['footer_content2']);
$footer_content3 = render($page['footer_content3']);
$footer_content4 = render($page['footer_content4']);
$footer_sponsors = render($page['footer_sponsors']);
$sidebar_first  = render($page['sidebar_first']);
$sidebar_second = render($page['sidebar_second']);
?>

<div id="page">
  <div id="alpha_notice"><div>An official website of the State of New Jersey. The site is in beta and a work in progress. <a href="http://business.nj.gov/feedback">Let us know what you think.</a></div></div>
  <div id = "mean-menu--mobile"><!-- Mobile Menu gets attached here --></div>
  <header class="header" id="header" role="banner">
    <div class = "header--wrapper">
      <?php if ($logo): ?>
      <div class="logo--wrapper">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
      </div>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <div class="header__name-and-slogan" id="name-and-slogan">
          <?php if ($site_name): ?>
            <h1 class="header__site-name" id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>

      <?php if ($secondary_menu): ?>
        <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
          <?php print theme('links__system_secondary_menu', array(
            'links' => $secondary_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => $secondary_menu_heading,
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>
      <?php print render($page['header']); ?>
    </div>
  </header>

  <div id="main">
    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php if ($page['navigation']): ?>
      <div id="navigation">
        <?php print render($page['navigation']); ?>
      </div>
    <?php endif; ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['footer']); ?>

</div>
<?php if (drupal_is_front_page()): ?>

<?php if ($footer_content1 || $footer_content2 || $footer_content3 || $footer_content4): ?>
<div class = "region--footer" >
  <div class = "region--footer--wrapper">
    <div class="region--footer-col col1"><?php print $footer_content1; ?></div>
    <div class="region--footer-col col2"><?php print $footer_content2; ?></div>
    <div class="region--footer-col col3"><?php print $footer_content3; ?></div>
    <div class="region--footer-col col4"><?php print $footer_content4; ?></div>
  </div>
</div>
<?php endif; ?>

<?php if ($footer_sponsors): ?>
  <div class = "region--footer-sponsors" >
    <?php print $footer_sponsors; ?>
  </div>
<?php endif; ?>
<?php endif; ?>

<div class = "region--bottom" >
  <div class = "region--bottom--wrapper">
    <?php print render($page['bottom']); ?>
    <div class="region region-bottom">
      <div id="block-menu-menu-footer-" class="block block-menu first last odd" role="navigation" style="padding-left:75px;">
        <ul class="menu">
          <li class="menu__item is-leaf leaf"><a href="/contact-us" title="Contact Us" class="menu__link">Contact Us</a></li>
          <li class="menu__item is-leaf leaf"><a href="/terms" title="Terms and Privacy Policy" class="menu__link">Terms and Privacy Policy</a></li>
          <li class="menu__item is-leaf leaf"><a href="/license" title="License" class="menu__link">License</a></li>
          <li class="menu__item is-leaf leaf last"><a href="https://intercom.help/nj-business" title="FAQ" class="menu__link" target="_blank">FAQ</a></li>
        </ul>
      </div>
    </div>
    <div class="footer__copyright">
      <a href="https://github.com/newjersey/" aria-label="GitHub"><img style="margin-left:50px;" src="/profiles/labp/themes/la/labusinessportaltheme/github.png" width="24" height="24" /></a>
      <a href="https://twitter.com/NJInnovation/lists/nj-business" aria-label="Twitter"><img style="margin-left:10px;" src="/profiles/labp/themes/la/labusinessportaltheme/Twitter_Social_Icon_Circle_Color.png" width="24" height="24" /></a>
    </div>
    <div class="footer__credits">
    </div>
  </div>
</div>
