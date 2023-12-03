﻿// счетчик в качестве объекта
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class Counter
{
	private:
		unsigned int count;		// значение счетчика
	public:
		Counter() : count(0)		// конструктор
			{ /* пустое тело */ }
		void inc_count()		// инкреминирование счетчика
			{ count++; }
		int get_count()			// получение значения счетчика
			{ return count; }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Counter c1, c2;				// определение с инициализацией
	cout << "\nc1 =" << c1.get_cont();	// вывод
	cout << "\nc2 =" << c2.get_cont();
	c1.inc_count();				// инкреминирование с1
	c2.inc_count();				// инкреминирование с2
	c2.inc_count();				// инкреминирование с2
	cout << "\nc1 =" << c1.get_count();	// вывод
	cout << "\nc2 =" << c2.get_count();
	cout << endl;
	return 0;
}