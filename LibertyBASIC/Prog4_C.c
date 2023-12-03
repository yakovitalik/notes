#include <stdio.h>

int main(void)
{
	float salary, taxowed;
	prinf("How much money did you make last year?");
	scanf("%f", &salary);
	taxowed = salary * .95;
	printf("This is how much tax you owe = %f", taxowed);
	
	return 0;
}