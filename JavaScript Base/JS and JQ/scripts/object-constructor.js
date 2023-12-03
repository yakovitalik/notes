var hotel = new Object();

hotel.name = 'Пляж';
hotel.rooms = 120;
hotel.booked = 77;
hotel.checkAviability = function() {
	return this.rooms - this.booked;
};

var el.Name = document.getElementById('hotelName');
elName.textContent = hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent = hotel.checkAviability();