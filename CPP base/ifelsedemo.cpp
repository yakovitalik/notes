﻿// применение оператора if else

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "\nВведите число: ";
	cin >> x;
	if (x > 100)
		cout << "Это число больше чем 100\n";
	else
		cout << "Это число меньше чем 100\n";
	return 0;
}