// разыменование указателя, возвращаемого оператором new

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		void getdisp()			// получение информации
		{
			cout << "\nВведите число футов: "; cin >> feet;
			cout << "\nВведите число дюймов: "; cin >> inches;
		}
		void showdist()			// вывод информации
			{ cout << feet << "\'-" << inches << '\"';  }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance& dist = *(new Distance);	// создаем объект типа Distance
	dist.getdist();				// получаем информацию, доступ к членам класса через "."
	dist.showdist();			// выводим на экран
	cout << endl;
	return 0;
}