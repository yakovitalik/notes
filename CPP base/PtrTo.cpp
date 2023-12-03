// присвоение значения одной переменной другой через указатель
#include <iostream>
using namespace std;

int main()
{
	int var1, var2;		// две переменные
	int* ptr;		// указатель на целое
	
	ptr = &var1;		// помещает в ptr адрес var1
	*ptr = 37;		// то же самое что var1 = 37;
	var2 = *ptr;		// то же самое что var2 = var1;
	
	cout << var2 << endl;	// убедимся, что var2 = 37
		
	return 0;
}
