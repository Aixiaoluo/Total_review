#ifndef _QUEUE_H_
#define _QUEUE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int QueueDataType;

typedef struct QueueNode
{
	struct QueueNode *_next;
	QueueDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode *_front;
	QueueNode *_rear;
}Queue;

//��ʼ��
void QueueInit(Queue *pqueue);
//����
void QueueDestory(Queue *pqueue);
//Ϊ�����ٽ��
QueueNode* BuyQueueNode(QueueDataType x);
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