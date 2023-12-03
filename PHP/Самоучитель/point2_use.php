<?php
require_once 'point2.php';

$point = new Point2;
$point->setX(5);
$point->setY(7);

echo $point->distance();    // 8.6023252670426;