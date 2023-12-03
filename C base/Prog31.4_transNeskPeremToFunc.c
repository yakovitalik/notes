/* Эта программа демонтсрирует передачу в функцию нескольких переменных */

#include <stdio.h>
// Объяснение следующего выражения см.в главе 32
changeSome(int i; float *newX, int iAry[5]);

main() {
	int i = 10;
	int ctr; 
	float x = 20.5;
	int iAry[] = {10, 20, 30, 40, 50};
	puts("Переменные main перед выводом функции: ");
	printf("i равна %d\n", i);
	printf("x равна %.1f\n", x);
	for(ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d] равен %d\n", ctr, iAry[ctr]);
	}
	/* Вызовем функцию changeSome, передав ей значение и адрес x (употребив &) */
	changeSome (i, &x, iAry);
	puts("\n\nПеременные main после вызова функции: ");
	printf("i равна %d\n", i);
	printf("x равна %.1f\n", x);
	for(ctr=0; ctr < 5; ctr++)
	{
		printf("iAry[%d] равен %d\n", ctr, iAry[ctr]);
	}
	getchar();	
	return 0;
}

/****************************************************************************/

changeSome (int i, float * newX, int iAry[5])
{
	/* Все переменные изменяются, но только float и массив сохраняют изменения, 
	когда программ возвращается в main */
	in j;
	i = 47;
	* newX = 97.6; // Та же ячейка памяти, что и у x в main
	for (j = 0; j < 5; j++)
	{
		iAry[j] = 100 + 100 * j;
	}
	return; // возврат в main
}