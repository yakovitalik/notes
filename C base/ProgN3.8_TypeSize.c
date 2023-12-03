/* Выводит размеры типов в текущей системе */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(0, "Russian"); /* Русский язык в командной строке */
	
	/* В стандарте С99 для размеров предусмотрен спецификатор %zd */
	
	printf("Тип int имеет размер %zd байт(ов).\n", sizeof(int));
	printf("Тип char имеет размер %zd байт(ов).\n", sizeof(char));
	printf("Тип long имеет размер %zd байт(ов).\n", sizeof(long));
	printf("Тип long long имеет размер %zd байт(ов).\n", sizeof(long long));
	printf("Тип float имеет размер %zd байт(ов).\n", sizeof(float));
	printf("Тип double имеет размер %zd байт(ов).\n", sizeof(double));
	printf("Тип long double имеет размер %zd байт(ов).\n", sizeof(long double));	

	getchar(); /* Чтобы не программа не закрывалась до нажатия Enter */
	return 0;
}