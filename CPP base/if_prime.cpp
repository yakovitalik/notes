// применение цикла if для определения простых чисел

#include <iostream>
using namespace std;
#include <process.h>	// для exit
int main()
{
	unsigned long n, j;
	cout << "Введите число: ";
	cin >> n;	// ввод проверяемого числа
	for(j=2; j <= n; j++)	// деление на целые числа
	{
		if (n % j == 0)
		{
			cout << "Число не простое, делится на " << j << endl;
			exit(0);	// выход из программы
		}
		cout << "Число является простым\n";
	}
	
	return 0;
}