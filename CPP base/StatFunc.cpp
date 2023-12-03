// Статические функции и ID объектов. Так же отображает использование деструкторов
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
clas gamma
{
 private:
	static int total;			// всего объектов класса

	int id;					// id текущего объекта
 public:
	gamma()
	{
		total++;			// добавить объект
		id = total;			// id равен текущему значению total
	}
	~gamma()
	{
		total--;
		cout << "\nУдаление ID " << id << endl;
	}
	static void showtotal()			// статическая функция
	{
		cout << "Всего: " << total << endl;
	}
	void showid()				// нестатическая функция
	{
		cout << "ID: " << id << endl;
	}
};
//----------------------------------------------------------------------------
int gamma::total = 0;				// определение total
//////////////////////////////////////////////////////////////////////////////
int main()
{
	gamma g1;
	gamma::showtotal();

	gamma g2. g3;
	gamma::showtotal();

	g1.showid();
	g2.showid();
	g3.showid();
	cout << "---------конец программы-------------\n";
	
	return 0;
}




