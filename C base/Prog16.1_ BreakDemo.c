﻿/* Данная программа запрашивает у пользователя ввод оценок за тест 25 студентов
группы и рассчитывает средний балл. Если тест писали менее 25 студентов, то пользователь 
может ввести - вместо оценки, тогда программа выйдет из цикла, и для подсчета 
среднего балла будут использованы только введенные оценки */

#include <stdio.h>
main() 
{
	int numTest;
	float stTest, avg, total = 0.0;
	
	// Запрос ввода максимум 25 оценок
	for(numTest = 0; numTest < 25; numTest++) 
	{
		// Получение оценки и проверка ввода тригера -1
		printf("\nВведите оценку студента: ");
		scanf(" %f", &stTest);
		if (stTest < 0.0)
		{
			break;
		}
		total += stTest;		
	}
	avg = total / numTest;
	pintf("\n Средний балл %.1f%%.\n", avg); /* %% выводит знак процента */ 
	getchar();
	return 0;
}