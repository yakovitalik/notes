/* Программа демонстрации использовании функции */ 

#include <iostream>
using namespace std;

void box(int length, int width, int height); // Прототип функции box

int main () {
	box (7,20,4);
	box (50,3,2);
	box (8, 6,9);

	return 0;
}

// Вычисление объема парралелепипеда

void box (int length, int width, in height) //Параметры принимают значения аргументов, 
					//переданных функции box ()
{
	cout << "Объем парраллелепипеда равен: " << length * width * height << "\n";

}