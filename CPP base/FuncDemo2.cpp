﻿// объявления функций без прототипа

#include <iostream>
using namespace std;
//-------------------------------------------------------------------------------------------------
// определение функции starline()
void starline()		// заголовок функции
{
	for(int j = 0; j < 45; j++)	// тело функции
		cout << '*';
	cout << endl;
}
//-------------------------------------------------------------------------------------------------
int main()
{
	starline();	// вызов функции
	cout << "Тип данных Диапазон" << endl
	starline();	// вызов функции
	cout << "char	-128...127" << endl
	<< "short	-32 768...32 767" << endl
	<< "int	Системно-зависимый" << endl
	<< "long -2 147 483 648 ... 2 147 483 647" << endl;
	starline();	// вызов функции	
	return 0;
}
