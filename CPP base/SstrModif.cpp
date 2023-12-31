﻿// модификация объектов класса string
// изменение частей строки

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	string s1("Все хорошо, прекрассная Маркиза.");
	string s2("принцесса");
	string s3("Приветствую ");

	s1.erase(0, 12);		// убираем "Все хорошо"
	s1.replace(11, 7, s2); 		// заменяет "маркиза" на "принцесса"
	s1.insert(0, s3);		// вставляем "Приветсвую, "
	s1.erase(s1.size()-1, 1);	// убираем '.'
	s1.append(3, '!');		// добавляем '!!!'

	int x = s1.find(' ');		// ищем пробелы
	while(x < s1.size())		// цикл по всем пробелам
	{
		s1.replace(x, 1, "/");	// заменяем пробел на '/'
		x  = s1.find(' ');	// ищем следующий пробел
	}
	cout << "s1: " << s1 << endl;

	return 0;
}