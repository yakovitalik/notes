//Окончательная версия справочной системы

#include <iostream>
using namespace std;

// Класс Help, который инкапсулирует справочную систему

class Help {
public: 
	void helpon(char what);
	void showmenu();
	bool isvalid(char ch); 
};

// Отображение справочной информации
void Help::helpon(char what) {
	switch(what) {
	case '1': 
		cout << "Инструкция if: \n\n";
		cout << "if (условие) инструкция; \n"; 
		cout << "else инструкция; \n"; 
		break;
	
		case '2':
		cout << "Инструкция swith: \n\n"; 
		cout << "swith (выражение) {\n"; 
		cout << " case константа:\n";
		cout << " последовательность инструкций \n";
		cout << " break; \n";
		cout << " // ....\n";
		cout << "}\n"; 
		break;

		case '3': 
		cout << "Инструкция for: \n\n";
		cout << "for (инициализация; условие; инкремент)"; 
		cout << " инструкция; \n"; 
		break;

		case '4': 
		cout << "Инструкция while: \n\n";
		cout << "while (условие) инструкция; \n"; 
		cout << "else инструкция; \n"; 
		break;

		case '5': 
		cout << "Инструкция do-while: \n\n";
		cout << "do {\n"; 
		cout << " инструкция; \n"; 
		cout << " } while(условие); \n";
		break;

		case '6': 
		cout << "Инструкция break: \n\n";
		cout << "break; \n"; 
		break;
	
		case '7': 
		cout << "Инструкция continue: \n\n";
		cout << "continue; \n"; 
		break;

		case '8': 
		cout << "Инструкция goto: \n\n";
		cout << "goto метка; \n"; 
		break;	
	}

	cout << "\n";
}

// Отображение меню справочной системы
void Help::showmenu() {
	cout << "Справка по инструкциям: \n";
	cout << "1. if \n"; 
	cout << "2. switch \n";
	cout << "3. for \n";
	cout << "4. while \n";
	cout << "5. do-while \n";
	cout << "6. break \n";
	cout << "7. continue \n";
	cout << "8. goto \n";
	cout << "Выберите вариант справки (q - для выхода): ";
}

/* Проверка допустимости команды пользователя (функция возвращает значение ИСТИНА если команда допустима) */
bool Help::isvalid(char ch) {
	if (ch < '1' || ch > '8' && ch != 'q') 
		return false; 
	else 
		return true; 
}

int main () {
	char choice;
	Help hlpob; // Создаем экземпляр класса Help (объект)

	// Использование класса Help для отображения информации

	for ( ; ; ) {
		do {
		hlpob.showmenu(); 
		cin >> choice; 
		} while (!hlpob.isvalid(choice)); 
	
		if (choice == 'q') break;	
		cout << "\n";

		hlpob.helpon(choice); 
	}

	return 0;
}