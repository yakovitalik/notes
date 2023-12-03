// демонстрация константных объектов

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		
		// констуктор с двумя аргументами
		Distance(int ft, float in) : feet(ft), inches(in)
			{ }

		void getdisp()			// неконстантный метод
		{
			cout << "\nВведите число футов: "; cin >> feet;
			cout << "\nВведите число дюймов: "; cin >> inches;
		}
		void showdist()	const		// вывод длинны на экран
			{ cout << feet << "\'-" << inches << '\"';  }
		
};

//////////////////////////////////////////////////////////////////////////////
int main()
{
	const Distance football(300, 0);
	cout << "Длинна поля равна: ";
	football.showdist();
	cout << endl;
	return 0;
}