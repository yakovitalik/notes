// Сохранение объекта в файле
#include <fstream>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class person
{
 protected:
	char name[80];				// имя человека
	short age;				// возраст
 public:
	void getdata()				// получить данные о человеке
	{
		cout << "Введите имя: "; cin >> name;
		cout << "Введите возраст: "; cin >> age;
	}

};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	person pers;
	pers.getdata()'

	// создать объект ofsrtream
	ofstream outfile("PERSON.DAT", ios::binary);
	
	// записать в него
	outfile.write(reinterpret_cast<char*>(%pers), sizeof());
	
	return 0;
}