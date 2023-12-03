/* Эта программа демонстрирует возврат значений функциями из трех чисел 
с плавающей точкой (оценок) и вычисления среднего значения этих трех */

#include <stdio.h>
float gradeAve(float test1, float test2, float test3);

main()
{
	float grade1, grade2, grade3;
	float average;
	printf("Какова ваша оценка за первый тест? ");
	scanf(" %f", &grade1);
	printf("Какова ваша оценка за второй тест? ");
	scanf(" %f", &grade2);
	printf("Какова ваша оценка за третий тест? ");
	scanf(" %f", &grade3);
	
	// передать в функцию три оценки и вернуть средний балл
	average = gradeAve(grade1, grade2, grade3);
	printf("Средний балл за три теста составил: %.2f", average);
	getchar();
	return 0;
}

/**********************************************************/

float gradeAve (float test1, float test2, float test3) 
// Принимает значения трех оценок
{
	float localAverage;
	localAverage = (test1+test2+test3)/3;
	return (localAverage); // Возврат среднего балла в main
}