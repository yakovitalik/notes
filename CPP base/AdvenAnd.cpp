// применение операции логического И

#include <iostream>
using namespace std;
#include <process.h>	// для exit()
#include <conio.h>	// для getche()

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while(dir != '\r')
		{
			cout << "\nВаши координаты: " << x << ", " << y;
			cout << "\nВыберите направление (n, s, e, w): ";
			dir = getche();		// ввод направления
			switch(dir)
			{
				case 'n': y--; break; // обновление координат
				case 's': y++; break;
				case 'e': x++; break;
				case 'w': x--; break;
			}
			if (x == 7 && y == 11)		// если х равно 7 и у равно 11
			{
				cout << "\n Вы нашли сокровище!\n";
				exit(0);			// выход из программы
			}
		}			// конец while
	
	return 0;
}					// конец main