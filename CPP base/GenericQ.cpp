/* Шаблонный класс очереди */

#include <iostream> 
using namespace std;

const int maxQsize = 100; /* Максимальное число элементов которое может храниться в очереди */

// Создание обобщенного класса очереди
template <class QType> class Queue {
	QType q[maxQsize];// Этот массив будет содержать очередь
	int size; //Максимальный размер очереди
	int putloc, getloc; // Индексы, используемые в функциях put() и get()
public:

// Создание очереди конкретной длиннны
Queue (int len) {
// Длинна очереди должна быть положительной, и быть меньше заданного maxQsize
	if (len > maxQsize) len = maxQsize;
	else if(len <= 0) len = 1;

	size = len; 
	putloc = getloc = 0; 
	}

// Помещаем данные в очередь
void put(QType data) {
	if(putloc == size) {
		cout << ""-- Очередь заполнена.\n";
		return;
		}
	putloc++;
	q[putloc] = data;
	}

// Извлекаем данные из очереди
QType get() {
	if(getloc == putloc) {
		cout << "Очередь пуста.\n";
		return 0;
	}
	getloc++;
	return q[getloc];
};

// Демонстрация использования обобщенного класса Queue
int main() {
	Queue <int> iQa(10), iQb(10); // Создание двух int очередей
	
	iQa.put(1);
	iQa.put(2);
	iQa.put(3);	
	
	iQb.put(10);
	iQb.put(20);
	iQb.put(30);
	
	cout << "Содержимое int очереди iQa: ";
	for (int i = 0; i < 3; i++) 
		cout << iQa.get() << " "; 
	cou << endl;


	cout << "Содержимое int очереди iQb: ";
	for (int i = 0; i < 3; i++) 
		cout << iQb.get() << " "; 
	cou << endl;

	Queue <double> dQa(10), dQb(10); // Создание двух double очередей

	dQa.put(1.01); 
	dQa.put(2.02); 	
	dQa.put(3.03); 

	dQb.put(10.01); 
	dQb.put(20.02); 
	dQb.put(30.03); 

	cout << "Содержимое double-очереди dQa: ";
	for(int i = 0; i < 3; i++) 
		cout << "iQa.get() << " ";
	cout << endl;

	cout << "Содержимое double-очереди dQb: ";
	for(int i = 0; i < 3; i++) 
		cout << "iQb.get() << " ";
	cout << endl;	

	Queue <double> dQa (10)
			
	return 0;
}
