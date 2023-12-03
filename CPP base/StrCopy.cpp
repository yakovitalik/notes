﻿// копирование строки с использованием цикла

#include <iostream>
#include <cstring>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	// исходная строка
	char str1[] = "Маленькой елочке холодно зимой,";
	const int MAX = 80;		// максимальная длинна строки
	char str2[MAX];			// сама строка
	for(int j = 0; j < strlen(str1); j++)	// копируем strlen(str1)
		str2[j] = str1[j];		// символов из str1 в str2
	str2[j] = '\0';				// завершаем строку нулем
	cout << str2 << endl;			// и выводим на экран
	return 0;
}