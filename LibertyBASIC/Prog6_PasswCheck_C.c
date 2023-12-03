/* Простая программа проверки пароля на С */

#include <stdio.h>

int main(void)
{
	char CorrPassword[] = "open';
	char InputPassword[4];
	int i;
	printf("What is the password?");
	scanf("%s", InputPassword);
	while(CorrPassword[] != InputPassword[])
		printf("Wrong password, moron. Try again.");
	printf("You typed the correct password!");
	
	return 0;
}