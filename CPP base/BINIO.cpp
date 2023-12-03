// Двоичный ввод/вывод целочисленных данных

#include <fstream>
#include <iostream>
using namespace std;
//----------------------------------------------------------------------------
const int MAX = 100;
int buff[MAX];
//////////////////////////////////////////////////////////////////////////////
int main()
{
	for(int j = 0; j < MAX; j++)		// заполнить буфер данными
		buff[j] = j;			// (0, 1, 2, ....)

	// создать выходной поток
	ofstream os("edata.dat", ios::binary);

	// записать в него
	os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int));
	os.close();				// должен закрыть его
	
	for(j = 0; j < MAX; j++)		// стереть буфер
		buff[j] = 0;

	// создать входной поток
	ifstream is("edata.dat", ios::binary);

	// читать из него
	is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int));
	
	for(j = 0; j < MAX; j++)
		if(buff[j] != j)
			{ cerr << "Некорректные данные!\n"; return 1; }
	cout << "Данные корректны\n";
	
	return 0;
}

