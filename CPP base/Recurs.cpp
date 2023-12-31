﻿// Демонстрация рекурсии

#include <iostream>
using namespace std;

int factr (int n);
int fact (int n);

int main () {
	// Использвоание рекурсивной версии
	cout << "Факториал числа 4 равен: " << factr (4);
	cout << "\n";

	// Использование итеративной версии
	cout << "Факториал числа 4 равен: "; << fact (4);
	cout << "\n";

	return 0;
}

// Рекурсивная версия
int factr (int n) 
{
	int answer;
	if (n==1) return (1); 
	answer = factr (n-1) * n; // выполнение рекурсивного вызова функции factr ()
	
	return (answer);
}

// Итеративная версия 
int fact (int n) 
{
	int t, answer;
	
	answer = 1;
	for (t=1; t <= n; t++) answer = answer * (t);
	return (answer);
}