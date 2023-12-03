// перегрузка операции + для строк

#include <iostream>
#include <cstring>	// для функции strcpy, strcat
#include <cstdlib>	// для функции exit
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class String 			// наш собственный класс для строк
{
private:
	enum { SZ = 80 };  	// максимальный размер строки
	char str[SZ]; 		// массив для строки
public:
	Srtring()		// конструктор без параметров
		{ strcpy(str, ""); }
	String(char s[])	// конструктор с одним параметром
		{ strcpy(str, s); }
	void display() const	// показ строки
		{ cout << str; }
	
	// оператор сложения
	String operator+(String ss) const
	{
		String temp;	// временная переменная
		if (strlen(str) + strlen(ss.str) < SZ)
		{
			ctrcpy(temp.str, str);		// копируем содержимое первой строки
			strcat(temp.str, ss.str);	// добавляем содержимое второй строки
		}
		else
		{
			cout << "\nПереполнение!";
			exit(1);
		}
		return temp;				// возвращаем результат
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	String s1 = "\nС Рождеством! ";		// используем конструктор с одним параметром
	String s2 = "С Новым годом! ";		// аналогично
	String s3;				// используем конструктор без параметров
	
	// показываем строки
	s1.display();	
	s2.display();
	s3.display();

	s3 = s1 + s2;				// присваиваем строке s3 результат сложения s1 и s2
	s3.display();				// показываем результат
	cout << endl;	

	return 0;
}