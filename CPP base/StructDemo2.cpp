﻿// инициализая структурных переменных

#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct part 			// объявление структуры
{
	int modelnumber;	// номер модели изделия
	int partnumber;		// номер партии изделия
	float cost;		// стоимость детали
};
///////////////////////////////////////////////////////////
int main()
{					// инициализация переменной
	part part1 = { 6244, 373, 217.55F };
	part part2;			// объявление переменной

					// вывод полей первой переменной
	cout << "Модель " << part1.modelnumber;
	cout << ", деталь " << part1.partnumber;
	cout << ", стоимость $" << part1.cost << endl;
	part2 = part1; 			// присваивание структурных переменных

					// вывод полей второй переменной
	cout << "Модель " << part2.modelnumber;
	cout << ", деталь " << part2.partnumber;
	cout << ", стоимость $" << part2.cost << endl;

	return 0;
}