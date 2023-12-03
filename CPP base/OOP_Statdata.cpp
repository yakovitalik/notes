﻿// демонстрирует применение статического поля класса

include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class foo
{
	private:
		static int count;	// общее поле для всех объектов
					// (в смысле "объявления")		
	public:
		foo()			// инкреминирование при создании объекта
			{ count++; }
		int getcount()		// возвращает значение count
			{ return count; }
};
//----------------------------------------------------------------------------
int foo::count = 0;			// "определение" count
//////////////////////////////////////////////////////////////////////////////
int main()
{
	foo f1, f2, f3;			// создание 3-х объектов
	// каждый объект видит одно и то же значение
	count << "Число объектов: " << f1.getcount() << endl;
	count << "Число объектов: " << f2.getcount() << endl;
	count << "Число объектов: " << f3.getcount() << endl;
	return 0;
}