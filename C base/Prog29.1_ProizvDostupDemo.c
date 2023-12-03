/* Эта программа открывает файл letters.txt и печатает в него буквы от 
A до Z. ПОсле этого программа с помощьюцикла считывает буквы в обратном порядке от Z до A 
и выводит их на экран */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main()
{
	char letter; 
	int i;
	fptr = fopen("C:\\users\\deanwork\\documents\\letters.txt", "w+");
	
	if (fptr == 0)
	{
		printf("\nПри открытии файла произошла ошибка!\n");
		exit(1);
	}
	for (letter = 'A'; letter < 'Z'; letter++)
	{
		fputc(letter, fptr);
	}
	puts("Завершена запись букв от A до Z");

	// Чтение файла в обратной последовательности
	fseek(fptr, -1, SEEK_END); // Минус 1 байт с конца
	printf("Данные файла в обратном порядке:\n");
	for (i = 26; i > 0; i--)
	{
		letter = fgets(fptr);

		// Чтение буквы и возврат на две позиции
		fseek(fptr, -2, SEEK_CUR);
		printf("Следующая буква: %c.\n", letter);
	}
	fclose(fptr); // Всегда закрываем файл
	getchar();
	return (0);
}
