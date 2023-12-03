// сортировка объектов через массив указателей на них

#include <iostream>
#include <string>
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
	void getName()			// получение имени
		{ return name; }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	void bsort(person**, int)		// прототип функции
	person* persPtr[100];			// массив указателей
	int n = 0;				// количество элементов в массиве
	char choise;				// переменная для ввода символа
	
	do
	{		
		persPtr[n] = new person;	// создаем новый объект
		persPtr[n]->setName();		// вводим имя
		n++;				// увеличиваем количество
		cout << "Продолжаем ввод (y/n)?"; // справшиваем, закончен ли ввод
		cin >> choise;
	} while(choise == 'y');

	cout << "\nНеотсортированный список:";
	for (int j = 0; j < n; j++)		// покажем неотсортированный список
		persPtr[j]->printName();
	
	bsort(persPtr, n);			// отсортируем указатели

	cout << "\nОтсортированный список:";
	for (int j = 0; j < n; j++)		// покажем отсортированный список	
		persPtr[j]->printName();
	cout << endl;
	
	return 0;
}
//////////////////////////////////////////////////////////////////////////////
void bsort(person ** pp, int n)
{
	void order(person**, person**);		// прототип функции
	int j, k;				// переменные для циклов
	
	for (int j = 0; j < n - 1; j++)		// внешний цикл
		for (int k = 0; k < n; k++)	// внутренний цикл
			order(pp + j, pp + k);	// сортируем два элемента
}
//////////////////////////////////////////////////////////////////////////////
void order(person** pp1, person** pp2) 
{
	if((*pp1)->getName() > (*pp2)->getName())	// если первая строка больше второй
	{
		person* temptr = *pp1;			// меняем их местами
		*pp1 = *pp2;
		*pp2 = tempptr;
	}
}