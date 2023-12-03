<?php
require_once('Greeting.php');

$object = new Greeting();
echo $object->setter();
echo $object->hello;