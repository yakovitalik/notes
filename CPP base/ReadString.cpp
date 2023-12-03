/* Считывание строки с клавиатуры в массив */

#include <iostream>
using namespace std;

int main() {
	char str[80]; 
	
	cout << "Введите строку: "; 
	cin >> str; // Считываем строку с клавиатуры

	cout << "Вот ваша строка: ";
	cout << str;

	return 0;
}