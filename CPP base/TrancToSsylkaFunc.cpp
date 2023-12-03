// применение ссылочного механизма передачи аргументов
include <iostream>
using namespace std;
int main()
{
	void intfrac(float, foat&, float&);	// прототип
	float number, intpart, fracpart; 
	do {
		cout << "Введите вещественное число: ";
		cin >> number;		// ввод числа пользователем
		intfrac(number, intpart, fracpart);	// нахождение целой и дробной части
		cout << "Целая часть равна " << intpart	// вывод результатов
		<< ", дробная часть равна " << fracpart << endl;
	} while(number != 0.0);				// выход из цикла если введен ноль
	return 0;
}
//--------------------------------------------------------------------------
// фукнция intfrac()
// вычисляет целую и дробную часть вещественного числа
void infrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);		// преобразование к типу long
	intp = static_cast<float>(temp);		// и обратно в float
	fracp = n - intp;				// вычитаем целую часть
}