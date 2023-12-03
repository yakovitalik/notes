﻿// демонстрирует статические локальные переменные
// программа рассчитывает среднее значение 

#include <iostream>
using namespace std;
float getavg(float);	// прототип функции
int main()
{
	float data = 1, avg;
	while(data != 0)
	{
		cout << "Введите число: ";
		cin >> data;
		avg = getavg(data);
		cout << "Среднее значение: " << avg << endl;
	}
	
	return 0;
}
//-------------------------------------------------------------------
// функция getavg()
// находит среднее арифметическое всех введенных значений
float getavg(float newdata)
{
	static float total = 0;	// инициализация статических переменных
	static int count = 0;	// при первом вызове 
	count++;		// увеличение счетчика
	total += newdata;	// добавление нового значения к сумме
	return total / count;	// возврат нового среднего значения
}
