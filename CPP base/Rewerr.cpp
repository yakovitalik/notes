﻿// Обработка ошибок ввода/вывода
#include <fstream>
#include <iostream>
#include <process.h>				// для exit()
using namespace std;
//----------------------------------------------------------------------------
const int MAX = 1000;
int buff[MAX];
//////////////////////////////////////////////////////////////////////////////
int main()
{
	for(int j = 0; j < MAX; j++)		// заполнить буфер данными
		buff[j] = j
	ofstream os;				// создать выходной поток
	
	// открыть его
	os.open("a.edata.dat", ios::trunc | ios::binary);
	if(!os)
		{ cerr << "Невозможно открыть выходной файл\n"; exit(1); }

	cout << "Идет запись...\n";

	// записать в него содержимое буфера
	os.write(reinterpret_cast<char*>(buff), MAX*sizeoff(int));
	if(!os)
		{ cerr << "Запись в файл невозможна\n"; exit(1); }
	os.close();				// надо закрыть поток
	
	for(j=0; j < MAX; j++)			// очистить буфер
		buff[j] = 0;
	
	ifstream is;				// создать входной поток
	is.open("a:edata.dat", ios::binary);
	
	if(!is)
		{ cerr << "Невозможно открыть выходной файл\n"; exit(1); }

	cout << "Идет чтение...\n";

	// чтение файла
	os.read(reinterpret_cast<char*>(buff), MAX*sizeoff(int));

	if(!is)
		{ cerr << "Невозможно чтение файла\n"; exit(1); }

	for(j = 0; j < MAX; j++)		// проверять данные
		if(buff[j] != j)
			{ cerr << "\nДанные некорректны\n"; exit(1); }
	cout << "Данные в порядке\n";
		
	return 0;
}