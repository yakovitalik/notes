var saying = 'Дом милый дом';
var msg = '<h2>длинна</h2><p>' + saying.length + '</p>';

msg += '<h2>прописные</h2><p>' + saying.toUpperCase() + '</p>';
msg += '<h2>строчные</h2><p>' + saying.toLowerCase() + '</p>';
msg += '<h2>символ с индексом: 11</h2><p>' + saying.charAt(11) + '</p>';
msg += '<h2>первое вхождение "ми"</h2><p>' + saying.indexOf('ми') + '</p>';
msg += '<h2>последнее вхождение "м"</h2><p>' + saying.lastIndexOf('м') + '</p>';
msg += '<h2>символы с индексами 6-12</h2><p>' + saying.substring(6, 12) + '</p>';
msg += '<h2>замена символов</h2><p>' + saying.replace('м', 'г') + '</p>';

var el = document.getElementById('info');
el.innerHTML = msg;