// оператор new - выделение памяти у операционной системы

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char* str = "Дурная голова ногам покоя не дает.";
	int len = strlen(str);			// вычислим длинну нашей строки
	char* ptr;				// определим переменную
	ptr = new char[len + 1];		// выделим память
	strcpy(ptr, str);			// копируем строку str в ptr
	cout << "ptr = " << ptr << endl;	// покажем что содержится в ptr
	delete[] ptr;				// освободим выделенную память
		
	return 0;
}