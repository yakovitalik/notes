<?php
// демонстрация доступа к статическим переменным

require_once 'my_static.php';
echo MyStatic::$staticvar;  //100
?>