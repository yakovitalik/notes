/* Эта программа генерирует 10 случайных чисел, а затем сортирует их */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;
	/* если не включить эти выражения, то программа всегда будет генерировать одни и те же 10 чисел */
	srand(timt(&t));
	/* Первый шаг - заполнить массив случайныи числами от 1 до 100 */
	for(ctr=0; ctr < 10; ctr++)
	{
		nums[ctr] = ((rand() % 99) + 1);
	}
	// Распечатать массив в состоянии до сортировки
	puts("\nСписок чисел перед сортировкой: ");
	for(ctr=0; ctr < 10; ctr++)
	{
		printf(" %d\n", nums[ctr]);
	}
	// Сортировка массива
	for(outer=0; outer < 10; outer++)
	{
		didSwap = 0; /* Становится равным 1 (ИСТИНА), если список еще не сортирован */
		for (inner = 0; inner < 10; inner++)
		{
			if (nums[inner] < nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer];
				nums[outer] = temp;
				didSwap = 1; 
			}
		}
		if (didSwap == 0)
		{
			break;
		}	
	}
	/* Распечатать массив по сотоянию после сортировки */
	puts("\nСписок чисел после сортировки: ");
	for(ctr=0; ctr < 10; ctr++)
	{
		printf(" %d\n", nums[ctr]);
	}	
	getchar();
	return 0;
}