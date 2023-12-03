// Использование параметризованного конструктора

#include <iostream>
using namespace std;

class MyClass {
public: 
	int x; 

	// Объявляем конструктор и деструктор
	MyClass (int i); // конструктор (добавляем параметр)
	~MyClass(); // деструктор
};

// Реализуем параметризированный конструктор
MyClass::MyClass(int i) {
	x = i;
}

// Реализуем деструктор класса MyClass
MyClass::~MyClass() {
	cout << "Разрушение объекта, в котором значение x равно " << x << "\n";
}

int main() {
	MyClass t1(5); 
	MyClass t(19); 

	cout << t1.x << " " << t2.x << "\n";
	
	return 0;
}