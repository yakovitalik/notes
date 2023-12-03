/* Эта программа осуществляет поиск в отсортированном списке идентификационных номеров 
клиентов и выводит соответствующий кредитный баланс */

#include <stdio.h>


main() 
{
	int ctr; // Счетчик цикла
	int idSearch;// Искомый клиент (ключ)
	int found = 0; // Будет равен 1 (ИСТИНА) если клиент найден

	// Определение 10 элементов двух парралельных массивов
	int custID[10] = {313, 453, 502, 101, 892, 475, 792, 343, 633};
	int custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
	int tempID, inner, outer, didSwap, i; /* Для сортировки */ 
	float tempBal;

	/* Сначала отсортировать массив по номерам */
	for (outer=0; outer < 9; outer++)
	{
		didSwap = 0; /* Становится равным 1 (ИСТИНА), если список еще не сортирован */
		for (inner = outer; inner < 10; inner++)
		{
			if (custID[inner] < custID[outer])
			{
				tempID = custID[inner];
				tempBal = custBal[inner];
				custID[inner] = custID[outer];
				custID[outer] = tempBal;
				didSwap = 1;
			}
		}	
		if (didSwap == 0) 	
		{
			break;
		}
	}

	/* Взаимодействие с пользователем, ищущим баланс */
	printf("\n\n*** Проверка баланса клиента ***\n");
	printf("Введите искомый номер клиента: ");
	scanf(" %d", &idSearch); 

	/* Поиск и установление наличия номера клиента в массиве */
	for (ctrl = 0; ctr < 10; ctr++)
	{
		if (idSearch == custID[ctr]) //Они равны?
		{
			found = 1; // Флаг равенства установить 1
			break; // Продолжяать цикл не нужно
		}
i		f (idSearch > custID[ctr]) //Нет смысла продолжать поиск
		{
			break; 
		}
	}
	
	/* По завершении цикла номер был либо найден (found=1), либо нет */
	if (found)
	{
		if (custBal > 100.00) 
		{
			printf("\n**Баланс клиента: %.2f.\n", custBal[ctr]);
			printf(" Кредит недоступен! \n");
		}
		else 
		{
			printf("У клиента хороший кредитный баланс!\n");
		}
	}
	else
	{
		printf("**Вы ввели неверный ID клиента. ");
		printf("\n Введенный ID %3d в списке не найден", idSearch);
	}
	getchar();
	return 0;
}