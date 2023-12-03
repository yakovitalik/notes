// ввод вывод для стандартного класса string

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	string full_name, nickname, address;
	string greeting("Здраствуйте, ");
		
	cout << "Введите ваше имя: ";
	getline(cin, full_Name);
	cout << "Ваше имя: " << full_name << endl;
	
	cout << "Введите ваш псевдоним: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;
	
	cout << "Введите ваш адрес в несколько строк\n";
	cout << "Окончание ввода - символ $\n";
	getline(cin, address, '$');
	cout << "Ваш адрес: " << address << endl;

	return 0;
}