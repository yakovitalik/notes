// доступ к переменной через указатель
#include <iostream>
using namespace std;

int main()
{
	int var1 = 11;
	int var2 = 22;
	
	int* ptr;		// указатель на целое
	
	ptr = &var1;		// помещает в ptr адрес var1
	cout << *ptr << endl;	// показывает содержимое переменной через указатель
	
	ptr = &var2;		// помещает в ptr адрес переменной var2
	cout << *ptr << endl;	// показываем содержимое переменной через указатель
		
	return 0;
}
