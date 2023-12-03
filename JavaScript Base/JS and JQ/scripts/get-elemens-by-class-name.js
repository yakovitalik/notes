var elements = document.getElementsByClassName('hot');	// находим все элементы с классом hot

if(elements.length > 2) {								// если найдено 3 или более
	var el = elements[2];								// выделяем третий элемент из NodeList
	el.className = 'cool';								// изменяем значение атрибута class этого элемента
}