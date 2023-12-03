/* Создание оператора исключающее ИЛИ */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	bool p,q;
	
	p = trye; 
	q = true;
	cout  << p << " XOR " << q << " равно " << ((p || q) && !(p && q)) << "\n";

	p = false; 
	q = true; 
	cout  << p << " XOR " << q << " равно " << ((p || q) && !(p && q)) << "\n";

	p = false; 
	q = true; 
	cout  << p << " XOR " << q << " равно " << ((p || q) && !(p && q)) << "\n";

	p = false; 
	q = false; 
	cout  << p << " XOR " << q << " равно " << ((p || q) && !(p && q)) << "\n";

	return 0;
}