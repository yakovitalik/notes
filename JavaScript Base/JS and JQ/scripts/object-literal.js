var hotel = {
	
	// свойства
	name: 'Тула',
	rooms: 40,
	booked: 25,
	gym: true,
	roomTypes: ['twin', 'double', 'suite'],
	
	// методы
	checkAviability: function() {
		return this.rooms - this.booked;
	}
};

var elName = document.getElementById('hotelName');
elName.textContent = hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent = hotel.checkAviability();