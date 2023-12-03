// использование оператора new для  выделения памяти под строку

#include <iostream>
#include <cstring>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class String 
{
private:
	char* str; 		// указатель на строку
public:
	// конструктор с одним параметром
	String(char* s)	
	{
		int length = strlen(s);		// вычисляем длинну строки
		str = new char[length + 1];	// выделяем необходимую память
		strcpy(str, s); 
	}
	~String()				// деструктор
	{
		cout << "Удаляем строку\n";
		delete[] str;			// освобождаем память
	}
	void display()		// показ строки
		{ cout << str << endl; }
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	String s1 = "Тише едешь - дальше будешь.";
	cout << "s1 = ";
	s1.display();
	
	return 0;
}