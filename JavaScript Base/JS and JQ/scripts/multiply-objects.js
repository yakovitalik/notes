function Hotel(name, rooms, booked) {
	this.name = name;
	this.rooms = rooms;
	this.booked = booked;
	this.checkAviability = function() {
		return this.rooms - this.booked;
	};
}

var quayHotel = new Hotel('Тула', 40, 25);
var parkHotel = new Hotel('Пляж', 120, 77);

var details1 = quayHotel.name + ', свободно номеров: ';
details1 += quayHotel.checkAviability();
var elHotel1 = document.getElementById('hotel1');
elHotel1.textContent = details1;

var details2 = parkHotel.name + ', свободно номеров: ';
details2 += parkHotel.checkAviability();
var elHotel2 = document.getElementById('hotel2');
elHotel2.textContent = details2;
