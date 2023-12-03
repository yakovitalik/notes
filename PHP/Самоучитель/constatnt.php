<?php
// определяем константу VALUE
define('VALUE', 1);

// прямое обращение к константе
echo VALUE; // 1

// получение константы через функцию constant
echo constant('VALUE'); // 1