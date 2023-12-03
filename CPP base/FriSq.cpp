// дружественная для Distance функция square()

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
class Distance					// длинна в английской системе
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без параметров
		Distance() : feet(0), inches(0)
			{ }

		Distance(int ft, float in)	// конструктор с двумя параметрами
			{ feet = ft; inches = in; }

		void showdist()			// вывод длинны на экран
			{ cout << feet << "\'-" << inches << '\"';  }
		friend float square(Distance);	// дружетсвенная функция
};
//--------------------------------------------------------------------------
// возвращает квадрат расстояния
float square(Distance d)
{
	float fltfeet = d.feet + d.inches / 12;	// перевод во float
	float feetsqrd = fltfeet * fltfeet;	// возведение в квадрат
	return feetsqrd;			// возвратить квадрат
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Distance dist(3, 6.0);			// конструктор с двумя параметрами
	float sqft;
	sqrt = square(dist); 			// вычислить квадрат расстояния
						// показать расстояние и квадрат расстояния

	cout << "\nРАсстояние = "; dist1.showdist();
	cout << "\nКвадрат расстояния = " << sqft << " кв.футов\n";
	return 0;
}