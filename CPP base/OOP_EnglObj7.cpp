﻿// демонстрирует массив объектов

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		
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
	Distance dist[100];			// массив переменных
	int n = 0;				// счетчик данных
	char ans;				// ответ пользователя(y/n)
	cout << endl;
	
	do {
		cout << "Введите длину номер " << n + 1;
		dist[n++].getdist();		// получаем и сохраняем длинну
		cout << "Продолжить ввод (y/n)?: ";
		cin >> ans;
	} while (ans != 'n');			// продолжать пока не будет введено 'n'
	
	// показываем все введенное
	for (int j =0; j < n; j++)
	{
		cout << "\nДлинна номер " << j + 1 << " : ";
		dist[j].showdist();
	}
	cout << endl;
	return 0;
}