#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("################################\n");
	printf("##########1��    play    #######\n");
	printf("##########0��    exit    #######\n");
	printf("################################\n");

}

void game()
{
	int random_num = rand() % 100 - 1;
	int input = 0;
	while (1)
	{
		printf("������Ҫ�µ����֣�");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main6()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	
	system("pause");
	return 0;
}