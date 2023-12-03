/* Эта программа демонстрирует математические функции из библиотеки файла math.h */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

main()
{
	
	int dice1, dice2;
	int total1, total2;
	time_t t;
	char ans;
	/* Данная функция нужна, чтобы генерируемые числа были разными */
	srand(time(&t));
	/* Получим число от 0 до 5, поэтому +1 задаст диапазон от 1 до 6 */
	dice1 = (rand() % 5) + 1;
	dice2 = (rand() % 5) + 1;
	total1 = dice1 + dice2;
	printf("\nПервый бросок игральных костей: %d и %d, ", dice1, dice2);
	printf("с общей суммой %d.\n\n\n", total1);

	do {
		puts("Как вы думаете, сумма следующего броска будет ");
		puts("(H)больше, (L)меньше или (S)равна?\n");
		puts("Введите H, L или S в соответствии с вашим мнением.");
		scanf(" %c", &ans);
		ans = toupper (ans);
	} while((ans != 'H') && (ans != 'L') && (ans != 'S')); 

	// Второй бросок и получение второй суммы
	dice1 = (rand() % 5) + 1;
	dice2 = (rand() % 5) + 1;
	total2 = dice1 + dice2;

	// Отобразить результаты второго броска
	printf("\nПервый бросок игральных костей: %d и %d, ", dice1, dice2);
	printf("с общей суммой %d.\n\n\n", total2);

	/* Теперь составим догадку пользователя с результатом и сообщим, прав пользователь или нет*/
	if(ans == 'L')
	{
		if (total2 < total1)
		{
			printf("Хорошая работа! Вы оказались правы!\n");
			printf(" %d меньше, чем %d\n", total2, total1);
		}
		else 
		{
			printf("Извините, %d не меньше %d\n\n". total2, total1);
		}
	}
	else if (ans == 'H')
	{
		if (total2 > total1)
		{
			printf("Хорошая работ!Вы оказались правы!\n");
			printf(" %d больше, чем %d\n", total2, total1);
		}
		else
		{
			printf("Извините, %d не больше, чем %d\n\n". total2, total1);
		}
	}
	else if (ans == 'S')
	{
		if (total2 == total1)
		{
			printf("Хорошая работа! Вы оказались правы!\n");
			printf(" %d равно %d\n", total2, total1);
		}
		else 
		{
			printf("Извините, %d не равно %d\n\n". total2, total1);
		}
	}	
	getchar();
	return 0;
}