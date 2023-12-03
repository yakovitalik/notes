/* В основе этой программы программа 27.1 (информация о книгах) но сведения
печатаются в файл bookinfo.txt */

// В первую очередь подключим файл с определением структуры
#include "bookInfo.h"
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main() 
{
	int ctr; 
	struct bookInfo books[3]; // Массив из трех структурных переменных

	// Получить информацию о каждой книге от пользователя
	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("Введите название книги №%d?\n", (ctr+1));
		gets(books[ctr].title);
		puts("Кто автор? ");
		gets(books[ctr].autor);
		puts("Сколько стоила ваша книга? ");
		scanf(" $%f", &books[ctr].price);
		puts("Сколько страниц в книге? ");
		scanf(" %d", &books[ctr].pages);
		getchar(); // Создает пустую строку для следующего прохода
	}

	/* При вводе путик файлу не забываем продублировать обратную косую черту, иначе компилятор ее воспримет как начало 
	символа преобразования */

	fptr = fopen("C:\\users\\DeanWork\\Documents\\BookInfo.txt", "w");

	// ПРоверить, открылся ли файл
	if (fptr == 0)
	{
		printf("Ошибка--Невозможно открыть файл.\n");
		exit(1);
	}
	
	/* Напечатать файл заголовок, а затем пройти циклом по массиву и распечатать информацию о книгах, 
	но не на экране, а в файл */
	fprintf(fptr, "\n\Моя коллекция книг: \n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		fprintf(fptr, "№%d: %s автор %s", (ctr+1), books[ctr].title, books[ctr].author);
		fprintf(fptr, "\nСодержит %d страниц и стоит $%.2f", books[ctr].pages, books[ctr].price);
		fprintf(fptr, "\n\n");
	}
	fclose(fptr); // Обязательно закрыть файл
	getchar();
	return 0;
}