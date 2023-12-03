﻿// использование двухмерного массива для показа графика продаж
#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICS = 4;
const int MONTHS = 3;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	int d, m;
	double sales[DISTRICS][MONTHS];
	
	cout << endl;
	for(d = 0; d < DISTRICS; d++)
		for(m = 0; m < MONTHS; m++)
		{
			cout << "Введите объем продаж для отдела:" << d +1;
			cout << ", за месяц " << m + 1 << ": ";
			cin >> sales[d][m];
		}
	cout << "\n\n";
	cout << "                         Месяц";
	cout << "                     1       2       3";
	for(d = 0; d < DISTRICS; d++)
	{
		cout << "\nОтдел " << d + 1;
		for(m = 0; m < MONTHS; m++)
			cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< setw(10)
			<< sales[d][m];
	}
	cout << endl;
	return 0;
}