// Чтение объекта из файла
#include <fstream>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class person
{
 protected:
	char name[80];					// имя человека
	short age;					// его возраст
 public:
	void showData()					// вывести данные
	{
		cout << "Имя: " << name << endl;
		cout << "Возраст:" << age << endl;
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	person pers;					// переменная типа person

	// создать поток
	ifstream.infile("PERSON.DAT", ios::binary);
	
	// чтение потока
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));

	// вывести данные
	pers.showData();
	return 0;	
}