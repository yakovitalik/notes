// ограничения перегрузки оператора "+"

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без параметров
		Distance() : feet(0), inches(0)
			{ }

		Distance(float fltfeet)		// переводит float в Distance
						// feet это целая часть
		{
			feet = static_cast<int>(flfeet);
			inches = 12 * (flfeet - feet);	// слева дюймы
		}

		Distance(int ft, float in)	// конструктор с двумя параметрами
			{ feet = ft; inches = in; }

		void showdist()			// вывод длинны на экран
			{ cout << feet << "\'-" << inches << '\"';  }
		Distance operator+(Distance);
};
//////////////////////////////////////////////////////////////////////////////
// сложение двух длинн
Distance Distance::operator+(Distance d2) const
{
	int f = feet + d2.feet;		// складываем футы
	float  i = inches + d2.inches;	// складываем дюймы
	if (i >= 12.0)			// если число дюймов стало больше 12
	{
		i -= 12.0;		// то уменьшаем дюймы на 12
		f++;			// и увеличиваем футы на 1
	}
	return Distance(f, i);		// создаем и возвращаем временную переменную
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist3, dist4;		// определяем переменные
	dist1.getdist();			// ввод значений для d1;
	Distance dist2(11, 6.25);		// определяем переменную с конкретным значением
	dist3 = dist1 + dist2;			// складываем две переменные
	dist4 = dist1 + dist2 + dist3;		// складываем несколько переменных
	
	// вывод длинн на экран
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist1 = "; dist2.showdist(); cout << endl;
	cout << "dist1 = "; dist3.showdist(); cout << endl;
	cout << "dist1 = "; dist4.showdist(); cout << endl;

	return 0;
}