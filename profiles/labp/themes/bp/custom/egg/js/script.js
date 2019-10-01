/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors

Drupal.behaviors.layout = {
  attach: function(context, settings) {
    $(".panel-2col-stacked .panel-col-top").wrapInner( "<div class='outer'></div>");
  }
};

Drupal.behaviors.accordion = {
  attach: function(context, settings) {

    var els = $(".field-starter-kit-key-points");

    // A single DIV container needs to be after each field-title header.
    els.each(function(){
        $(this).find(".field-content-components").wrapAll("<div class='js-component-wrapper' />");
    });

    els.accordion({
     collapsible: true,
     active: false,
     header: ".field-title",
     animated: false});
  }
}

Drupal.behaviors.rotator = {
  attach: function(context, settings) {

    var rotatingWrapper = $(".front .panels-flexible-2 .field-image ");
    var rotatingItems = rotatingWrapper.find("img");

    rotatingItems.hide();
    rotatingWrapper.attr("id", "rotating-items-wrapper");
    rotatingItems.addClass("rotating-item");
    //count number of items
    var numberOfItems = rotatingItems.length;

    if (!numberOfItems) return;
    console.log(numberOfItems);
    var InfiniteRotator =
        {
          init: function()
          {
            //initial fade-in time (in milliseconds)
            var initialFadeIn = 1000;

            //interval between items (in milliseconds)
            var itemInterval = 5000;

            //cross-fade time (in milliseconds)
            var fadeTime = 2500;



            //set current item
            var currentItem = 0;

            //show first item
            rotatingItems.first().eq(currentItem).fadeIn(initialFadeIn);

            //loop through the items
            var infiniteLoop = setInterval(function(){
              rotatingItems.eq(currentItem).fadeOut(fadeTime);

              if(currentItem == numberOfItems -1){
                currentItem = 0;
              }else{
                currentItem++;
              }
              rotatingItems.eq(currentItem).fadeIn(fadeTime);

            }, itemInterval);
          }
        };

    InfiniteRotator.init();
  }
};



})(jQuery, Drupal, this, this.document);
