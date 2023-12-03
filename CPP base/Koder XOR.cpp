/* Программа для кодирования и декодирования сообщения через оператор XOR */ 

#include <iostream>
using namespace std;

int main() 
{
	char msg[] = "Это простой текст"; 
	char key = 88;

	cout << "Исходное значение: " << msg << "\n"; 
	
	for (int i=0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;

	cout << "Закодированное сообщение: " << msg << "\n";

	for (int i=0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;
	 
	cout << "Декодированное сообщение: " << msg << "\n";	
	
	return 0;
}
