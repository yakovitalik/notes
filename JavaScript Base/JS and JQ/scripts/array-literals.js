var colors;
colors = ['белый', 'черный', 'пользовательский'];

var el = document.getElementById('colors');
el.textContent=colors[0];

// второй способ инициализации массива
var colors2 = new Array('белый', 'черный', 'пользовательский');
el2 = document.getElementById('colors2');
el2.innerHTML = colors2.item(0);