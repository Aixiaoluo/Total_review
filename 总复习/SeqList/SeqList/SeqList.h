#ifndef _SEQLIST_H_
#define _SEQLIST_H_


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int SLDataType;
//˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType *array;//ָ��̬���ٵ�����
	size_t size;//��Ч���ݳ���
	size_t capacity;//��ǰ������С
}SeqList;

//��ʼ��˳���
void SeqListInit(SeqList *psl, size_t capacity);
//����˳���
void SeqListDestory(SeqList *psl);
//˳�������
void CheckCapacity(SeqList *psl);
//β��
void SeqListPushBack(SeqList *psl, SLDataType x);
//βɾ
void SeqListPopBack(SeqList *psl);
//ͷ��
void SeqListPushFront(SeqList *psl, SLDataType x);
//ͷɾ
void SeqListPopFront(SeqList *psl);
//����Ԫ��
int SeqListFind(SeqList *psl, SLDataType x);
//posλ�ò���x
void SeqListInsert(SeqList *psl, size_t pos, SLDataType x);
//ɾ��posλ��
void SeqListErase(SeqList *psl, size_t pos);
//ɾ��x
void SeqListRemove(SeqList *psl, SLDataType x);
//�޸�posλ��Ϊx
void SeqListModify(SeqList *psl, size_t pos, SLDataType x);
//��ӡ˳���
void SeqListPrint(SeqList *psl);
//˳����ð������
void SeqListBubbleSort(SeqList *psl);
//˳���Ķ��ֲ���
int SeqListBinarySearch(SeqList *psl, SLDataType x);
//ɾ��˳��������xԪ��
void SeqListRemoveAll(SeqList *psl, SLDataType x);

#endif//_SEQLIST_H_