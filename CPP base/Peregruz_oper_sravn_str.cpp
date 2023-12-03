// перегрузка операции == для строк

#include <iostream>
#include <cstring>	// для функции strcpy, strcat
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class String 			// наш собственный класс для строк
{
private:
	enum { SZ = 80 };  	// максимальный размер строки
	char str[SZ]; 		// массив для строки
public:
	// конструктор без параметров
	Srtring()		
		{ strcpy(str, ""); }
	// конструктор с одним параметром
	String(char s[])	
		{ strcpy(str, s); }
	// показ строки
	void display() const	
		{ cout << str; }
	// получение строки
	void getdist()
		{ cin.get(str, SZ); }
	// оператор сравнения
	bool operator==(String ss) const
	{
		return (srtcmp(str, ss.str) == 0) ? true : false;
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	String s1 = "да";
	String s2 = "нет";
	String s3;

	cout << "\nВведите 'да' или 'нет': ";
	s3.getdist();				// получаем строку от пользователя

	if(s3 == s1)				// сравниваем со строкой 'да'
		cout << "Вы ввели 'да'\n";
	
	else if (s3 == s2) 			// сравниваем со строкой 'нет'
		cout << "Вы ввели 'нет'\n";
	else
		cout << "Следуйте инструкциям!\n";
	
	return 0;
}