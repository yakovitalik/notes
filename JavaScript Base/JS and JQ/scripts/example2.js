/* Данный сценарий находится внутри функции-выражения, вызываемой сразу после создания.
* Это  делается для защиты области видимости переменных
*/

(function() {
	
	// ЧАСТЬ ПЕРВАЯ: СОЗДАЕМ ОБЪЕКТ HOTEL И ЗАПИСЫВАЕМ ДЕТАЛИ ПРЕДЛОЖЕНИЯ
	// Создаем объект hotel при помощи синтаксиса объектного литерала
	var hotel = {
		name: 'Отель "Пляж"',
		roomRate: 240,			// сумма в рублях
		discount: 15,			// процентное значение скидки
		offerPrice: function() {
			var offerRate = this.roomRate * ((100 - this.discount)/100);
			return offerRate;
		}
	}
	
	// Записываем название отеля, стандартную ставку и специальную ставку
	var hotelName, roomRate, speicalRate;				// объявляем переменные
	
	hotelName = document.getElementById('hotelName');	// получаем элементы
	roomRate = document.getElementById('roomRate');
	speicalRate = document.getElementById('speicalRate');
	
	hotelName.textContent = hotelName;						// записываем название отеля
	roomRate.textContent = hotel.roomRate.toFixed(2) + 'Р';	// записываем ставку за номер
	speicalRate.textContent = hotel.offerPrice + 'Р';		// записываем цену по акции
	
	// ЧАСТЬ ВТОРАЯ: ВЫЧИСЛЯЕМ И ЗАПИСЫВАЕМ ИНФОРМАЦИЮ ОБ ИСТЕЧЕНИИ АКЦИИ
	var expiryMsg;			// сообщение, выводимое пользователям
	var today;				// сегодняшняя дата
	var elEnds;				// элемент, в котором отображается сообщение об окончании акции
	
	function offerExpires(today) {
		// внутри функции объявляем переменные с локальной областью видимости
		var weekFromDay, day, date, month, year, dayNames, monthNames;
		
		// добавляем еще 7 дней (в миллисекундах) 
		weekFromDay = new Date(today.getTime() + 7 * 24 * 60 * 60 * 1000);
		
		// создаем массивы, в которых будут содержаться названия дней и месяцев
		dayNames = ['Понедельник', 'Вторник', 'Среда', 'Четверг', 'Пятница', 'Суббота', 'Воскресенье'];
		monthNames = ['Января', 'Февраля', 'Марта', 'Апреля', 'Мая', 'Июня', 'Июля', 'Августа', 'Сентября', 'Октября', 'Ноября', 'Декабря'];
		
		// собираем фрагменты даты, которые будут отображаться на странице
		day = dayNames[weekFromDay.getDay()];
		date = weekFromDay.getDate();
		month = monthNames[weekFromDay.getMonth()];
		year = weekFromDay.getFullYear();
		
		// создаем сообщение
		expiryMsg = 'Акция завершается в';
		expiryMsg += day + '<br />(' + date + ' ' + month + ' ' + year + ')';
		return expiryMsg;
	}
	
	today = new Date();								// записываем сегодняшнюю дату в переменную
	elEnds = document.getElementById('offerEnds');	// получаем элемент offerEnds
	elEnds.innerHTML = offerExpires(today);			// добавляем сообщение об истечении акции
	
	// завершаем выражение функции, вызванной сразу после создания
}());