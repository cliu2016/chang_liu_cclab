(function(window, google){

	var options = {
		center:{
			lat:31.13,
			lng:121.27,
		},
		zoom: 9,
		draggable: false,
		mapTypeId: google.maps.MapTypeId.SATELLITE,
		
		minZoom: 9,
	},
	element = document.getElementById('map-canvas'),

	map = new google.maps.Map(element, options);


	// var marker = new google.maps.Marker({
	// 	position: {
	// 		lat: 31.2304,
	// 		lng:121.4737,
	// 	},
	// 	map:map.gMap,
	// 	icon:'https://mapicons.mapsmarker.com/wp-content/uploads/mapicons/shape-default/color-ffbf00/shapecolor-color/shadow-1/border-dark/symbolstyle-white/symbolshadowstyle-dark/gradient-no/star-3.png'
	// });

}(window, google));

