// демонстрация указателей на переменные

#include <iostream>
using namespace std;

int main()
{
	int var1 = 11;
	int var2 = 22;

	cout << &var1 << endl	// покажем адреса переменных
	<< &var2 << endl;
	
	int* ptr;		// Это переменная указатель на целое
	
	ptr = &var1; 		// Присвоим ей значение адреса var1
	cout << ptr << endl;	// и покажем на экране

	ptr = &var2;		// теперь значение адреса var2
	cout << ptr << endl;	// и покажем на экране
	
	return 0;
}