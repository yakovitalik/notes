// использование вложенных структур

#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct Distance			// длинна в английской системе
{
	int feet;	
	float inches;			
};
///////////////////////////////////////////////////////////
struct Room			// размеры прямоугольной комнаты
{
	Distance lenght;	// длинна
	Distance wight;		// ширина
};
///////////////////////////////////////////////////////////
int main()
{
	Room dining;			// переменная dinig типа Room 
	dining.lenght.feet = 13;	// задание параметров комнаты
	dining.lenght.inches = 6.5; 	
	dining.wight.feet = 10;
	dining.wirht.inches = 0.0;
	// преобразование длинны и ширины в вещественный формат
	float l = dining.lenght.feet + dining.lenght.inches;
	float w = dining.wight.feet + dining.wirht.inches;
	// вычисление площади комнаты и вывод на экран
	cout << "Площадь комнаты равна: " << l * w << " квадратных футов\n";
	return 0;
}