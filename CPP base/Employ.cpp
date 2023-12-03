// демонстрация наследования классов
// пример написания базы данных сотрудников с использованием наследования

#include <iostream>
using namespace std;
const int LEN = 80;
//////////////////////////////////////////////////////////////////////////////
class employee				// некий сотрудник
{
private:
	char name[LEN];			// имя сотрудника
	unsigned int number;		// номер сотрудника
public:
	void getdata()
	{
		cout << "\n Введите фамилию: "; cin >> name;
		cout << " Введите номер: ";	cin >> number;
	}
	void putdata() const
	{
		cout << "\n Фамилия: " << name;
		cout << "\n Номер: " << number;
	}	
};
//////////////////////////////////////////////////////////////////////////////
class manager : public employee // менеджер
{
private:
	char title[LEN];		// должность, например вице-президент
	double dues;			// сумма взносов в гольфклуб
public:
	void getdata()
	{
		employee::getdata();
		cout << "\n Введите должность: "; cin >> title;
		cout << " Введите сумму взносов в гольфклуб: ";	cin >> dues;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Должность: " << title;
		cout << " Сумма взносов в гольфклуб: " << dues;
	}	
};
//////////////////////////////////////////////////////////////////////////////
class scientist : public employee		// ученый
{
private:
	int pubs;				// количество публикаций
public:
	void getdata()
	{
		employee::getdata();
		cout << " Введите количество публикаций: "; cin >> pubs;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Количество публикаций: " << pubs;
	}
};
//////////////////////////////////////////////////////////////////////////////
class laborer() : public emloyee		// рабочий
{
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	manager m1, m2;
	scientist s1;
	laborer r1;
	
	// введем информацию о нескольких сотрудниках
	cout << endl;
	cout << "Ввод информации о первом менеджере";
	m1.getdata();

	cout << "Ввод информации о втором менеджере";
	m2.getdata();	

	cout << "Ввод информации о первом ученом";
	s1.getdata();

	cout << "Ввод информации о первом рабочем";
	l1.getdata();

	// выведем полученную информацию на экран
	cout << "Информация о первом менеджере";
	m1.putdata();

	cout << "Информация о втором менеджере";
	m2.putdata();

	cout << "Информация о первом ученом";
	s1.putdata();

	cout << "Информация о первом рабочем";
	l1.putdata();

	cout << endl;
	return 0;
}




