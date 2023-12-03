include <iostream>
using namespace std;

int main()
{
	float salary, taxowed;
	cout << "How much money did you make last year?";
	cin >> salary;
	taxowed = salary * 0.95;
	cout << "This is how much tax you owe = " << taxowed;
	
	return 0;
}