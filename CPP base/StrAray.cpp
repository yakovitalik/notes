﻿// массив строк
// запись названий дней недель в массив

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	const int DAYS = 7;		// количество строк в массиве
	const int MAX = 12;		// максимальная длинна каждой из них
	// массив строк
	char star[DAYS][MAX] = 
	{
		"Понедельник", "Вторник", "Среда", "Четверг", 
		"Пятница", "Суббота", "Воскресенье"
	};
	// вывод всех строк на экран
	for (int j = 0; j < DAYS; j++)
		cout << star[j] << endl;
	return 0;
}