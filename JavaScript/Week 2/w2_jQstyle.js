
function init() {

	$("#sheep").hover(function() {

        $(this).animate({opacity: 1.5}, 2000);

    }, function() {

        $(this).animate({opacity: 0}, 500);

    });

	$('#sheep').click(function(){
		$('#wrap').append('<embed id="embed_player" src="w2_sound/sheeponly.mp3" autostart="true" hidden="true"></embed>');
	});

}

 $(document).ready(function(){
 	init();
 })