// простая программа на C

#include <stdio.h>
int main(void)
{
	char name[80];
	printf("This BASIC program mimics a really bad boss.\n\n");
	printf("What is you name?");
	scanf("%s", &name);
	printf("Hello, %s. You're fired! Have a nice day", name);
	
	return 0;
}