// демонстрирует использование копирующего конструктора по умолчанию
// инициализация объектов с помощью копирующего конструктора

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без аргументов
		Distance() : feet(0), inches(0)
			{ }
		// конструктора с одним аргументом нет
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
int main()
{
	Distance dist1(11, 6.25);		// констуктор с двумя аргументами
	Distance dist2(dist1);			// два конструктора с одним аргументом
	Distance dist3 = dist1;
	dist1.getdist();			// ввод значений для d1;
	// вывод длинн на экран
	cout << "\ndist1 - "; dist1.showdist();
	cout << "\ndist2 -  "; dist2.showdist();
	cout << "\ndist3 -  "; dist3.showdist();
	cout << endl;
	return 0;
}