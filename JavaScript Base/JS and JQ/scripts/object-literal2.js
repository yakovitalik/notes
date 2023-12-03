var hotel = {
	name: 'Пляж',
	rooms: 120,
	booked: 77,
	checkAviability: function() {
		return this.rooms - this.booked;
	}
};

var elName = document.getElementById('hotelName');
elName.textContent = hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent = hotel.checkAviability();