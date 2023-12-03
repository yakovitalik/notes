// Файловый ввод (извлечение из файла) строк
#include <fstream>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	const int MAX =]80;			// размер буфера
	char buffer[MAX];			// буфер символов
	ifstream infile("TEXT.TXT");		// создать входной файл
	while(!infile.eof())			// цикл до eof
	{
		infile.getline(buffer, MAX);	// читает строку текста
		cout << buffer << endl;		// и выводит ее
	}
	
	return 0;
}