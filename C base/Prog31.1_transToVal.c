﻿/* Эта программа демонстрирует передачу переменной в функцию по значению */

#include <stdio.h>
main()
{
	int i;
	printf("Пожалуйста введите целое число...");
	scanf(" %d", &i);
	
	// Вызов функции half с передаче значения переменной i
	half(i);
	
	// Покажем, что функция не изменила значения i
	printf("В main(), i все еще равно %d.\n", i);	
	getchar();
	return (0); // конец программы	
}

/*************************************************************************/

/* Иногда такие разделители используются чтобы четко визуально разбить код на несколько функций */

half(int i) // принимает значение i
{
	i = i / 2;
	printf("Значение, поделенное пополам: %d.\n", i);
	return; // Возврат в main
}