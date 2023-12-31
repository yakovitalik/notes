﻿/* Вес в платиновом эквиваленте */
#include <stdio.h>

int main(void)
{
	float weight;	// вес пользователя
	float value;	// платиновый эквивалент
	
	printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
	printf("Давайте подсчитаем.\n");
	printf("Пожалуйста введите свой вес, выраженный в фунтах: ");
	
	/* Получить входные данные от пользователя */
	scanf(" %f", &weight);
	/* Считаем, что цена родия равна $1700 за тройскую унцию */
	/* 14.5833 коэффициент для перевода веса, выраженного в фунтах, в тройские унции */
	value = 1700.0 * weight * 14.5833;
	printf("Ваш вес в платиновом эквиваленте состовляет: $%2f.\n", value);
	printf("Вы легко можете стать достойным этого! Если цена платины падает\n");
	
	getchar();
	return 0;
}