﻿<?php
try 
{
	// Генерируем исключение по случайному закону
	if(mt_rand(0, 1)) {
		// Генерация исключения 
		throw new Exception();
	}
}
catch(Exception $exp)
{
	// Фраза выводится, если было сгенерировано исключение
	exit('Произошла исключительная ситуация');
}

// Фраза выводится если исключение не сгенерировалось
echo 'Штатная работа скрипта';