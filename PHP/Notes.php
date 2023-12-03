<?php
/////////////////////////////////////////////////////////////////////
// ФУНКЦИИ
/////////////////////////////////////////////////////////////////////
// Общий вид функции
function myFunction() 
{
	// операторы
}

// Функция с возвращаемым значением
function myMunction2()
{
	// вычисления
	return 0;		// возвращается значение 0
}

// Пример простой функции
function getSum() 
{
	$sum = 10 + 5;
	return $sum;
}
echo getSum();		// 15


// Функция с параметрами
function getSum($left, $right)
{
	$sum = $left + $right;
	return $sum;
}

// Так же можно указывать типы параметров и возвращаемого значения
function getSum(int $fst, int $snd) 
{
	return $fst + $snd;
}
echo getSum(2, 2);		// 4
echo getSum(2.5, 2.5);	// 4

// Передача параметров по значению
function getSum($var)
{
	$var += 5;
	return $var;
}
$newVar = 20;
echo getSum($newVar);	// 25
echo "<br>$newVar";		// 20

// Передача параметров по ссылке
function getSum(&$var)
{
	$var += 5;
	return $var;
}
$newVar = 20;
echo getSum($newVar);	// 25
echo "<br>$newVar";		// 25

// Необязательные параметры
function getSum($left = 10, $right = 5)
{
	$sum = $left + $right;
	return $sum;
}
echo getSum();			// выводит 15
echo getSum(5);			// выводит 10
echo getSum(5, 0);		// выводит 5

// Переменное число параметров 
function echoList(...items)
{
	foreach($items as $v) {
		echo "$v<br>\n";	// выводим элемент
	}
}
// отображаем строки одна под другой
echoList('PHP', 'Python', 'Ruby', 'JavaScript');

// Использование глобальных переменных
function getSum() {
	global $var;
	$var = 5;			// изменяем глобальну переменную
	return $var;
}
$var = 10;
echo "$var<br>";		// выводит 10
echo getSum().'<br>';	// выводит 5(глобальная переменная изменена)
echo "$var<br>";		// выводит 5

// Использование статических переменных(сохраняющих значение при выходе из блока кода)
function counter()
{
	static $counter = 0;
	return ++$counter;
}

// Возвращение массива из функции
function formatSize($bytes) {
	$kbytes = $bytes / 1024;
	$mbytes = $kbytes / 1024;
	$gbytes = $mbytes / 1024;
	
	return [$bytes, $kbytes, $mbytes, $gbytes];
}

// преобразование массива в переменные
requore_once('return_array.php');
list($bytes, $kbytes, $mbytes, $gbytes) = formatSize(18642678);



