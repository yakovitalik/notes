// Поиск конкретного объекта в файле
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
	
	person pers;				// создать объект person
	ifstream infile;			// создать входной файл

	// открыть файл
	infile.open("GROUP.DAT", ios::in | ios::binary);
	infile.seekg(0, ios::end)		// установить указатель на 0 байт от 
						// конца файла
	int endposition = infile.tellg();	// найти позицию
	int n = endposition / sizeof(person);	// число человек
	cout << "\nВ файле " << n << " человек(а)";

	cout << "\nВведите номер персоны: ";
	cin >> n;

	// умножить размер данных под персону на число персон
	int position = (n-1) * sizeof(person); 

	infile.seekg(position);			// число байт от начала 

	// прочитать одну персону
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	pers.showData();			// вывести одну персону
	

	cout << endl;
	return 0;
}