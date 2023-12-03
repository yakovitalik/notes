/* Отображает кодовое значение символа */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(0, "Russian"); /* Русский язык в командной строке */
	
	char ch;	// символ
	
	puts("Введите символ код которого хотите получить: \n");
	scanf(" %c", &ch); 	/* Пользователь вводит символ */
	printf("Код символа %c равен: %d\n", ch, ch);
	
	getchar(); /* Чтобы не программа не закрывалась до нажатия Enter */
	return 0;
}