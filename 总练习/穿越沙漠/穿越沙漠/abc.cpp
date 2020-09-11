#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_GRAPH 100
#define MAX_QUEUE 30

typedef struct
{
	int vex[MAX_GRAPH]; /* ���� */
	int edge[MAX_GRAPH][MAX_GRAPH]; /* �ڽӾ��� */
	int n; /* ��ǰ�Ķ����� */
	int e; /* ��ǰ�ı��� */
}GRAPH;

int visited[MAX_GRAPH];

void Create(GRAPH *G)
{
	printf("���붥������\n");
	scanf("%d", &G->n);
	printf("���������\n");
	scanf("%d", &G->e);

	getchar();

	int i, j, k, w;
	printf("������˵�(int��)��\n");
	for (i = 0; i < G->n; ++i) /* ������ͷ */
		scanf("%d", &G->vex[i]);

	for (i = 0; i < G->n; ++i) /* ��ʼ���ڽӾ��� */
		for (j = 0; j < G->n; ++j)
			G->edge[i][j] = 0;

	printf("������ߣ�\n");
	for (k = 0; k < G->e; ++k)
	{
		scanf("%d%d%d", &i, &j, &w); /* ����(vi,vj)�ϵ�Ȩw */
		G->edge[i][j] = w;
		G->edge[j][i] = w;
	}
}

void BFS(GRAPH *G, int k)
{
	int queue[MAX_QUEUE]; /* ���� */
	int front = -1, rear = -1, amount = 0;
	int visited[MAX_GRAPH]; /* ����Ѿ����ʹ���Ԫ�� */
	int i, j;

	for (i = 0; i < MAX_GRAPH; ++i)
		visited[i] = 0;

	printf("���ʶ���%d\n", G->vex[k]);
	visited[k] = 1;

	rear = (rear + 1) % MAX_QUEUE; /* ��Ӳ��� */
	queue[rear] = k;
	front = rear;
	++amount;

	while (amount > 0)
	{
		i = queue[front]; /* ���Ӳ��� */
		front = (front + 1) % MAX_QUEUE;
		--amount;

		for (j = 0; j < G->n; ++j)
		{
			if (G->edge[i][j] != 0 && visited[j] == 0)
			{
				printf("���ʶ���%d\n", G->vex[j]);
				visited[j] = 1;

				rear = (rear + 1) % MAX_QUEUE; /* ��� */
				queue[rear] = j;
				++amount;
			}
		}
	}
	printf("��������\n");
}

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < MAX_QUEUE; ++i)
		visited[i] = 0;
	GRAPH G;
	Create(&G);
	/* BFS(&G,0);*/
	BFS(&G, 0);

	return 0;
}