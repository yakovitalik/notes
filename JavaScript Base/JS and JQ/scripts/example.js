// Создаем переменные для приветственного сообщения
var greeting = 'Привет, ';
var name = 'Катерина';
var message = '! Пожалуйста, проверьте заказ:';

// Конкатенируем значения трех переменных для формирования приветственного сообщения
var welcome = greeting + name + message;

// Создаем переменные, в которых будет храниться подробная информация о табличке
var sign = 'Всемирная сеть';
var tiles = sign.length;
var subTotal = tiles * 5;
var shipping = 7;
var grandTotal = subTotal + shipping;

// Получаем элемент с идентификатором greeting
var el = document.getElementById('greeting');

// Заменяем содержимое элемента на персонализированное приветственное сообщение
el.textContent = welcome;

// Получаем элемент с идентификатором userSign и обновляем его содержимое
var elSign = document.getElementById('userSign');
elSign.textContent = sign;

// Получаем элемент с идентификатором tiles и обновляем его содержимое
var elTiles = document.getElementById('tiles');
elTiles.textContent = tiles;

// Получаем элемент с идентификатором subTotal и обновляем его содержимое
var elSubTotal = document.getElementById('subTotal');
elSubTotal.textContent = subTotal + ' руб.';

// Получаем элемент с идентификатором shipping и обновляем его содержимое
var elShipping = document.getElementById('shipping');
elShipping.textContent = shipping + 'руб.';

// Получаем элемент с идентификатором grandTotal и обновляем его содержимое
var elGrandTotal = document.getElementById('grandTotal');
elGrandTotal.textContent = grandTotal + 'руб.';
