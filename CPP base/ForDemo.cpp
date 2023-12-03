// Демонстрирует работу простейшего цикла for

#include <iostream>
using namespace std;

int main(void)
{
	int j;	// определение счетчика цикла
	for(j = 0; j < 15; j++)	// счетчик меняется от 1 до 14
		cout << j * j << " ";	// квадрат значения j выводится на экран
	cout << endl
	return 0;
}