// перегрузка функций

#include <iostream>
using namespace std;

void rerchar();		// прототипы
void repchar(char);	
void repchar(char, int)

int main()
{
	rerchar();
	repchar('=');
	repchar('+', 30);	
	return 0;
}
//-----------функция repchar()---------------------------------------
// выводит на экран 45 символов '*'
void repchar()
{
	for(int j=0; j < 45; j++)	// цикл, выполняющийся 45 раз
		cout << '*';		// вывод символа '*'
	cout << endl;
}
//-----------функция repchar()---------------------------------------
// выводит 45 заданых символов
void repchar(char ch)
{
	for(int j=0; j < 45; j++)	// цикл, выполняющийся 45 раз
		cout << ch;		// вывод заданного символа
	cout << endl;
}
//-----------функция repchar()---------------------------------------
// выводит заданый символ заданное число раз
void repchar(char ch, int n)
{
	for(int j=0; j < n; j++)	// цикл, выполняющийся n раз
		cout << ch;		// вывод заданного символа
	cout << endl;
}
