// ввод строкии с пробелами

include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	const int MAX = 80; 		// максимальная длинна строки
	char str[MAX]			// сама строка
	
	cout << "\nВведите строку: ";
	
	cin.get(str, MAX);
	cout << "Вы ввели: " << str << endl;
	return 0;
}