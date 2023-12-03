/* Программа переводит дюймы в сантиметры */
#include <stdio.h>
main()
{
	double duim, sant;
	printf("Введите значение в дюймах: \n");
	scanf(" %f", &duim);
	sant = duim * 2.54;
	printf(" %f дюймов равно %f сантиметров", duim, sant);
	getchar();
	return 0;
}