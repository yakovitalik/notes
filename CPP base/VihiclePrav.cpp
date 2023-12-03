/* Определние конструктора, деструктора и функии range()  в качестве встраиваемых функций */ 

#include <iostream>
using namespace std;

// Объявление класса Vehicle
class Vehicle {
// теперь эти переменные закрыты (private)
int passengers; // количество пассажиров
int fuelcap; // Вместимость топливных баков в литрах
int mpg; // расход горючего в километрах на литр
public:
// Определение встраиваемого конструктора класса Vehicle
Vehicle (int p, int f, int m) {
	passengers = p; 
	fueclap = f;
	mpg = m;
}

// Функция вычисления максимального пробега теперь встраиваемая
int range () { return mpg * fuelcap; }

// Функции доступа к членам класса теперь встраиваемые 
int get_passengers() { return passengers; }
int get_fuelcap() { return fuelcap; }
int get_mpg() { return mpg; }
};

int main () {
	// Передаем значения в конструктор класса Vehicle
	Vehicle minivan (7, 16, 21);
	Vehicle sportcar (2, 14, 12);
	
	int range1, range2;

	/* Вычисляем расстояние, которое может проехать каждое транспортное средство после заливки 
	полного бака горючего */
	range1 = minivan.range(); 
	range2 = sportcar.range();

	cout << "Минифургон  может перевезти " << 
	minivan.get_passengers() << "пассажиров на расстояние" << 
	range1 << " километров." << "\n"; 
	
	cout << "Спортивный автомобиль  может перевезти " << 
	sportcar.get_passengers() << "пассажиров на расстояние" << 
	range2 << " километров." << "\n"; 
	
	return 0;
}