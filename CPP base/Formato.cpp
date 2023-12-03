﻿// форматированный вывод в файл с использованием <<
#include <fstream>			// для файлового ввода-вывода
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	char ch = 'x';
	int j = 77;
	double d = 6.02;
	string str1 = "Kafka";		// строки без пробелов
	string str2 = "Proust";		// Пробелов

	ofstream outfile("fdata.txt");	// создать объект ofstream
	
	outfile << ch			// вставить(записать) данные
	<< j
	<< ' ' 				// пробелы между числами
	<< d
	<< str1
	<< ' '				// пробелы между строками
	<< str2;
	cout << "Файл записан\n";
	
	return 0;
}