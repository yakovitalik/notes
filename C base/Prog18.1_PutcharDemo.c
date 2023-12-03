/* Простая демонстрация функции putchar() */

#include <stdio.h>
#include <string.h>

main() 
{
	int i;
	char msg[] = "C - это весело";
	for(i=0; i < srlen(msg); i++) 
	{
		putchar(msg[i]); // Вывод одного символа
		
	}
	putchar('\n'); // перенос строки после завершения цикла
	getchar();
	return 0;
}