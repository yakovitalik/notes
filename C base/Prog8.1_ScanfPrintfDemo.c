/* Эта программа-пример запрашивает у пользователя некоторые данные, после чего выводит их на экран, 
чтобы показать что было введено*/
#include <stdio.h>
main ()
{
	// Установка переменных, значение которым будет присвоено функцией scanf ()
	char firstInitial;
	char lastInitial;
	int age;
	int favorite_number;
	printf ("С какой буквы начинается ваша фамилия?\n");
	scaf (" %c", &firstInitial);
	printf ("С какой буквы начинается ваше имя?\n");
	scanf (" %c", &lastInitial);
	printf ("Сколько вам лет?\n");
	scanf (" %d", &age);
	printd ("Какое ваше любимое число?\n");
	scanf (" %d", &favorite_number);
	printf ("\n\n Ваши инициалы: %c.%c., вам %d лет", firstInitial, lastInitial, age);
	printf ("\n Ваше любимое число %d. \n\n", favorite_number);
	getchar();
	return 0;
}