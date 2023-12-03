// избежание переполнения буфера(захода за границы массива)

#include <iostream>
#include <iomanip>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	const int MAX = 20;		// максимальный размер строки
	char str[MAX];			// сама строка
	cout << "\nВведите строку: ";
	cin >> setw(max) >> str;	// ввод не более чем max символов
	cout << "Вы ввели: " << str << endl;
	return 0;
}