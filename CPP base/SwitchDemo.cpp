/* Простой генератор пословиц, демонстрирующий применение инструкции switch */

#include <iostream>
using namespace std;

int main() {
	
	int num;
	
	cout << "Введите число от 1 до 3: ";
	cin >> num;

	switch (num) {
		
		case 1: 
			cout << "Один пирог два раза не сьешь.\n";
			break;

		case 2: 
			cout << "Двум головам на одних плечах тесно.\n";
			break;

		case 3: 
			cout << "Три раза прости, а четвертый прихворости.\n";
			break;

		default: 
			cout << "Вы должны ввести число 1, 2 или 3.\n"; 
		}
	return 0;
}