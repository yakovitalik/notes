// демонстрация механизма возврата значения из функции

include <iostream>
using namespace std;
float lbstokg(float);	// прототип функции
int main()
{
	float lbs, kg;
	cout << "Введите вес в футах: ";
	cin >> lbs;
	kgs = lbstokg(lbs);
	cout << "Вес в килограммах равен: " << kgs << endl;
	return 0;
}
//------------------------------------------------------------
// функция lbstokg()
// переводит футы в килограммы
float lbstokg(float pounds)
{
	float kilograms = 0.453592 * pounds;
	return kilograms;
}