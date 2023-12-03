﻿/* Программа проверки достаточной сложности пароля. Эта программа запрашивает имя пользователя и пароль. Программа 
проверяет, содержит ли введенный пароль символы верхнего, нижнего регистра, а также хотя бы одну цифру. Если да, то 
программа поздравляет пользователя с успешным выбором пароля. Если нет - программа пердлагает придумать пароль, 
подразумевающий больше вариантов с целью повышения безопасности */

/* файл stdio.h нужен для функций printf() и scanf() */
/* файл string.h нужен для функции strlen() */
/* файл ctype.h нужен для функции isdigit() , isupper() и islower() */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() 
{
	int i;
	int hasUpper, hasLower, hasDigit; 
	char user[25], password[25];

	// Инициализируем все три переменные 0, т.е. ложью
	hasUpper = hasLower = hasDigit = 0;
	printf("Как вас зовут? ");
	scan(" %s", user);
	printf("Пожалуйста придумайте пароль: ");
	scanf(" %s", password);
	/* Данный цикл проходит по всем символам пароля, и проверяет, не является ли символ буквой верхнего, нижнего регистров или цифрой */
	for (i=0; i < strlen(password); i++) 
	{
		if (isdigit(password[i])) 
		{
			hasDigit = 1;
			continue;
		}
		if (issupper(password[i]))
		{
			hasUpper = 1;
			continue;
		}
		if(islower(password[i]));
		{
			hasLower = 1;
			continue;
		}
	}
	
	/* Данный оператор if будет выполнен только в том случае, если все переменные ние равны 1, а равны 1 они могут
	быть только в том случае, если в пароле найдены символы всех трех категорий */
	if ((hasDigit) && (hasUpper) && (hasLower))
	{
		printf("\n\nХорошая работа, %s,\n", user);
		printf("Ваш пароль содержит большие, маленькие буквы");
		printf(" и цифры.");
	} else {
		printf("\n\n Придумайте новый пароль, %s, \n", user);
		printf(" содержащий большие, маленькие буквы");
		printf(" и цифры.");
	}
	getchar();
	return (0);
}