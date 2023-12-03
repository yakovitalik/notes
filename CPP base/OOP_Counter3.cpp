// применение перегрузки оператора для счетчика
// префиксная и постфиксная форма оператора ++ для нашего класса
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
		Counter(int c) : count (c)
			{ }
		unsigned int get_count()	// получение значения счетчика
			{ return count; }
		Counter operator++()
		{
			return Counter(++count);
		}
		Counter operator++(int)
		{
			return Counter(count++);
		}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Counter c1, c2;				// определение с инициализацией
	cout << "\nc1 =" << c1.get_cont();	// вывод
	cout << "\nc2 =" << c2.get_cont();

	++c1;				// инкреминирование с1
	c2 = ++c1;			// c1 = 2, c2 = 2
	cout << "\nc1 =" << c1.get_cont();	// снова показываем значения
	cout << "\nc2 =" << c2.get_cont();
	
	с2 = с1++;
	cout << "\nc1 =" << c1.get_cont();	// и снова показываем
	cout << "\nc2 =" << c2.get_cont() << endl;	
	
	return 0;
}