#include <stdio.h>;
#define curentYear = 2022;
/* Эта программа расчитывает сколько лет исполнится в этом году, а также поздравит, если родился в високосный год*/
main ()
{
	int age, bornYear;
	printf ("Введите ваш год рождения:\n");
	scanf (" %d", &bornYear);
	if (bornYear >= curentYear)
	{
		printf ("Поздравляем! Вы еще не родились?\n");
		printf ("Зря вы пытаетесь обмануть эту прекрассную программу!\n");
	}
	else
	{
		age = curentYear - bornYear;
		printf ("В этом году вам исполнится %d лет\n", age);

		if (bornYear % 4 == 0)
		{
		printf ("Поздравляем! Вы родились в високосный год!\n");
		}
	}
	getchar();
	return 0;
}