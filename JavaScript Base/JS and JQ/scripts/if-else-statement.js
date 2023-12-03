var pass = 50;			// проходной балл
var score = 75;			// актуальный балл
var msg;				// сообщение

// выбор сообщения для вывода на экран в зависимости от количества баллов
if(score >= pass) {
	msg = 'Поздравления, пройдено!';
} else {
	msg = 'Повторите попытку!';
}

var el = document.getElementById('answer');
el.textContent = msg;