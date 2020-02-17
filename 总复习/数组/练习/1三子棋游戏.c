#define  _crt_secure_no_warnings
#include <stdio.h>

#define max_row 3
#define max_col 3

char chess_board[max_row][max_col];

//�����˵�������1��ʼ��Ϸ������0������Ϸ������������Ч��
int menu()
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

void init()
{
	//����ʹ��'x'��ʾ������ӣ�ʹ��'o'��ʾ�������ӣ�ʹ��' '��ʾδ���ӡ�
	for (int row = 0; row <= max_row; row++)
	{
		for (int col = 0; col <= max_col; col++)
		{
			chess_board[col][row] = ' ';
		}
	}
}

void print()
{
	for (int row = 0; row < max_row; row++)
	{
		printf("| %c | %c | %c |\n", chess_board[row][0], chess_board[row][1], chess_board[row][2]);
		if (row != max_row - 1)
		{
			printf("|---|---|---|\n");
		}
	}
}

void playermove()
{
	while (1)
	{
		int row = 0, col = 0;
		printf("������ӣ�\n");
		printf("�����������ӵ�λ�ã�row��col����");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= max_row || col < 0 || col >= max_col)
		{
			printf("�������λ�÷Ƿ������������룡\n");
			continue;
		}
		if (chess_board[row][col] != ' ')
		{
			printf("�������λ���ѱ�ռ�ã����������룡\n");
			continue;
		}
		chess_board[row][col] = 'x';
		break;
	}
}

void compultermove()
{
	printf("�������ӣ�\n");
	while (1)
	{
		int row = rand() % max_row;
		int col = rand() % max_col;
		if (chess_board[row][col] != ' ')
		{
			continue;
		}
		chess_board[row][col] = 'o';
		break;
	}
}

//�������˷���1�����򷵻�0
int isfull()
{
	for (int row = 0; row <= max_row; row++)
	{
		for (int col = 0; col <= max_col; col++)
		{
			if (chess_board[row][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//��������'x'��ʾ���ʤ
//��������'o'��ʾ����ʤ
//��������'q'��ʾ����
//��������' '��ʾ��Ϸ��δ������������Ϸ
char checkgameover()
{
	int row = 0, col = 0;
	//��������У�
	for (row = 0; row < max_row; row++)
	{
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2])
		{
			return chess_board[row][0];
		}
	}
	//��������У�
	for (col = 0; col < max_col; col++)
	{
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col])
		{
			return chess_board[0][col];
		}
	}
	//������жԽ��ߣ�
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2])
	{
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]) {
		return chess_board[0][2];
	}
	if (isfull())
	{
		return 'q';
	}
	return ' ';
}

void game() 
{
	char winner = ' ';
	//1������һ�����̲���ʼ��Ϊ' '��
	init();
	while (1)
	{
		system("cls");
		//2����ӡ���̣�
		print();
		//3��������ӣ�
		playermove();
		print();
		//4�������Ϸ�Ƿ������
		winner = checkgameover();
		if (winner != ' ')
		{
			break;
		}
		//5���������ӣ�
		compultermove();
		//6�������Ϸ�Ƿ������
		winner = checkgameover();
		if (winner != ' ')
		{
			break;
		}
	}
	system("cls");
	print();
	if (winner == 'x')
	{
		printf("���ʤ����\n");
	}
	else if (winner == 'o')
	{
		printf("����ʤ����\n");
	}
	else if (winner == 'q')
	{
		printf("����!\n");
	}
	else
	{
		printf("��������ˣ�\n");
	}
}

int main1()
{
	while (1){
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("������Ϸ��\n");
		}
		else
		{
			printf("���������������������!\n");
		}
	}
}