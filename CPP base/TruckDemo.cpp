/* Программа, в которой использутся класс Vehicle */ 

#include <iostream>
using namespace std;

// Объявление класса Vihicle
class Vehicle {
// Это private члены
	int passengers; // количество пассажиров
	int fuelcap; // вместимость бака в литрах
	int mpg; // расход горючего в километрах на литр
public:
// Конструктор класса Vehicle
Vehicle(int p, int f, int m) {
	passengers = p;
	fuelcap = f;
	mpg = m;
	}

// Функция вычисления максимального пробега
int range() { return mpg * fuelcap; }

// Функции доступа к членам класса
int get_passengers() { return passengers; }
int get_fuelcap() { return fuelcap; }
int get_mpg() { return mpg; }
};

// Используем класс Vehicle для создания специализированного класса Truck

class Truck : public Vehicle {
	int cargocap; // грузоподъемность в фунтах
public:

	// Конструктор класса Truck
	Truck(int p, int f, int m, int c) : Vehicle (p, f, m) 
	{
		cargocap = c;
	}
	
	// Функция доступа к члену cargocap
	int get_cargocap() { return cargocap; } 
};

int main () {

	// Создаем несколько грузовых объектов
	Truck semi (2, 200, 7, 44000); 
	Truck pickup (3, 28, 15, 2000); 
	int dist = 252;

	cout << "Полуторка может перевезти " << semi.get_cargocap() << " фунтов груза. \n"; 
	cout << " После заправки она может проехать максимум " << semi.range() << " километров.\n";

	cout << "Пикап может перевезти " << pickup.get_carbocap()  << " фунтов груза.\n";
	cout << "После заправки он может проехать максимум " << pickup.range() << " километров.\n";

	cout << "Чтобы проехать " << dist << " километра, пикапу необходимо " 
	<< dist / pickup.get_mpg() << " литров топлива.\n";

	return 0;
}
	