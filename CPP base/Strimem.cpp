﻿// класс String с экономией памяти
// Перегружаемая операция присваивания и конструктор копирования

#include <iostream>
#include <cstring>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class strCount			// класс-счетчик уникальных строк
{
 private:
	int count;		// собственно счетчик
	char* str;		// указатель на строку
	friend class String;	// сделаем себя доступным
	// методы скрыты
//----------------------------------------------------------------------------
	strCount(char* s)	// конструктор с одним аргументом
	{
		int length = strlen(s);		// длинна строкового аргумента
		str = new char[length + 1]; 	// занять память под строку
		strcpy(str, s);			// копировать в нее аргументы
		count = 1;			// считать с единицы
	}

//----------------------------------------------------------------------------
	~strCount()				// деструктор
	{ delete[] str; }			// удалить строку
};
//////////////////////////////////////////////////////////////////////////////
class String 
{
private:
	strCount* psc;				указатель на strCount
public:
	Srtring()				// конструктор без параметров
		{ psc = new strCount("NULL"); }
//----------------------------------------------------------------------------
	String(char* s)				// конструктор с одним параметром
		{ psc = new strCount(s); }
//----------------------------------------------------------------------------
	String(String& S)			// конструктор копирования
	{
		psc = S.psc;
		(psc->count)++;
	}
//----------------------------------------------------------------------------
	~String()				// деструктор
	{
		if(psc->count == 1)		// если пользователь последний
			delete psc;		// удалить strCount
		else				// иначе
			(psc->count)--;		// уменьшить счетчик
	}
//----------------------------------------------------------------------------
	void display()		// вывод String
	{
		cout << psc->str;		// вывести строку
		cout << " (addr = " << psc << ")";	// вывести адрес
	}
//----------------------------------------------------------------------------
	void operator=(String& S)		// присвоение String
	{ 
		if(psc->count == 1)		// если последний пользователь
			delete psc;		// удалить strCount
		else
			(psc->count)--;		// уменьшить счетчик
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	String s3 = "Муха по полю пошла, муха денежку нашла";
	cout << "\ns3 = "; s3.display();	// вывести s3

	String s1;				// определить объект Sring
	s1 = s3;				// присвоить его другому объекту
	cout << "\ns1 ="; s1.display();		// вывести его
	
	String s2(s3);				// инициализация
	cout << "\ns2 = "; s2.display();	// вывести инициализированное
	
	cout << endl;
	return 0;
}