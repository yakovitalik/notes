﻿/* Эта программа объявляет и инициализирует массив символьных указателей, а затем 
запрашивает соответствующие рейтинги */

#include <stdio.h>
main()
{
	int i;
	int ctr = 0;
	char ans;
	// Объявление 9 символьных указателей и инициалтзация их
	char * movies[9] = {"Amour", "Argo", "Beats of the Southern Wild", "Django Unchained", "Les Miserables",
	"Life of Pi", "Lincoln", "Silver Linings Playbook", "Zero Dark Thirty"};
	int movieratings[9]; /* Соответствующий массив 9 целых чисел для рейтинга фильмов */
	char * tempmovie = "Будет использвоано для сортировки оцененных фильмов";
	int outer, inner, didSwap, temprating; // для цикла сортировки
	printf("\n\n*** Номинация Оскар 2012 года *** \n\n");
	printf("Пора оценитьь лучших кандидатов на премию: ");
	
	for(i = 0; i < 9; i++)
	{
		printf("Вы видели %s? (Y/N): ", movies[i]);
		scanf(" %c", &ans);
		if ((toupper(ans)) == 'Y')
		{
			printf("\nКаков ваш рейтинг по шкале ");
			printf("от 1 до 10: ");
			scanf(" %d", &movieratings[i]);
			ctr++; /* Будет использовано только для печати просмотренных вами фильмов */
			continue;
		}
		else 
		{
			moviratings[i] = -1;
		}
	}

	// Теперь отсортируем фильмы по рейтингу
	// (несмотренные фильмы пойдут вниз)
	for (outer = 0; outer < 8; outer++)
	{
		didSwap = 0;
		for (inner = outer; inner < 9; inner++)
		{
			if (movieratings[inner] > movieratings[outer])
			{
				tempmovie = movies[inner];
				temprating = movieratings[inner];
				movies[inner] = movies[outer];
				movieratings[inner] = movieratings[outer];
				movies[outer] = tempmovie;
				movieratings[outer] = temprating;
				didSwap = 1;
			}
		}
		if (didSwap == 0)
		{
			break;
		}
	}

	/* Теперь вывести просмотренные фильмы по порядку */
	printf("\n\n** Ваши рейтинги фильмов кандидатов ");
	printf("на премию Оскар 2012 **\n");
	for (i=0;i < ctr; i++)
	{
		printf(" %s оценен на %d!\n", movies[i], movieratinrs[i]);
	}
	getchar();
	return 0;
}