// подсчет факториала числа с помощью цикла for

#include <iostream>
using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;	// тип long для результата
	cout << "Введите целое число: ";
	cin >> numb;	// ввод числа
	for (int j = numb; j > 0; j--)
	{
		fact *= j;	// numb, numb-1, ... 2, 1
		cout << "Факториал числа равен: " << fact << endl;
	}
	return 0;
}