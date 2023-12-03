/* Программа расчета гипотенузы треугольника через теорему Пифагора с фукцией sqrt() */

#include <iostream>
#include <cmath> // Заголовок для вызова функции sqrt()
using namespace std;

int main() {
	double x, y,z;
	
	x = 5;
	y = 4;
	
	z = sqrt(x*x+y*y); // функция sqrt () является частью математической библиотеки С++
	cout << "Гипотенуза равна: " << z;
	return 0;
}