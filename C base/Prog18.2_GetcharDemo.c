/* Простая демонстрация функции getchar() */

#include <stdio.h>
#include <string.h>

main() 
{
	int i;
	char msg[25];
	printf("Введите мак 25 символов и нажмите Enter...\n");
	for(i=0; i < 25; i++) 
	{
		msg[i] = getchar(); // Вводит один символ
		if(msg[i] == '\n')
		{
			i--;
			break;
		}
		
	}
	putchar('\n'); // перенос строки после завершения цикла
	for(; i >=0; i--)
	{
		putchar(msg[i]);
	} 
	putchar('\n');
	getchar();
	return 0;
}