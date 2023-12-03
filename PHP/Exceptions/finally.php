<?php
require_once 'user_own_exceptions.php';

try {
	$user = new User(
	'igorsimdyanov@gmail.com',
	'password',
	'Игорь',
	'Симдянов');
	
	// echo $user->password;
}
catch(AttributeException $exp) {
	echo 'AttributeException-исключение<br />';
}
catch(PasswordException $exp) {
	echo 'PasswordException-исключение<br />';
}
finally {
	echo 'Эта строка выводится не всегда<br />';
}