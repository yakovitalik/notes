<?php
// демонстрируется создание и применение констант
// в отличие от переменных указывать в них знак $ не требуется
define('NUMBER', 1);
define('VALUE', 'Hello World!');

echo NUMBER;    // 1
echo VALUE;     // Hello World!
?>