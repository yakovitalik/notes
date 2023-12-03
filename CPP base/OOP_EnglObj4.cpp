// возвращение функцией объекта типа Distance

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
//----------------------------------------------------------------------------
// сложение данного объекта с d2, возврат суммы
Distance Distance::add_list(Distance d2)
{
	Distance Temp;				// временная переменная
	temp.inches = inches + d2.inches;	сложение дюймов
	if (temp.inches >= 12.0)		// если число дюймов больше 12
	{					// то уменьшаем число дюймов на 12
		temp.inches -= 12.0;
		temp.feet++;			// и увеличиваем число футов на 1
	}
	temp.feet += feet + d2.feet;		// сложение футов
	return temp;
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist3;			// две длинны
	Distance dist2(11, 6.25);		// определение и инициализация
	dist1.getdist();			// ввод значений для d1;
	dist3 = dist1.add_list(dist2);		// dist3 = dist1 + dist2
	// вывод длинн на экран
	cout << "\ndist1 - "; dist1.showdist();
	cout << "\ndist2 -  "; dist2.showdist();
	cout << "\ndist3 -  "; dist3.showdist();
	cout << endl;
	return 0;
}