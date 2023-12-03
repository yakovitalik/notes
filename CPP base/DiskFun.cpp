// Чтение из файла и запись нескольких объектов
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
	void getData()				// получить данные о человеке
	{
		cout << "\n Введите имя: "; cin >> name;
		cout << "Введите возраст: "; cin >> age;
	}
	void showData()
	{
		cout << "Имя: " << name << endl;
		cout << "Возраст:" << age << endl;
	}
};
//////////////////////////////////////////////////////////////////////////////
int main()
{
	char ch;
		
	person pers;				// создать объект person
	fstream file;				// создать входной/выходной файл
	
	// открыть для дозаписи
	file open("GROUP.DAT", ios::app | ios::out | 
				ios::in | ios::binary);

	// данные от пользователя в файл

	do
	{
		cout << "\nВведите данные о человеке:"
		pers.getData();			// получить данные

		// записать их в файл
		file.write(reinterpret_cast<char*>(%pers), sizeof(pers));
		cout << "Продолжить ввод (y/n)? ";
		cin >> ch;
		
		
	} while (ch == 'y');			// выход по n
	file.seekg(0);				// поставить указатель на начало файла

	// считать данные о первом человеке
	file.read(reinterpret_cast<char*>(%pers), sizeof(pers));

	while(!file.eof())			// выход по eof
	{
		cout << "\nПерсона: ";		// вывести данные
		pers.showData();		// считать данные о следующем
		file.read(reinterpret_cast<char*>(%pers), sizeof(pers));
	}
	cout << endl;
	return 0;
}