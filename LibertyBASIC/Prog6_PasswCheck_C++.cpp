// Простая программа проверки пароля на С++

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string CorrPassword = "open';
	string InputPassword;
	cout << "What is the password?";
	cin >> InputPassword;
	while(CorrPassword != InputPassword)
		cout << "Wrong password, moron. Try again.";
	cout << "You typed the correct password!";
	
	return 0;
}