// программа, копирующая по одному символу с входного потока в выходной
#include <stdio.h>
int main(void)
{
	int c;
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return 0;
}