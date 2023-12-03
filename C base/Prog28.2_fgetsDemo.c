/* Эта программа использует файл информации о книгах из 
программы 28.1, считывает каждую строку и выводит информацию на экран */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main() 
{
	char fileLine[100]; // будет хранить вводимые строки
	fptr = fopen("C:\\users\\DeanWork\\Documents\\BookInfo.txt", "r");	
	if (fptr != 0)
	{
		while (!feof(fptr))
		{
			fgets(fileLine, 100, fptr);
			if (!feof(fptr))
			{
				puts(fileLine);
			}
			
		}
		
	}
	else 
	{
		printf("\nОшибка при открытии файла.\n");
	}
	fclose(fptr);
	getchar();
	return 0;
}