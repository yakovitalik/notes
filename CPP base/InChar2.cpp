// Файловый ввод символов2

#include <fsftream>				// для файловых функций
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	ifstream infile("TEST.TXT");		// создать входной файл
	
	cout << infile.rdbuf();			// передать его буфер в cout

	cout << endl;
	return 0;
}