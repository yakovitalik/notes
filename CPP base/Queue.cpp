/* Класс очереди для хранения символов */

#include <iostream> 
using namespace std;

const int maxQsize = 100; /* Максимальное число элементов которое может храниться в очереди */

class Queue {
	char q[maxQsize];// Массив на котором строится очередь
	int size; //Реальный(максимальный) размер очереди
	int putloc, getloc; // put и get-индексы
public:

// Конструктор очереди заданного размера
Queue (int len) {
// Длинна очереди должна быть положительной, и быть мньше заданного максимума
	if (len > maxQsize) len = maxQsize;
	else if(len <= 0) len = 1;

	size = len; 
	putloc = getloc = 0; 
	}

// Функция внесения элемента в очередь
void put(char ch) {
	if(putloc == size) {
		cout << ""-- Очередь заполнена.\n";
		return;
		}
	putloc++;
	q[putloc] = ch;
	}

// Функция считывания элемента из очереди
char get() {
	if(getloc == putloc) {
		cout << "Очередь пуста.\n";
		return 0;
	}
	getloc++;
	return q[getloc];
};

// Демонстрация использования класса Queue
int main() {
	Queue bigQ(100); 
	Queue smallQ(4);
	char ch; 
	int i;

	cout << "Использование очереди bigQ для алфавита.\n";

	// Помещаеи ряд чисел в очередь bigQ
	for (i = 0; i < 26; i++) 
		bigQ.put ('A' + i);

	// Считываем и отображаем элементы из очереди bigQ
	cout << "Содержимое очереди bigQ: ";
	for (i=0; i < 26; i++) {
		ch = bigQ.get); 
		if (ch !=0) cout << ch;
 		}
	cout << "\n\n"; 

	cout << "Использование очереди smallQ для генерирования ошибок.\n"
	for(i = 0; i < 5; i++) {
		cout << "Попытка сохранить" << 
		(char) ('Z' - i);

		smallQ.put('Z' - i);
		cout << "\n"; 
		}
	cout << "\n"; 

	// Генерирование ошибок при считывании элементов из очереди smallQ.
	cout << "Содержимое очереди smallQ: ";
	for(i=0; i < 5; i++0) {
		ch = small.get(); 

		if (ch != 0) cout << ch;
		}
	cout << "\n"; 
	}
	
	return 0;
}
