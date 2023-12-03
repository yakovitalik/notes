// программа для расчета электрических величин
// автор: Виталий Яковлев, yakovitalik@mail.ru

#include <iostream>
#include <cmath>
#include <conio.h>
#include <locale.h>
#include <process.h>	// для exit()
using namespace std;
//----------------------------------------------
// Прототипы функций
void raschet1();
void raschet2();
void raschet3();
void raschet4();
//----------------------------------------------
// Глобальные переменные и константы
double actpower;			// активная мощность, кВт
double reactpower;			// реактивная мощность, кВар
double fullpower;			// полная мощность, кВА
double sqr3 = 1.73;		// корень из 3
double cosinf;				// косинус фи
double voltage;				// напряжение, кВ
double curent;				// ток, А
double iA;				// ток по фазе A для Рачета 4
double iB;				// ток по фазе B для Рачета 4
double iC;				// ток по фазе C для Рачета 4
double sA;				// мощность по фазе A для Рачета 4
double sB;				// мощность по фазе B для Рачета 4
double sC;				// мощность по фазе C для Рачета 4
double sT;				// сумма мощностей по фазам для Рачета 4
double zagrkof;				// коэффициент загрузки трансформатора (в процентах)
//////////////////////////////////////////////////////////////////////////////

int main()
{
	setlocale(0, "");
	char choise;			// выбор пользователем пункта меню
	cout << "\n\nВас приветствует программа для расчета электрических величин\n";
	cout << "Автор: Виталий Яковлев, yakovitalik@mail.ru\n";

	for ( ; ; )
	{
		do {
			cout << "\nВыберите вариант расчета (Введите цифру): \n";
			cout << "1. Расчет мощности трансформатора по активной мощности \n";
			cout << "2. Расчет полной мощности по активной и реактивной \n";
			cout << "3. Расчет тока и косинуса по мощностям \n";
			cout << "4. Расчет загрузки трансформатора по стороне 0,4кВ \n";
			cout << "Для выхода из программы нажмите клавишу 'q': \n";
			cin >> choise;
			cout << endl;
		} while (choise < '1' || choise > '5' && choise != 'q');

		if (choise == 'q')
		{
			exit(0);
		}

		else if (choise == '1')
		{
			raschet1();
		}
		else if (choise == '2')
		{
			raschet2();
		}
		else if (choise == '3')
		{
			raschet3();
		}
		else if (choise == '4')
		{
			raschet4();
		}
		else
		{
			cout << "Некорректное значение!";
		}

	}
	return 0;
}
//////////////////////////////////////////////////////////////////////////////
void raschet1()		// Расчет 1
{
	char chcos;			// выбор типа нагрузки пользователем
	cout << "Выполняем расчет мощности трансформатора по активной мощности \n\n";
	cout << "Введите значение активной мощности, кВт: \n";
	cin >> actpower;
	cout << "\nВыберите тип нагрузки: \n";
	cout << "1. Коммунально-бытовая (cos = 0,93) \n";
	cout << "2. Производственная (cos = 0,75) \n";
	cout << "3. Смешанная (cos = 0,85) \n";
	cin >> chcos;
	if (chcos == '1')
		cosinf = 0.93;
	else if (chcos == '2')
		cosinf = 0.75;
	else if (chcos == '3')
		cosinf = 0.85;
	else
	{
		cout << "Некорректное значение, выбран косинус по умолчанию (0,93)";
		cosinf = 0.93;
	}

	// вычисляем полную мощность
	fullpower = actpower / cosinf;

	// вычисляем реактивную мощность
	reactpower = sqrt((fullpower * fullpower) - (actpower * actpower));

	cout << "\nРасчет выполнен!\n\n";

	// выводим значения на экран
	cout << "Полная мощность будет равна: " << fullpower << " кВА\n";
	cout << "Реактивная мощность будет равна: " << reactpower << " кВАР\n";
	cout << "\nДля продолжения нажмите клавишу Enter...\n\n";
	getchar();
}
//////////////////////////////////////////////////////////////////////////////
void raschet2()			// Расчет 2
{
	cout << "\nВыполняем расчет полной мощности по активной и реактивной \n\n";
	cout << "Введите значение активной мощности, кВт: \n";
	cin >> actpower;
	cout << "Введите значение реактивной мощности, кВар: \n";
	cin >> reactpower;

	// выполняем расчет полной мощности
	fullpower = sqrt((actpower * actpower) + (reactpower * reactpower));

	cout << "\nРасчет выполнен!\n\n";
	cout << "Полная мощность будет равна: " << fullpower << " кВА\n\n";
	cout << "Для продолжения нажмите клавишу Enter...\n\n";
	getchar();
}
//////////////////////////////////////////////////////////////////////////////
void raschet3()			// Расчет 3
{
	// ввод значений пользователем
	cout << "\nВведите значение активной мощности, кВт: \n";
	cin >> actpower;
	cout << "Введите значение реактивной мощности, кВар: \n";
	cin >> reactpower;
	cout << "Введите значение напряжения, кВ: \n";
	cin >> voltage;

	// расчет значений
	fullpower = sqrt((actpower * actpower) + (reactpower * reactpower));
	cosinf = actpower / fullpower;
	curent = fullpower / (sqr3 * voltage);
	cout << "\nРасчет выполнен!\n\n";

	// вывод значений
	cout << "Полная мощность будет равна: " << fullpower << " кВА\n";
	cout << "cos ф равен: " << cosinf << endl;
	cout << "Ток равен: " << curent << " А" << endl;
	cout << "\nДля продолжения нажмите клавишу Enter...\n\n";
	getchar();
}
//////////////////////////////////////////////////////////////////////////////
void raschet4()			// Расчет 4
{
	// ввод значений пользователем
	cout << "\nВведите значение мощность трансформатора, кВА: \n";
	cin >> fullpower;
	cout << "Введите значение тока по фазе А, А: \n";
	cin >> iA;
	cout << "Введите значение тока по фазе B, А: \n";
	cin >> iB;
	cout << "Введите значение тока по фазе C, А: \n";
	cin >> iC;

	// расчет значений
	voltage = 230;			// здесь напряжение указано в вольтах, 230В
	sA = voltage * iA;
	sB = voltage * iB;
	sC = voltage * iC;
	sT = sA + sB + sC;
	zagrkof = ((sT / 1000) / fullpower) * 100;
	cout << "\nРасчет выполнен!\n\n";

	// вывод значений
	cout << "\nЗагрузка трансформатора составляет: " << zagrkof << " \%";
	cout << "\nДля продолжения нажмите клавишу Enter...\n\n";
	getchar();
}
//////////////////////////////////////////////////////////////////////////////
