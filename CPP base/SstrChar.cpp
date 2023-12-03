// доступ к символам в строке(объект класса string)

#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	char charay[80];
	string word;

	cout << "Введите слово: ";
	cin >> word;
	int wlen = word.length();		// длинна строки
	cout << "По одному символу: ";
	for (int j = 0; j < wlen; j++)
		cout << word.at(j);		// тут будет проверка на выход за прделы строки
		// cout << word[j];		// а тут проверки не будет

	word.copy(charray, wlen, 0);		// копируем строку в массив
	charray[wlen] = 0;
	cout << "\nМассив содержит: " << charray << endl;
	
	return 0;
}