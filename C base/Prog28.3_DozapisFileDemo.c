/* Эта программа открывает существующий файл информации о книгах из прог 28.1 и 
добавляет в конец этого файла одну строку */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main() 
{

	fptr = fopen("C:\\users\\DeanWork\\Documents\\BookInfo.txt", "r");

	// Проверить, открылся ли файл
	if (fptr == 0)
	{
		printf("Ошибка--Невозможно открыть файл.\n");
		exit(1);
	}
	
	// Прибавить строку в конце
	fprintf(fptr, "\nСкоро я куплю еще книг!\n");

	fclose(fptr); // Обязательно закрыть файл
	getchar();
	return (0);
}