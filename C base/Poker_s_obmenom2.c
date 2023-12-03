/* ��������� ������������ ����� ���� ����� � �������. ������������ ����� ������ ��� �����, ��� �������, ����� ������ ��������� �� 1 �� 5,
���� ����� ������������ ������ ������, ����� ����� ��������, � ����� ��������. ����� ����� ���������� ������ ����� �������� ���� - �
������������ �������� ��������������, � ����������� �� �������� ��������� � ���� �� ����� ����. ����� ��������� ���������� �� ������
����� ������� ������������, � ��� ������ ����������� ���������� ����. */

//������������ �����
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

/* ���������� ��� �������� ��� �����������, ������� �� � ������������� �� ����� ���� ��� ����� */
#define FALSE 0
#define TRUE 1

// ��������� �������
void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[]);
int analyzeHand(int ranksinHand[], int suitsinHand[]);

main()
{
    setlocale(0, "Russian");
	int bet;
	int bank = 100;
	int i;
	int cardRank[5]; /* ���� �� 13 �������� (���-������) */
	int cardSuit[5]; /* ���� �� 4 �������� (��� ���, �����, ����, ����) */
	int finalRank[5];
	int finalSuit[5];
	int rankisHand[13]; /* ������������ ��� ������ ��������� ������� */
	int suitisHand[4]; /* ������������ ��� ������ ��������� ������� */
	int winnings;
	time_t t;
	char suit, rank, stillPlay;
	/* ������� ���������� ��� ����� do...while, ��� ��� ����������� ����� ���������� ������ �������, ����� ��� ��� ���������
	� ������� main ����� �������� ��������� ���, � ����������� �� ����, ������� ��� ������������ ����� ������� */

	printGreeting();
	/* ���� ����������� ������ ���, ����� ������������ ����������� ������� ����� ������ ���� */

	do {
		bet = getBet();
		srand(time(&t));
		getFirstHand (cardRank, cardSuit);
		printf("���� ���� ����: \n");
		for (i = 0; i < 5; i++)
		{
			suit = getSuit(cardSuit[i]);
			rank = getRank(cardRank[i]);
			printf("����� �%d: %c%c\n", i+1, rank, suit);
		}
	 	/* ��� ��� ������� ������������, ����� �������� ������ ����, �������� ������������. ������ ��� ������ ���� ��������,
		���� ������������ ��������� ��������� ����� */
		for (i=0; i < 4; i++)
		{
			suitisHand[i] = 0;
		}

		for (i=0; i < 13; i++)
		{
			rankisHand[i]=0;
		}

		getFinalHand(cardRank, cardSuit, finalRank, finalSuit, rankisHand, suitisHand);
		printf ("���� ��������� ������ ����: \n");

		for (i=0; i < 5; i++)
		{
			suit = getSuit(finalSuit[i]);
			rank = getRank(finalRank[i]);
			printf ("����� �%d: %c%c\n", i+1, rank, suit);
		}

		winnings = analyzeHand(rankisHand, suitisHand);
		printf ("�� �������� %d\n", bet*winnings);
		bank = bank - bet + (bet*winnings);
		printf("\n� ����� ����� ������ %d.\n", bank);
		printf ("\n������ ������� ��� ���? ");
		scanf(" %c", &stillPlay);
	} while (toupper(stillPlay) == 'Y');
	return;
}

/***********************************************************************************************/
/* ����������� ������� ��������, � ����� ���������� ������������� � �������� ��������� ���������� ���������� */
void printGreeting()
{
	printf("***************************************\n");
	printf("\n\n\t����� ���������� � ������ ��� ��������!\n\n");
	printf("\t��� ����� ������ � �������\n\n");
	printf("***************************************\n");
	printf("������� ������:\n");
	printf("��� ��������� ������ 100 ��������, �� ������ ������� ");
	printf(" ������ � ������� �� 1 �� 5 ��������.\n");
	printf("��� ������ 5 ����, �� ������ ������� ����� ");
	printf("����� ��������, � ����� - ");
	printf("��������.\n");
	printf("��� ����� ������� ��������� �� ��������� ����������.\n");
	printf("\n����� ��������� ������� ��������� (� ������� �� ");
	printf("������ � 1 ������):");
	printf("\n���� \t\t\t\t1 ������");
	printf("\n��� ���� \t\t\t2 �������");
	printf("\n��� ����� ������ ���� \t\t\t3 �������");
	printf("\n����� \t\t\t4 �������");
	printf("\n���� \t\t\t\t5 ��������");
	printf("\n������� \t\t\t8 ��������");
	printf("\n������ ����� ������ ���� \t\t\t10 ��������");
	printf("\n����-����� \t\t\t 20 ��������");
	printf("\n\n �������������!!\n\n");
	printf("\n");
	printf("\n");
}

