// демонстрация множественного наследования
// пример написания базы данных сотрудников с использованием наследования

#include <iostream>
using namespace std;
const int LEN = 80;			// максимальная длинна имени
//////////////////////////////////////////////////////////////////////////////
class student				// сведения об образовании
{
private:
	char scholl[LEN];		// название учебного заведения
	char degree[LEN];		// уровень образования
public:
	void getedu()
	{
		cout << "Введите названеи учебного заведения: ";
		cin >> school;
		cout << "Введите уровень образования: \n";
		cout << " (неполное высшее, бакалавр, магистр, кандидат наук): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\n Учебное заведение: " << school;
		cout << "\n Степень: " << degree;
	}
};
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
class manager : private employee, private student // менеджер
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
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Должность: " << title;
		cout << " Сумма взносов в гольфклуб: " << dues;
		student::putedu();
	}	
};
//////////////////////////////////////////////////////////////////////////////
class scientist : private employee, private student // ученый
{
private:
	int pubs;				// количество публикаций
public:
	void getdata()
	{
		employee::getdata();
		cout << " Введите количество публикаций: "; cin >> pubs;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Количество публикаций: " << pubs;
		student::putedu();
	}
};
//////////////////////////////////////////////////////////////////////////////
class laborer() : public emloyee		// рабочий
{
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	manager m1;
	scientist s1, s2;
	laborer r1;
	
	// введем информацию о нескольких сотрудниках
	cout << endl;
	cout << "Ввод информации о первом менеджере";
	m1.getdata();

	cout << "Ввод информации о первом ученом";
	s1.getdata();

	cout << "Ввод информации о втором ученом";
	s2.getdata();	

	cout << "Ввод информации о первом рабочем";
	l1.getdata();

	// выведем полученную информацию на экран
	cout << "Информация о первом менеджере";
	m1.putdata();

	cout << "Информация о первом ученом";
	s1.putdata();

	cout << "Информация о втором ученом";
	s2.putdata();

	cout << "Информация о первом рабочем";
	l1.putdata();

	cout << endl;
	return 0;
}




