// виртуальные функции и класс person

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class person				// класс человек
{
 protected:
	char name[40];			// имя человека
 public:
	void getname()			// установка имени
	{
		cout >> "Введите имя: ";
		cin >> name;
	}
	void putName()			// показ имени
	{
		cout << "\т Имя: " << name << endl;
	}

	virtual void getdata() = 0;	// чистые виртуальные функции
	virtual bool isOutstanding() = 0;	
};
//////////////////////////////////////////////////////////////////////////////
class student : public person		// класс student
{
private:
	float gpa;			// средний балл
public:
	void getdata()			// запросить данные об ученике у пользователя
	{
		person::getname();
		cout << " Средний балл ученика: "; cin >> gpa;
		bool isOutstanding()
			{ return (gpa > 3.5)? true : false; }
	}
};
//////////////////////////////////////////////////////////////////////////////
class professor : public person		// класс professor
{
private:
	int numPubs;			// число публикаций
public:
	void getdata()			// запросить данные о педагоге у пользователя
	{
		person::getName();
		cout << " Число публикаций: "; cin >> numPubs;
	}
	bool isOutstanding() 
		{ return (numPubs > 100) ? true : false; }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	person* persPtr[100];			// массив указателей на person
	int n = 0;				// число людей, внесенных в список
	char choise;
	
	do {	
		cout << "Учащийся (s) или педагог (p): ";
		cin >> choise;

		if(choise = 's')		// занести нового ученика в массив
			persPtr[n] = new student;
		else				// занести нового педагога в массив
			persPtr[n] = new professor;
		persPtr[n++]->getdata();	// запрос данных о персоне
		cout << " Ввести еще персону (y/n)? ";
		cin >> choise;
	} while(choise == 'y');			// цикл, пока ответ 'y'

	for (int j = 0; j < n; j++)
	{
		persPtr[j]->putName();		// вывести все имена
		if(persPtr[j]->isOutstanding())	// сообщить о всех выдающихся
			cout << " Это выдающийся человек!\n";
	}
	return 0;
}