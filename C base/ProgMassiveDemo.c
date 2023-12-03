#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"
/* Это программа, перечисляющя трех детей и их потребности в школьных принадлежностях, 
а так же стоимость их приобретения*/

main ()
{
	int age;

	char childname [14] = "Тимофей";

	printf ("/n%s имеет %d детей", FAMLY, KIDS);

	age = 11;

	printf ("Старший сын, %s, %d лет.\n", childname, age);

	strcpy (childmane, "Николай");

	printf ("Средний сын, %s, %d.\n", childmane, age);

	age = 3;

	strcpy (childmane, "Борис");

	printf ("Младший сын, %s, %d.\n", childmane, age);
	getchar();
	return 0;
}