$("#sheep").hover(function() {

        $(this).animate({opacity: 1.5}, 2000);

    }, function() {

        $(this).animate({opacity: 0}, 500);

    });

// add sound
    $('img.play_media').click(function(event){
      $("#resource_audio")
        .attr("src",this.id)
        .get(0).play();
    });