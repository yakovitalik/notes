/* Программа соотносит детей с их любимыми супергороями */
#include <stdio.h>
#include <string.h>

main() 
{
	char kid1[12];
	// kid1 может содержать имя из 11 символов
	// kid2 будетсодержать 7 символов (Maddie + 0 символ)
	char kid2[] = "Maddie";
	// kid3 так же содержит 7 символов, но это указано дополнительно
	char kid3[7] = "Andrew";
	// hero1 будет содержать 7 символов (учитывая нуль-символ)
	char hero1 = "Batman";
	// hero2 на всякий случай будет иметь дополнительное пространство
	char hero2[34] = "Spiderman";
	char hero3[25];
	kid1[0] = 'K'; /* kid1 определяется посимвольно, неэффективно но работает */
	kid1[1] = 'a';
	kid1[2] = 't';
	kid1[3] = 'i';
	kid1[4] = 'e';
	kid1[5] = '\0'; /* Обязательный нуль-символ - окончание строки */
	strcpy(hero3, "The Incredible Hulk"); 
	printf("%s\' favorite hero is %s.\n", kid1, hero1);
	printf("%s\' favorite hero is %s.\n", kid2, hero2);
	printf("%s\' favorite hero is %s.\n", kid3, hero3);
	getchar();
	return 0;
}