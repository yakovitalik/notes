﻿// программа для расчета электрических величин
// автор: Виталий Яковлев, yakovitalik@mail.ru

#include <iostream>
#include <cmath>
#include <process.h>			// для exit()
using namespace std;

// Константы
const float SQR3 = 1.73;		// корень из 3
const float COS1 = 0.93;		// коэффициент для коммунально-бытовой нагрузки
const float COS2 = 0.75;		// коэффициент для производственной нагрузки
const float COS3 = 0.85;		// коэффициент для смешанной нагрузки
const float volt = 230.0;		// напряжение берется 230 Вольт
//////////////////////////////////////////////////////////////////////////////
class interface
{
 private:
	char endchoise = 'A';
	
 public:
	void hello()			// приветствие программы
	{
		cout << "\nВас приветствует Программа для расчета электрических величин!\n";
		cout << "Автор: Виталий Яковлев, yakovitalik@mail.ru\n";
	}	
	void showmenu()			// основное меню выбора расчета
	{
		cout << "\n\nВыберите вариант расчета (Введите цифру): \n";
		cout << "1. Расчет мощности трансформатора по активной мощности \n"; 
		cout << "2. Расчет полной мощности по активной и реактивной \n";
		cout << "3. Расчет тока и косинуса по мощностям \n";
		cout << "4. Расчет загрузки трансформатора по стороне 0,4кВ \n";
		cout << "Для выхода из программы нажмите клавишу 'q': \n";
	}
	void chLoad()			// меню выбора косинуса
	{
	cout << "\n\nВыберите тип нагрузки: \n";
	cout << "1. Коммунально-бытовая (cos = 0,93) \n";
	cout << "2. Производственная (cos = 0,75) \n";
	cout << "3. Смешанная (cos = 0,85) \n";
	}
};
//////////////////////////////////////////////////////////////////////////////
class elec				// общий класс электроустановок
{
 protected:
	float actpower;			// активная мощность, кВт
	float reactpower;		// реактивная мощность, кВар
	float fullpower;		// полная мощность, кВА
	float cosinf;			// косинус (коэффициент мощности)
 pulic:
	void getAct()			// получение активной мощности
	{
		cout << "\n\nВведите значение активной мощности, кВт: \n";
		cin >> actpower;
	}
	void getReact()			// получение реактивной мощности
	{
		cout << "\n\nВведите значение реактивной мощности, кВар: \n";
		cin >> reactpower;
	}
	void setCosR1()			// определение косинуса(cosinf) по типу нагрузки (для расчета1)
	{
		char change_cos;	// переменная хранения выбора типа нагрузки
		interface::void chLoad(); // вывод меню
		cin >> change_cos;
		if (change_cos == '1')		// определение
			cosinf = COS1;
		else if (change_cos == '2')
			cosinf = COS2;
		else if (change_cos == '3')
			cosinf = COS3;
		else
		{
			cout << "\nНекорректное значение, выбран косинус по умолчанию (0,93)";
			cosinf = COS1;
		}
		
	}
	void setCosR3()			// определение косинуса по величине активной и полной мощности(для расчета3)
	{
		 cosinf = actpower / fullpower;
	}
	
	void setFull1()			// рассчет полной мощности по активной и коэф.мощности (Расчет1)
	{ 
		cout << "Выполняем расчет мощности трансформатора по активной мощности \n\n";
		fullpower = actpower / cosinf;
		
		
	}
	void setFull2()			// рассчет полной мощности по активной и реактивной (Расчет2)
	{
		fullpower = sqrt((actpower*actpower) + (reactpower*reactpower));
	}
	
	void showResult()		// вывод результатов расчета полной мощности на экран
	{
		cout << "\nРасчет выполнен!\n\n";
		cout << "Полная мощность будет равна: " << fullpower << " кВА" << '\n';
	}
};
//////////////////////////////////////////////////////////////////////////////
class trans : public elec		// трансформатор
{
 private:
	float PowTr;				// установленная мощность трансформатора, кВА
	float iA;				// ток по фазе A для Рачета 4
	float iB;				// ток по фазе B для Рачета 4
	float iC;				// ток по фазе C для Рачета 4
	float sA;				// мощность по фазе A для Рачета 4
	float sB;				// мощность по фазе B для Рачета 4
	float sC;				// мощность по фазе C для Рачета 4
	float sT;				// сумма мощностей по фазам для Рачета 4
	float kzagr;				// коэффициент загрузки трансформатора (в процентах)

