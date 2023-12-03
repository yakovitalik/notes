// копирует одну строку в другую

#include <iostream>
using namespace std;

int main()
{
	void copystr(char*, const char*);		// прототип функции
	char* str1 = "Поспешишь - людей насмешишь!";
	char str2[80];					// пустая строка
	
	copy str(str2, str1);				// копируем строку str1 в str2
	cout << str2 << endl;

	return 0;
}
//////////////////////////////////////////////////////////////////////////////
void copystr(char* dest, const char* src)
{
	while (*src)					// пока не встретим конец строки
		*dest++ = *str++;			// копируем ее
	*dest = '\0';					// заканчиваем строку
}