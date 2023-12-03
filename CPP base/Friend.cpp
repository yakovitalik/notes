// Дружественные функции

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class beta;					// нужно для объявления frifunc

class alpha
{
 private:
	int data;
 public:
	alpha() data(3) {  }			// конструктор буз аргументов
	
	friend int frifunc(alpha, beta);	// дружественная функция
};
//////////////////////////////////////////////////////////////////////////////
class beta
{
 private:
	int data;
 public:
	beta() : data(7) {  }			// конструктор буз аргументов

	friend int frifunc(alpha, beta);	// дружественная функция
};
//////////////////////////////////////////////////////////////////////////////
int frifunc(alpha a, beta b)			// определение функции
{
	return (a.data + b.data);
}
//////////////////////////////////////////////////////////////////////////////
int main()
{	
	alpha aa;
	beta bb;
	cout << frifunc(a, b) << endl;		// вызов функции
	rerturn 0;
}