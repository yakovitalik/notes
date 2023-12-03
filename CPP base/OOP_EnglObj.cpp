// длинны в английской системе в качестве объектов

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		void setdist(int ft, float in)	// установка значений полей
			{ feet = ft; inches = in; }
		void getdisp()			// ввод полей с клавиатуры
		{
			cout << "\nВведите число футов: "; cin >> feet;
			cout << "\nВведите число дюймов: "; cin >> inches;
		}
		void showdist()			// вывод полей на экран
			{ cout << feet << "\'-" << inches << '\"';  }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist2;			// две длинны
	dist1.setdist(11, 6.25);		// установка значений для d1;
	dist2.getdist();			// ввод значений для d2;
	// вывод длинн на экран
	cout << "\ndist1 - "; dist1.showdist();
	cout << "\ndist2 -  "; dist2.showdist();
	cout << endl;
	return 0;
}