﻿<?php
require_once 'user_own_excepions.php';

try {
	$user = new User(
	'igorsimdyanov@gmail.com',
	'password',
	'Игорь', 
	'Симдянов');
	
	echo $user->password;
}
catch(AttributeException $exp) {
	echo "Исключение: {$exp->getMessage()}<br />";
	echo "в файле {$exp->getFile()}<br />";
	echo "в строке {$exp->getLine()}<br />";
}