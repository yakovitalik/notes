/* Демонстрация метода пузырьков сортировки массива */

#include <iostream>
#include <stdlib>
using namespace std;

int main () 
{
	int nums [10];
	int a,b,t;
	int size; 
	
	size = 10; // Количество сортируемых элементов
	
	// Помещаем в массив случайные числа
	for (t=0; t<size; t++) nums [t] = rand(); 

	// Отображаем исходный массив
	cout << "Исходный массив: \n";
	for (t=0; t<size; t++) cout << nums [t] << " ";
	cout << "\n";

	// Реализация алгоритма пузырьковой сортировки
	for (a=1; a<size; a++)
		for (b=size-1; b>=a; b--) 
		{
			if (nums[b-1] > nums[b]) 
			{ // Если значения элементов массива расположны
			// не по порядку, то меняем их местами
				t = nums[b-1];
				nums[b-1] = nums[b];
				nums[b] = t; 
			}
		}
		// Отображаем отсортированный массив
		cout << "\n Отсортированный массив: \n";
		for(t=0; t<size; t++) cout << nums[t] << " "; 

	returm 0;
}
