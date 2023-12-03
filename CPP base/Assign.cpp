﻿// пример перегрузки оператора присваивания (=)

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class alpha()
{
 private:
	int data;
 public:
	alpha()				// конструктор без аргументов
	{ }
	alpha(int d)			// конструктор с одним аргументом
	{ data = d; }
	void display()			// вывести данные
	{ cout << data; }
	alpha operator=(alpha& a) 	// перегруажемый =
	{
		data = a.data;		// не выполняется автоматически
		cout << "\nЗапущен оператор присваивания";
		return alpha(data);	// возвратит копию alpha
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	alpha a1(37);
	alpha a2;

	a2 = a1;			// запуск перегружаемого =
	cout << "\na2 ="; a2.display();	// вывести a2

	alpha a3 = a2;			// НЕ запускается
	cout << "\na3 ="; a3.display();	// вывести a3
	cout << endl;
		
	return 0;
}