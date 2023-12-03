﻿// Проверка ошибок открытия файла

#include <fstream>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	ifstream file;
	file.open("a:test.dat");

	if(!file)
		cout << "\nНевозможно открыть test.dat";
	else
		cout << "\nФайл открыт без ошибок";
	cout << "\nfile = " << file;
	cout << "\nКод ошибки = " << file.rdstate();
	cout << "\ngood() = " << file.good();
	cout << "\neof() = " << file.eof();
	cout << "\nfail() = " << file.fail();
	cout << "\nbad() = " << file.bad() << endl;
	file.close();
	
	return 0;
}
