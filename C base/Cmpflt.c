// программа сравнивает числа с плавающей запятой

#include <math.h>
#include <stdio.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	
	printf("Каково значение числа Pi?\n");
	scanf("%1f", &responce);
	while(fabs(response - ANSWER) > 0.0001)
	{
		printf("Введите значение еще раз!\n");
		scanf("%1f", &responce);
	}
	printf("Достаточно близко!\n");
	
	return 0;
}