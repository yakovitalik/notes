﻿// применение аргументов по умолчанию

#include <iostream>
using namespace std;
void repchar(char = '*', int = 45) // прототип с аргументами по умолчанию

int main()
{
	rerchar();		// печатает символ '*' 45 раз
	repchar('=');		// печатает символ '=' 45 раз
	repchar('+', 30);	// печатает символ '+' 30 раз
	return 0;
}
//-----------функция repchar()---------------------------------------
// печатает строку символов
void repchar(char ch, int n)		// при необходимости будут использованы
{					// значения по умолчанию
	for(int j=0; j < n; j++)	// цикл n раз
		cout << ch;		// вывод ch
	cout << endl;
}