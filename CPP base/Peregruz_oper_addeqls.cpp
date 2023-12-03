// перегрузка операции +=

#include <iostream>
using namespace std;

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
		// сложение с присвоением
		void operator+=(Distance)
};
//////////////////////////////////////////////////////////////////////////////
void Distance::operator+=(Distance d2)
{
	feet += d2.feet;	// складываем футы
	inches += s2.inches;	// складываем дюймы
	if(inches >= 12.0)	// если дюймов больше 12
	{
		inches -= 12;	// то уменьшаем дюймы на 12
		feet++;		// и увеличиваем футы на 1
		
	}
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1;				// определяем переменную
	dist1.getdist();			// ввод информации
	cout << "\ndist1 - "; dist1.showdist();

	Distance dist2(11, 6.25);		// описываем и инициализируем другую переменную
	cout << "\ndist2 -  "; dist2.showdist();
	
	dist1 += dist2;				// dist1 = dist1 + dist2
	cout << "\nПосле добавления:"
	cout << "\ndist1 - "; dist1.showdist();
	cout << endl;

	return 0;
}