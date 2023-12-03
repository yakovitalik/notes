// применение цикла while

#include <iostream>
using namespace std;

int main()
{
	int n = 99; // n не должна быть равной 0 перед началом цикла
	
	while (n != 0)	// цикл, пока значение не равно 0
		cin >> n;
	cout << endl;
	return 0;
}