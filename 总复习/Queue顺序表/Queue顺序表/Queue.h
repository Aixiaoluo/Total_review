#ifndef _QUEUE_H_
#define _QUEUE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int QueueDataType;

typedef struct Queue
{
	QueueDataType *_array;
	int _front;
	int _rear;
	size_t _size;
	size_t _capacity;
}Queue;

//��ʼ��
void QueueInit(Queue *pqueue, size_t capacity);
//����
void QueueDestory(Queue *pqueue);
//����
void CheckCapacity(Queue *pqueue);
//β��
void QueuePush(Queue *pqueue, QueueDataType x);
//ͷɾ
void QueuePop(Queue *pqueue);
//���ض���Ԫ��
QueueDataType QueueFront(Queue *pqueue);
//���ض�βԪ��
QueueDataType QueueRear(Queue *pqueue);
//�п�
int QueueEmpty(Queue *pqueue);
//���ض��г���
int QueueSize(Queue *pqueue);
//��ӡ
void QueuePrint(Queue *pqueue);

#endif //_QUEUE_H_