// ������� ��� ������ ������ ���� ����
void getFirstHand(int cardRank[], int cardSuit[])
{
	int i, j;
	int cardDup;
	for (i=0; i < 5; i++)
	{
		cardDup = 0;
		do {
			/* ���� �� 13 ��������� ����� (2-10, �, �, �, �) */
			cardRank[i] = (rand() % 13);
			/* ���� �� 4 ������ ����� (����, �����, �����, �����) */
			cardSuit[i] = (rand() % 4);
			/* ����, ������������� ������������ ������ ����� */
			for (j=0; j < i; j++)
			{
				if ((cardRank[i] == cardRank[j]) && (cardSuit[i] == cardSuit[j]))
				{
					cardDup = 1;
				}
			}

		} while (cardDup == 1);
	}
}
/* �������, ���������� ������������� ����� ����� �� �����, �������������� ��� ����� */
char getSuit(int suit)
{
	switch (suit)
	{
		case 0:
			return ('�');
		case 1:
			return ('�');
		case 2:
			return ('�');
		case 3:
			return ('�');
	}
}
/* �������, ���������� ������������� ������� ����� �� �����, �������������� ���� ������� */
char getRank(int rank)
{
	switch (rank)
	{
		case 0:
			return ('�');
		case 1:
			return ('2');
		case 2:
			return ('3');
		case 3:
			return ('4');
		case 4:
			return ('5');
		case 5:
			return ('6');
		case 6:
			return ('7');
		case 7:
			return ('8');
		case 8:
			return ('9');
		case 9:
			return ('10');
		case 10:
			return ('�');
		case 11:
			return ('�');
		case 12:
			return ('�');
	}
}
/* ������ ��� ��������� ������ ������������ (�� 1 �� 5) */
int getBet ()
{
	int bet;
	do { /* ����� �����������, ���� ������������ �� ������ 0-5 */
		printf ("������� �� ������ ���������? (������� ����� �� ");
		printf ("1 �� 5, ��� 0 ��� ������ �� ����): ");
		scanf (" %d", &bet);
		if (bet >= 1 & bet <= 5)
		{
			return(bet);
		}
		else if (bet == 0)
		{
			exit (1);
		}
		else
		{
			printf("\n\n���������� ������� ������ �� 1 �� 5 ��� ");
			printf("0 ��� ������ �� ����.\n");
		}
	} while ((bet < 0) || (bet > 5));
}
/* ��������� ������� �������� ������ �������� ������ ������ ���� */
int analyzeHand(int rankisHand[], int suitisHand[])
{
	int num_consec = 0;
	int i, rank, suit;
	int straight = FALSE;
	int flush = FALSE;
	int four = FALSE;
	int three = FALSE;
	int pairs = 0;
	for (suit=0; suit < 4; suit++)
		if(suitisHand[suit] == 5)
			flush = TRUE;
		rank = 0;
		while(rankisHand[rank] == 0)
			rank++;
		for (; rank < 13 && rankisHand[rank]; rank++)
			num_consec++;
		if(num_consec == 5) {
		straight = TRUE;
		}
		for (rank = 0; rank < 13; rank++) {
			if (rankisHand[rank] == 4)
				four = TRUE;
			if (rankisHand[rank] == 3)
				three = TRUE;
			if (rankisHand[rank] == 2)
				pairs++;
		}
		if (straight && flush) {
			printf ("����-�����\n\n");
			return (20);
		}
		else if (four) {
			printf("������ ������ ����\n\n");
			return (10);
		}
		else if (three && pairs == 1) {
			printf("��������\n\n");
			return (8);
		}
		else if (flush) {
			printf ("�����\n\n");
			return(4);
		}
		else if (three) {
			printf ("��� ������ ����\n\n");
			return(3);
		}
		else if (pairs == 2) {
			printf ("��� ����\n\n");
			return(2);
		}
		else if (pairs == 1) {
			printf ("����\n\n");
			return(1);
		}
		else {
			printf ("������� �����\n\n");
			return(0);
		}
}
/* ������� ������������� ��� ���� ���� ������ ������, � ���������� ������������, ����� �� �� �������� �����.
���� ���, �� ����� ������������ ����������. */
void getFinalHand (int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int rankisHand[], int suitisHand[])
{
	int i, j, cardDup;
	char suit, rank, ans;
	for (i=0; i < 5; i++)
	{
		suit = getSuit(cardSuit[i]);
		rank = getRank(cardRank[i]);
		printf("������ ��������� ����� �%d: %c%c?", i+1, rank, suit);
		printf("\n���������� �������� (Y/N): ");
		scanf(" %c", &ans);
		if(toupper(ans) == 'Y')
		{
			finalRank[i] = cardRank[i];
			finalSuit[i] = cardSuit[i];
			rankisHand[finalRank[i]]++;
			suitisHand[finalSuit[i]]++;
			continue;
		}
		else if (toupper(ans) == 'N')
		{
			cardDup = 0;
			finalRank[i] = (rand() % 13);
			finalSuit[i] = (rand() %4);
			/* �������� ����� ����� � 5 ������� ������ ������ �� ��������� �������� */
			for (j=0; j < 5; j++)
			{
				if ((finalRank[i] == cardRank[j]) && (finalSuit[i] == finalSuit[j]))
				{
					cardDup = 1;
				}
			}
		} while (cardDup == 1);
		rankisHand[finalRank[i]]++;
		suitisHand[finalSuit[i]]++;
		}
	}








