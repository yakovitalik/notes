// форматированное чтение из файла с использованием >>
#include <fstream>			// для файлового ввода-вывода
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	char ch;
	int j;
	double d;
	string str1;
	string str2;

	ifstream infile("fdata.txt");	// создать объект ifstream
	
	infile >> ch >> j >> d >> str1 >> str2;			

	cout << ch << endl
	<< j << endl
	<< str1 << endl 
	<< str2 << endl;
	
	return 0;
}