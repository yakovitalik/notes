<?php
function printAge($age)
{
	$age = intval($age);
	if($age < 0) {
		trigger_error("Функция printAge(): " .
				"возвраст не может быть".
				" отрицательным", E_USER_ERROR);
	}
	
	echo "Возвраст составляет: $age";
}

printAge(-10);
// Fatal error: Функция printAge(): возвраст не может быть отрицательным