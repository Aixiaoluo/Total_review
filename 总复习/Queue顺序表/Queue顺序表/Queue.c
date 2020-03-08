#include "Queue.h"

//��ʼ��
void QueueInit(Queue *pqueue, size_t capacity)
{
	assert(pqueue);
	pqueue->_capacity = capacity;
	pqueue->_array = (QueueDataType *)malloc(capacity*sizeof(QueueDataType));
	assert(pqueue->_array);
	pqueue->_front = 0;
	pqueue->_rear = 0;
	pqueue->_size = 0;
}

//����
void QueueDestory(Queue *pqueue)
{
	assert(pqueue);
	if (pqueue->_array)
	{
		free(pqueue->_array);
		pqueue->_array = NULL;
	}
	pqueue->_front = 0;
	pqueue->_rear = 0;
	pqueue->_size = 0;
	pqueue->_capacity = 0;
}

//����
void CheckCapacity(Queue *pqueue)
{
	assert(pqueue);
	if (pqueue->_size == pqueue->_capacity)
	{
		pqueue->_capacity *= CAPACITY;
		pqueue->_array = (QueueDataType *)realloc(pqueue->_size, CAPACITY*sizeof(QueueDataType));
	}
}

//β��
void QueuePush(Queue *pqueue, QueueDataType x)
{
	assert(pqueue);
	CheckCapacity(pqueue);
	pqueue->_array[pqueue->_size] = x;
	pqueue->_size++;
	pqueue->_rear = pqueue->_size;
}

//ͷɾ
void QueuePop(Queue *pqueue)
{
	assert(pqueue);
	pqueue->_size--;
	pqueue->_front += 1;
	for (int i = 0; i <= pqueue->_size; i++)
	{
		pqueue->_array[i] = pqueue->_array[i + 1];
	}
}

//���ض���Ԫ��
QueueDataType QueueFront(Queue *pqueue)
{
	assert(pqueue);
	return pqueue->_array[0];
}

//���ض�βԪ��
QueueDataType QueueRear(Queue *pqueue)
{
	assert(pqueue);
	return pqueue->_array[pqueue->_size - 1];
}

//�п�
int QueueEmpty(Queue *pqueue)
{
	assert(pqueue);
	return (pqueue->_size == 0) ? -1 : 1;
}

//���ض��г���
int QueueSize(Queue *pqueue)
{
	assert(pqueue);
	return	pqueue->_size;
}

//��ӡ
void QueuePrint(Queue *pqueue)
{
	assert(pqueue);
	printf("front ");
	for (int i = 0; i < pqueue->_size; i++)
	{
		printf("<-- %d ", pqueue->_array[i]);
	}
	printf("<-- rear\n");
}