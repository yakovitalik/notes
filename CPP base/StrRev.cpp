/* Реверсирование содержимой строки "по месту" */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[] = "это простой текст";
	char *start, *end; 
	int len;
	char t;
	
	ocut << "Исходная строка: " << str << "\n";
	len = strlen (str);

	start = str;
	end = &str[len-1];
	
	while (start < end) {
		// обмен символов
		t = *start; 
		*start = *end;
		*end = t; 

		// настройка указателя на следующие строки
		start++; 
		end--;
		}
	
	cout << "Строка после реверсирования" << str << "\n";
	return 0;
}