 public:
	void getCurrent()			// ввод токов по фазам
	{
		cout << "\n\nВведите значение мощность трансформатора, кВА: \n";
		cin >> PowTr;
		cout << "Введите значение тока по фазе А, А: \n";
		cin >> iA;
		cout << "Введите значение тока по фазе B, А: \n";
		cin >> iB;
		cout << "Введите значение тока по фазе C, А: \n";
		cin >> iC;
	}
	void setPower()				// рассчет мощностей и коэффициента загрузки (Расчет4)
	{
		sA = PowTr * iA;
		sB = PowTr * iB;
		sC = PowTr * iC;
		sT = sA + sB + sC;
		kzagr = ((sT / 1000) / PowTr) * 100;
	}
	void showResult4()		// вывод результатов расчета4 на экран
	{
		cout << "Загрузка трансформатора составляет: " << kzagr << " \%";
	}
};
//////////////////////////////////////////////////////////////////////////////
class line : public elec		// Линия электропередачи
{
private:
	float current;			// ток, А
	float voltage;			// напряжение, кВ
	
public:
	void getAct()			// получение активной мощности
		{ elec::getAct(); }
	void getReact()			// получение реактивной
		{ elec::getReact(); }
	void getVoltage()		// ввод напряжения
	{
		cout << "Введите значение напряжения, кВ: \n";	
		cin >> voltage;
	}
	void setFPower()		// рассчет полной мощности
		{ elec::setFull2(); }	
	void setCos()			// расчет косинуса
		{ elec::setCosR3(); }
	void setCurrent();		// расчет тока
	{
		current = fullpower / (SQR3 * voltage);
	}
	void showResultR3()		// вывод результатов
	{
		cout << "Полная мощность будет равна: " << fullpower << " кВА" << '\n';
		cout << "cos ф равен: " << cosinf << '\n';
		cout << "Ток равен: " << current << " А" << '\n';
	}
	
};
//////////////////////////////////////////////////////////////////////////////

int main()
{
	interface i1;			// создание объектов
	elec e1, e2;
	trans t1;
	line l1;
	char choise;			// для выбора из меню
	i1.hello();			// приветствие
	
	for( ; ;)
		do {
			i1.showmenu();			// основное меню выбора расчета
			cin >> choise;			// выбор пункта меню
			if (choise == 'q') 		// для выхода
			{
				exit(0);	
			}
			else if (choise == '1')		// расчет1: полной мощности трансформатора активной и коэф.мощности
			{
				e1.getAct();		// ввод активки
				i1.chLoad();		// отображение меню выбора типа нагрузки
				e1.setCosR1();		// выбор типа нагрузки
				e1.setFull1();		// выполняем рассчет;
				e1.showResult();	// вывод результатов рассчета
		
			}
			else if (choise == '2')		// расчет2: полной мощности по активке и реактивке
			{
				e2.getAct();		// ввод активки
				e2.getReact();		// ввод реактивки
				e2.setFull2();		// расчет полной мощности
				e.showResult();		// вывод результатов рассчета
			}
			else if (choise == '3')		// расчет3: параметров ВЛ: косинуса, тока
			{
				l1.getAct();		// ввод активки
				l1.getReact();		// ввод реактивки
				l1.getVoltage();	// ввод напряжения
				l1.setFPower();		// расчет полной мощности
				l1.setCos();		// расчет косинуса
				l1.setCurrent();	// расчет тока
				l1.showResultR3();	// вывод результатов рассчета
			}
			else if (choise == '4')		// расчет4: загрузки трансформатора по 0,4кВ на КТП
			{
				t1.getCurrent();	// ввод значений
				t1.setPower();		// расчет значений
				t1.showResult4();	// вывод значений
			}
			else
			{
				cout << "Некорректное значение!";
			}
		} while (choice != 'q');
	
	return 0;
}
