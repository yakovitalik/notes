/* Программа, в которой использутся класс Vehicle */ 

#include <iostream>
using namespace std;

// Объявление класса Vihicle
class Vehicle {
public:
	int passengers; // количество пассажиров
	int fuelcap; // вместимость бака в литрах
	int mpg; // расход горючего в километрах на литр
};

int main () {
	Vehicle minivan; // Создание объекта minivan экземпляра класса Vehicle
	int range;

	// Присваиваем значения полям в объекте minivan
	minvan.passengers = 7; 
	minivan.fuelcap = 16; 
	minivan.mpg = 21;

	// Вычисляем расстояние, которое может проехать транспортное 
	// средство после заливки полного бака горючего

	range = minivan.felcap * minivan.mpg;

	cout << "Минифургон может перевезти " << minivan.passengers << " пассажиров на расстояние " 
	<< range << " километров." << "\n";

	return 0;
}
	