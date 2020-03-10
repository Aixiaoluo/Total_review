#include "Queue.h"

//��ʼ��
void QueueInit(Queue *pqueue)
{
	assert(pqueue);
	pqueue->_front = NULL;
	pqueue->_rear = NULL;
}

//����
void QueueDestory(Queue *pqueue)
{
	assert(pqueue);
	QueueNode *cur = pqueue->_front;
	while (cur)
	{
		QueueNode *tmp = cur->_next;
		free(cur);
		cur = tmp;
	}
	pqueue->_front = NULL;
	pqueue->_rear = NULL;
}

//Ϊ�����ٽ��
QueueNode* BuyQueueNode(QueueDataType x)
{
	QueueNode *queuenode = (QueueNode *)malloc(sizeof(QueueNode));
	if (queuenode != NULL)
	{
		queuenode->_data = x;
		queuenode->_next = NULL;
		return queuenode;
	}
	return NULL;
}

//β��
void QueuePush(Queue *pqueue, QueueDataType x)
{
	assert(pqueue);
	QueueNode *queuenode = BuyQueueNode(x);
	if (QueueEmpty(pqueue))
	{
		pqueue->_front = queuenode;
		pqueue->_rear = queuenode;
	}
	else
	{
		pqueue->_rear->_next = queuenode;
		pqueue->_rear = queuenode;
	}
}

//ͷɾ
void QueuePop(Queue *pqueue)
{
	assert(pqueue);
	QueueNode *tmp = pqueue->_front;
	pqueue->_front = tmp->_next;
	free(tmp);
	tmp = NULL;
}

//���ض���Ԫ��
QueueDataType QueueFront(Queue *pqueue)
{
	assert(pqueue);
	return pqueue->_front->_data;
}

//���ض�βԪ��
QueueDataType QueueRear(Queue *pqueue)
{
	assert(pqueue);
	return pqueue->_rear->_data;
}

//�п�
int QueueEmpty(Queue *pqueue)
{
	assert(pqueue);
	return pqueue->_front == NULL;
}

//���ض��г���
int QueueSize(Queue *pqueue)
{
	assert(pqueue);
	int count = 0;
	QueueNode *cur = pqueue->_front;
	for (; cur; cur = cur->_next)
	{
		count++;
	}
	return count;
}

//��ӡ
void QueuePrint(Queue *pqueue)
{
	assert(pqueue);
	printf("front <== ");
	QueueNode *cur = pqueue->_front;
	for (; cur; cur = cur->_next)
	{
		printf(" %d <==", cur->_data);
	}
	printf(" real\n");
}