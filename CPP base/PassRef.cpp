// передача аргумента в функцию по ссылке

#include <iostream>
using namespace std;

int main()
{
	void centimize(double &);		// прототип функции
	
	double var = 10.0;			// значение переменной var = 10 (дюймов)
	cout << "var = " << var << "дюймов" << endl;
	
	centimize(var);				// переводим дюймы в сантиметры
	cout << "var = " << var << "сантиметров" << endl;	
	
	return 0;
}
//////////////////////////////////////////////////////////////////////////////
void centimize(double & v)
{
	v *= 2.54;				// v это тоже самое что и var
}