﻿// структура для хранения информации о деталях изделий

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
{
	part part1;			// определение структурной переменной
	part1.modelnumber = 6244;	// инициализация полей
	part1.partnumber = 373;		// переменной part1
	part1.cost = 217.55F;
					// вывод значений полей на экран
	cout << "Модель " << part1.modelnumber;
	cout << ", деталь " << part1.partnumber;
	cout << ", стоимость $" << part1.cost << endl;
	return 0;
}