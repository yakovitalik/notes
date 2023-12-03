// Создание класса очереди
/* Класс, реализующий очередь для хранения символов */

class Queue {
char q[]; // массив для хранения элементов очереди
int putloc, getloc; // индексы для вставки и извлечения
		    // элементов очереди

// Конструктор класса Queue создает очередь заданного размера
Queue (int size) {
	q = new char[size]; // выделение памяти для очереди
	putloc = getloc = 0;
	}
// Помещение символа в очередь
void put (char ch) {
	if(putloc==q.length) {
		System.out.println (" - Очередь заполнена");
		return;
	}

	q[putloc++] = ch;
	}
//Извлечение смивола из очереди
	char get () {
		if (getloc == putloc) {
			System.out.prinln(" - Очередь пуста");
			return (char) 0;
			}
	return q[getloc++];
	}
}
// Демонстрация использования класса QDemo




