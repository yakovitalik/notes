// демонстрация включения вместо наследования
// пример написания базы данных сотрудников с использованием включения

#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class student				// сведения об образовании
{
private:
	string scholl;			// название учебного заведения
	string degree;			// уровень образования
public:
	void getedu()
	{
		cout << "Введите название учебного заведения: ";
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
	string name;			// имя сотрудника
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
class manager // менеджер
{
private:
	string title;			// должность, например вице-президент
	double dues;			// сумма взносов в гольфклуб
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << "\n Введите должность: "; cin >> title;
		cout << " Введите сумму взносов в гольфклуб: ";	cin >> dues;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\n Должность: " << title;
		cout << " Сумма взносов в гольфклуб: " << dues;
		stu.putedu();
	}	
};
//////////////////////////////////////////////////////////////////////////////
class scientist // ученый
{
private:
	int pubs;				// количество публикаций
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << " Введите количество публикаций: "; cin >> pubs;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\n Количество публикаций: " << pubs;
		stu.putedu();
	}
};
//////////////////////////////////////////////////////////////////////////////
class laborer() : public emloyee		// рабочий
{
private:
	employee emp;
public:
	void getdata()
		{ emp.getdata(); }
	void putdata()
		{ emp.putdata(); }
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




