/* Программа расчитыват сумму платежей по кредиту */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double Principal; // исходная сумма займа
	double IntRate; // процентная ставка в виде числа, напр 0,075
	double PayPerYear = 12.0; // количество выплат в год
	double NumYears; // срок займа (в годах)
	double Payment; // размер регулярного платежа
	double numer, denom; // временные переменные
	double b, e; // аргументы для вызова функции
	double Pereplata; // размер переплаты от суммы
	
	cout << "Введите исходную сумму займа: ";
	cin >>  Principal;

	cout << "Введите процентную ставку (например 0,075): ";
	cin >>  IntRate;

	cout << "Введите срок займа (в годах): ";
	cin >>  NumYears;

	numer = IntRate * Principal / PayPerYear;
	e = -(PayPerYear*NumYears);
	b = (IntRate/PayPerYear) + 1;
	denom = 1 - pow (b, e);
	Payment = numer / denom;
	Pereplata = Payment * PayPerYear * NumYears;

	cout << "Размер платежа по займу составляет: " << Payment << "\n";
	cout << "Размер переплаты по займу составит: " << Pereplata << "\n";

	return 0;
}