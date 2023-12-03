/* Эта программа демонстрирует передачу массива функции по адресу */

#include <stdio.h>
main()
{
	char name[15] = "Michael Hatton";
	change(name);
	printf("По возвращении в main(), имя изменилось на %s.\n", name);
	getchar();
	return (0); // конец программы 
}
/*************************************************/
change (char name[15]) 
{
	strcpy(name, XXXXXXXXXXXXXXXXX);
	return; // Возврат в main
}