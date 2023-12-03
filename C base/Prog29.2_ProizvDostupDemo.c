/* Эта программа открывает файл letters.txt и печатает в него буквы от 
A до Z. ПОсле этого программа с помощью цикла считывает буквы в обратном порядке от Z до A 
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
	printf("Букву с каким № нужно заменить (1-26)? ");
	scaf(" %d", &i);

	// Поиск указанной позиции от начала файла
	fseek(fptr, (i-1), SEEK_SET); /* Вычтем 1 из номера позиции потому что массивы начинаются с 0 */
	
	// Заменить букву в этой позиции на *
	fputc('*', ftpr);

	// Вернуться к началу файла и распечатать его
	fseek(fptr, 0, SEEK_SET);
	printf("Так файл выглядит сейчас:\n");

	for (i = 0; i < 26; i++)
	{
		letter = fgets(fptr);
		printf("Следующая буква: %c.\n", letter);
	}
	fclose(fptr); // Всегда закрываем файл
	getchar();	
	return (0);
}
