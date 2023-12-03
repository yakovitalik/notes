﻿// программа демонстрирует множественное наследование

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class Type					// тип древесины
{
private:
	string dimensions;
	string grade;
public:
	// конструктор без параметров
	Type() : dimensions("N/A"), grade("N/A")
		{ }
	// конструктор с двумя параметрами
	Type(string di, string gr) : dimensions(di), grade(gr)
		{ }
	void gettype()				// запрос информации у пользователя
	{
		cout << "Введите номинальные размеры(2х4 и т.д): ";
		cin >> dimensions;
		cout << "Введите сорт(необработанная, брус и т.д.): ";
		cin >> grade;
	}
	void showtype() const			// показ информации
	{
		cout << "\n Размеры: " << dimensions;
		cout << "\n Сорт: " << grade;
	}
};
//////////////////////////////////////////////////////////////////////////////
class Distance					// класс английских мер длинны
	private:
		int feet;
		float inches;
	public:
		// конструктор без аргументов
		Distance() : feet(0), inches(0.0)
			{ }

		// констуктор с двумя аргументами
		Distance(int ft, float in) : feet(ft), inches(in)
			{ }

		void getdisp()			// ввод длинны пользователем
		{
			cout << "\nВведите число футов: "; cin >> feet;
			cout << "\nВведите число дюймов: "; cin >> inches;
		}
		void showdist()			// вывод длинны на экран
			{ cout << feet << "\'-" << inches << '\"';  }
};
//////////////////////////////////////////////////////////////////////////////
class Lumber : public Type, public Distance
{
private: 
	int quantity;				// количество штук
	double price;				// цена за штуку
public:
	// конструктор без параметров
	Lumber() : Type(), Distance(), quantity(0), price (0.0)
		{ }
	// конструктор с шестью параметрами
	Lumber(string di, strint gr, 		// параметры для Type
	int ft, float in, 			// параметры для Distance
	int qu, float prc) : 			// наши собственные параметры
	Type(di, gr), 				// вызов конструктора Type
	Distance(ft, in), 			// вызов конструктора Distance
	quantity(qu), price(prc)		// вызов наших конструкторов
		{ }
	void getlumber()
	{
		Type::gettype();
		Distance::getdist();
		cout << " Введите количество: "; cin >> quantity;
		cout << " Введите цену: "; cin >> price;
	}
	void showlumber() const
	{
		Type::showtype();
		cout << "\n Длинна: ";
		Distance::showdist();
		cout << "\n Стоимость" << quantity << " штук: $" << (price * quantity) << " рублей";
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Lumber siding;				// используем конструктор без параметров
	
	cout << "\n Информация об обшивке: \n";
	siding.getlumber();			// получаем данные от пользователя
	
	// используем конструктор с шестью параметрами
	Lumber studs("2х4", "const", 8, 0.0, 200, 4.45F);

	// показываем инсформацию
	cout << "\nОбшивка"; siding.showlumber();
	cout << "\nБрус"; studs.showlumber();
	cout << endl;
	return 0;
}