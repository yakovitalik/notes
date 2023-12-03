// поиск подстрок

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	string s1 = "В лесу родилась елочка, в лесу она росла";
	int n;
	
	n = s1.find("елочка");
	cout << "Елочка найдена: " << n << endl;

	n = s1.find_first_of("умка");
	cout << "Первый из умка: " << n << endl;

	n = s1.find_first_not_of("абвгАБВГ");
	cout << "Первый не из: " << n << endl;	

	return 0;
}