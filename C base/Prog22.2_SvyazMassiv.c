﻿/* Эта программа заполняет три массива очкми игрока, количеством подборов и 
голевых передач, затем проходит по массиву с очками и находит игру, в которой игрок 
получил наибольшее их количество. По получении этой информации программа 
распечатывает общий результат игрока по всем трем категориям в этой конкретной игре */

#include <stdio.h>
main() 
{
	int gameScore[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10}; 
	int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};	
	int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
	int bestGame = 0; /* Сравнительная переменная для очков самой результативной игры */
	int mgMark = 0; /* Данная переменная отметит самую результативную игру */
	int i;
	for (i=0; i < 10; i++) 
	{
		/* Цикл for сравнит результат каждой игры с текущим наилучшим результатом, еслт этот результат 
		оказывается выше, он становится наилучшим и переменная-счетчик становится новым занчением переменной gmMark */
		if (gameScore[i] > bestGame)
		{
			bestGame = gameScores[i];
			gmMark = i;
		}
	}
	// Распечатать результаты поиска самой результативной игры
	// тк индексы массивов начинаются с 0, прибавить 1 к № игры
	printf("\n\nОчки игрока в самой результативной игре: \n");
	printf("Самой результативной стала игра №%d\n", gmMark+1);
	printf("Заработано %d очков\n", gameScores[gmMark]);
	printf("Подобрано %d мячей\n", gameRebounds[gmMark]);
	printf("Осуществлено %d голевых передач\n", gameAssists[gmMark]);
	getchar();
	return 0;
}