﻿#include <stdio.h>
/* Программа выполняет умножение двух чисел и выводит результат на экран, пока этого хочет пользователь. Ввод ответа N прервет 
выполнение цикла */ 
main ()
{
	float num1, num2, result;
	cgar choice;
	do {
		printf ("Введите первый множитель: ");
		scanf (" %f", &num1);
		printf ("Введите второй множитель: ");
		scanf (" %f", &num2);
		result = num1 * num2;
		printf ("%.2f умножить на %.2f равняется %.2f\n\n", num1, num2, result);
		printf ("Выполнить умножение следующей пары чисел? |(Y/N): ");
		scanf (" %c", &choice);
		// Если пользователь в качестве ответа ввел символ n
		// нижнего регистра, то этот оператор условия if
		// преобразует его в символ нижнего регистра
		if (choice == 'n')
		{
			choice = 'N';
		}
		} while (choice != 'N');
	getchar();
	return 0;
}