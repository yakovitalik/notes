// Метод querySelector возвращает только первое совпадение
var el = document.querySelector('li.hot');
el.className = 'cool';

// Метод querySelectorAll возвращает NodeList
// Второй совпадающий с запросом элемент(третий в списке) выбирается и изменяется.
var els = document.querySelectorAll('li.hot');
els[1].className = 'cool';