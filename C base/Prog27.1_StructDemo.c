/* Подключив файл bookinfo.h, данная программа получает структуру 
bookInfo, просит пользователя заполнить три структуры, а затем распечатывает их */

// В первую очередь подключим файл с определением структуры
#include "bookInfo.h"
#include <stdio.h>

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
		puts("Сколько страниц в вашей книге? ");
		scanf(" %d", &books[ctr].pages);

		getchar(); // Создает пустую строку для следующего прохода
	}
	
	/* Вывести заголовок, а затем с помощью цикла распечатать информацию */
	printf("\n\nМоя коллекция книг: \n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("№%d: %s автор %s", (ctr+1), books[ctr].title, books[ctr].author);
		printf("\nСодержит %d страниц и стоит $%.2f", books[ctr].pages, books[ctr].price);
		printf("\n\n");
	}
	getchar();
	return 0;
}