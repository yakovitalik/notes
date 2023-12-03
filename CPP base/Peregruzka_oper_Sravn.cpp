// перегрузка операции < для сравнения длинн

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// класс английских мер длинны
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без параметров
		Distance() : feet(0), inches(0.0)
			{ }

		// констуктор с двумя параметрами
		Distance(int ft, float in) : feet(ft), inches(in)
			{ }
		
		// получение информации от пользователя
		void getdisp()			
		{
			cout << "\nВведите число футов: "; cin >> feet;
			cout << "\nВведите число дюймов: "; cin >> inches;
		}
		// показ информации
		void showdist()			// вывод длинны на экран
			{ cout << feet << "\'-" << inches << '\"';  }
		bool operator<(Distance) const;
};
//////////////////////////////////////////////////////////////////////////////
// сравнение двух длинн
bool Distance::operator+(Distance d2) const
{
	float bf1 = feet + inches / 12;
	float bf2 = d2.feet + d2.inches / 12;
	return (bf1 < bf2) ? true : false;
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1;				// определяем переменную
	dist1.getdist();			// получаем длинну от пользователя

	Distance dist2(6, 2.5);			// определяем и иниуиализируем переменную
	
	// покаываем длинны
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	
	// используем наш оператор
	if (dist1 < dist2)
		cout << "\ndist1 меньше чем dist2";
	else
		cout << "\ndist1 больше или равно dist2";
	cout << endl;	
	return 0;
}