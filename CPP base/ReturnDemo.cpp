﻿// Использование функции Return

#include <iosream>
using namespace std;

void f();

int main() 
{
	cout << "До вызова функции.\n";

	f();

	cout << "После вызова функции";
	
	return 0;
}

// Определение void функции, которая использует
// инструкцию return

void f()
{
	cout << "В функции f().\n";
	return; // Незамедлительное возвращение к инициатору вызова
		// без выполнения следующе инструкции

	cout << "Это текст не будет отображен.\n"; 
}