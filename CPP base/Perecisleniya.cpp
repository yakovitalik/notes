// применение перечислений

#include <iostream>
using name space std;

// объявление перечисляемого типа
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main()
{
	days_of_week day1, day2;	// определенеи переменных, хранящих дни недели
	day1 = Mon;			// иициализация переменных
	day2 = Thu;
	int diff = day2 - day1;		// арифметическая операция
	cout << "Разница в днях: " << diff << endl;
	if(day1 < day2)
		cout << "day1 наступит раньше, чем day2\n";
	return 0;
}