#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

//�����˵�������1��ʼ��Ϸ������0������Ϸ������������Ч��
int Menu()
{
	printf("##################\n");
	printf("####1.��ʼ��Ϸ####\n");
	printf("####0.������Ϸ####\n");
	printf("##################\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

//��ʼ������orδ��������ʼ����������
void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
{
	//��ʼ��δ�����ģ��á�*����ʾ
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	//��ʼ��û���ף��á�0����ʾ
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			mine_map[i][j] = '0';
		}
	}
	//�������ʮ����
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		mine_count--;
	}
}

//��ӡ��ͼ
void PrintMap(char map[MAX_ROW][MAX_COL])
{
	printf("  |");
	for (int col = 0; col < MAX_COL; col++)
	{
		printf("%d ", col);
	}
	putchar('\n');
	for (int col = 0; col < MAX_COL - 1; col++)
	{
		printf("---");
	}
	putchar('\n');
	for (int row = 0; row < MAX_ROW; row++)
	{
		printf(" %d|", row);
		for (int col = 0; col < MAX_COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		putchar('\n');
	}
}

//û���ף��͸�����ҵ�ǰλ����Χ�м�����
void UpdateShowMap(int row, int col, char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 <= MAX_COL && mine_map[row - 1][col + 1] == '1')
	{
		count++;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1')
	{
		count++;
	}
	if (col + 1 <= MAX_COL && mine_map[row][col + 1] == '1')
	{
		count++;
	}
	if (row + 1 >= MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1')
	{
		count++;
	}
	if (row + 1 >= MAX_ROW && mine_map[row + 1][col] == '1')
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
	{
		count++;
	}
	show_map[row][col] = count + '0';
}

//��Ϸ��ʼ
void Game()
{
	//1��ʹ��������ά�����ʾ��ͼ
	//1.2��show_map��ʾ������δ�����������ַ�����
	//1.3��mine_map��ʾ�ǵ��׺Ͳ��ǵ��׵�״̬�������ַ�����
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	//2���������ʼ��
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1)
	{
		system("cls");
		//3����ӡ��ͼ
		PrintMap(show_map);
		//4����ʾ�������Ҫ������һ��λ�ã�����У���������Ч��
		printf("��������Ҫ���������꣨row�� col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row<0 || row>MAX_ROW || col<0 || col>MAX_COL)
		{
			printf("���������Ч�����������룡\n");
			continue;
		}
		//5�����ж��Ƿ���ף���������ʾ�����Ϸ����
		if (show_map[row][col] != '*')
		{
			printf("��������Ա����������������룡\n");
			continue;
		}
		if (mine_map[row][col] == '1')
		{
			printf("���ź��������ˣ�\n");
			return;
		}
		blank_count++;
		//6��û�������ж��Ƿ���Ϸʤ�������������в��ǵ��׵ĸ��ӣ�
		if (blank_count == MAX_ROW*MAX_COL - MINE_COUNT)
		{
			printf("ɨ�׽�������Ϸ�ɹ���\n");
		}
		//7��û���ף��͸�����ҵ�ǰλ����Χ�м�����
		UpdateShowMap(row, col, show_map, mine_map);
	}
}

int main2()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = Menu();
		switch (choice)
		{
		case 0:
			printf("������Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			Game();
			break;
		default:
			printf("������������������룡\n");
			break;
		}
	}
	system("pause");
	return 0;
}