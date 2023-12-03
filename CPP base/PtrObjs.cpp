// массив указателей на объекты

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class person				// класс человек
{
 private:
	char name[40];			// имя человека
 public:
	void setname()			// установка имени
	{
		cout >> "Введите имя: ";
		cin >> name;
	}
	void printName()		// показ имени
	{
		cout << "\т Имя: " << name;
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	person* persPtr[100];			// массив указателей
	int n = 0;				// количество элементов в массиве
	char choise;
	
	do
	{
		persPtr[n] = new Person;	// создаем новый объект
		persPtr[n]->setName();		// вводим имя
		n++;				// увеличиваем количество
		cout << "Продолжаем ввод (д/н)?"; // справшиваем, закончен ли ввод
		cin >> choise;
	} while(choise == 'д');
	for (int j = 0; j < n; j++)
	{
		cout << "\nИнформация о номере " << j + 1;
		persPtr[j]->printName();
	}
	cout << endl;
	
	return 0;
}