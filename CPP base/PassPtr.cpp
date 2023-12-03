// передача аргумента в функцию по указателю

#include <iostream>
using namespace std;

int main()
{
	void centimize(double *);		// прототип функции
	
	double var = 10.0;			// значение переменной var = 10 (дюймов)
	cout << "var = " << var << "дюймов" << endl;
	
	centimize(&var);			// переводим дюймы в сантиметры
	cout << "var = " << var << "сантиметров" << endl;	
	
	return 0;
}
//////////////////////////////////////////////////////////////////////////////
void centimize(double * ptrd)
{
	*ptrd *= 2.54;				// *ptrd это тоже самое что и var
}