/* Считывание строки с клавиатуры в массив c помощью функции gets() */

#include <iostream>
#include <cstdio	>
using namespace std;

int main() {
	char str[80]; 
	
	cout << "Введите строку: "; 
	gets (str); // Считываем строку с клавиатуры

	cout << "Вот ваша строка: ";
	cout << str;

	return 0;
}