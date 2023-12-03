// определение среднего числа в массиве
// определение среднего дневного объема продаж
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	cinst int SIZE = 6;
	dooble sales[SIZE];
	cout << "Введите объем продаж на каждый из шести дней\n";
	for(int j = 0; i < SIZE; j++)
		cin >> sales[j];
	double total = 0;
	for(j = 0; j < SIZE; j++)
		total += sales[j];
	double average = total / SIZE;
	cout << "Средний объем: " << average << endl;	
	return 0;
}