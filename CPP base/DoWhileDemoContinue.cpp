// применение цикла do while с оператором continue

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
		if(divisor == 0)
		{
			cout << "Некорректный делитель!\n";
			continue;
		}
		cout << "Частное равно: " << divident / devisor;
		cout << "Остаток от деления равен " divident % devisor;
		cout << "Eще раз? (y/n): ";
		cin >> ch;
	}
	while(ch != 'n'); // условие цикла
	return 0;
}