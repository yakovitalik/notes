<?php
require_once 'article.php';

$obj = new Article(
'Заголовок', 
'Содержимое');

$obj->setAuthor(['Максим Кузнецов', 'Игорь Симдянов']);
$obj->seo('SEO-заголовок');
echo $obj->title();	// SEO-заголовок