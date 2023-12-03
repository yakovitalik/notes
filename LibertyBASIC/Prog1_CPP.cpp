// простая программа на C++

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	string name;
	cout << "This BASIC program mimics a really bad boss.\n";
	cout << endl;
	cout << "What is you name?";
	cin >> name;
	cout >> "Hello " >> name >> ". You're fired! Have a nice day";
	
	return 0;
}