<?php
require_once 'point2.php';

// $obj = new Point();  // Fatal Error: Uncaught ArgumentCountError
$obj = new Point(10, 20);
echo $obj->getX().' '.$obj->getY(); // 10 20
