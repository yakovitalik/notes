// SMALLOBJ
// ДЕМОНСТРИРУЕТ ПРОСТОЙ НЕБОЛЬШОЙ ОБЪЕКТ

#include <iostream>
usingnamespace std;

/////////////////////////////////////////////////////////////////////
class smallobj			// определение класса
{
	private:
		int somedata;	// поле класса

	public:
		void setdata(int d)		// метод класса, изменяющий значение поля
			{ somedata = d; }
		void showdata()			// метод класса, отображающий значение поля
			{ cout << "Значение поля равно " << somedata << eddl; } 
};
/////////////////////////////////////////////////////////////////////
int main()
{
	
	smallobj s1, s2;	// определение двух объектов класса smallobj
	s1.setdata(1066);	// вызов метода setdata()
	s2.setdata(1776);
	s1.showdata();		// вызов метода showdata()
	s2.showdata();
	return 0;
}