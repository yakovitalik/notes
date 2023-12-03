﻿// демонстрирует возвращение функцией структурной перемененной

#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct Distance			// длинна в английской системе
{
	int feet;	
	float inches;			
};
///////////////////////////////////////////////////////////
Distance addengl(Distance, Distance);	// прототипы
void engldisp(Distance); 

int main()
{
	Distance d1, d, d3;		// три структурные переменные
	
	// ввод значения d1
	cout << "\nВведите число футов: "; cin >> d1.feet;
	cout << "Введите число дюймов: "; cin >> d1.inches;
	// ввод значения d2
	cout << "\nВведите число футов: "; cin >> d2.feet;
	cout << "Введите число дюймов: "; cin >> d12.inches;	

	d3 = addengl(d1, d2);		// d3 равно сумме d1 и d2
	cout << endl;
	engldisp(d1); cout << " + ";
	engldisp(d2); cout << " = ";
	engldisp(d3); cout << endl;
	return 0;
}
//-----------------------------------------------------------------------
// функция addengl()
// складывает два значения типа Distance и возвращает сумму
Distance addengl(Distance dd1, Distance dd2)
{
	Distance dd3;				// переменная для хранения будущей суммы
	dd3.inches = dd1.inches + dd2.inches;	// сложение дюймов
	dd3.feet = 0; 				// с заемом
	if (dd3.inches >= 12.0)			// если число дюймов больше 12.0
	{					// то уменьшаем число дюймов
		dd3.inches -= 12.0; 		// на 12.0 и увеличиваем
		dd3.feet++;			// число футов на 1
	}
	dd3.feet += dd1.feet + dd2.feet;	// сложение футов
	return dd3;				// возврат значения
}
//-----------------------------------------------------------------------
// функция engldisp()
// отображает поля структурной переменной Distance
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
