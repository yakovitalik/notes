﻿/* Программа рассчитывает площадь прямоугольника на основании длинны его сторон, 
вводимых пользователем с клавиатуры*/

#include <iostream>
using namespace std;

int main () 
{
	int length;
	int width;
	cout << "Введите длинну прямоугольника: ";
	cin >> length; // Ввод значения длинны
	
	cout << "Введите ширину прямоугольника: ";
	cin >> width; // Ввод значения ширины
	
	cout << "Площадь прямоугольник равна: ";
	cout << length * width;

	return 0;
}