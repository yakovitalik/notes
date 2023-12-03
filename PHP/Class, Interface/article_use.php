<?php
require_once 'article.php';

$obj = new Article(
'Заголовок',
'Содержимое',
['Максим Кузнецов', 'Игорь Симдянов']);

echo $obj->title;	// Заголовок