// применение цикла do while

#include <iostream>
using namespace std;

int main()
{
	long diddend, devisor;
	char ch;
	do	// начало цикла do
	{	// действия
		cout << "Введите делимое: "; cin > dividend;
		cout << "Введите делитель: "; cin > devisor;
		cout << "Частное равно: " << divident / devisor;
		cout << "Остаток от деления равен " divident % devisor;
		cout << "Eще раз? (y/n): ";
		cin >> ch;
	}
	while(ch != 'n'); // условие цикла
	return 0;
}