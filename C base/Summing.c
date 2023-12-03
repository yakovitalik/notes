/* Суммирует целые числа, вводимые с клавиатуры в интерактивном режиме */
#include <stdio.h>
int main (void)
{
	long num;
	long sum = 0L;			// инициализация переменной long нулем
	int status;

	printf("Введите целое число для последующего суммирования");
	printf("(или q для завершения работы программы): \n");
	status = scanf("%ld", &num);
	while (status == 1)
	{
		sum = sum + num;
		prinf("Введите следующее целое число (или q для заверщения программы): ");
		status = scanf("%ld", &num);
	}
	
	printf("Сумма выведенных целых чисел равна %1d.\n", sum);
	
	
	return 0;
}