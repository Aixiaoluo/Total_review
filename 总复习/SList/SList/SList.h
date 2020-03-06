#ifndef _SLIST_H_
#define _SLIST_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//��ͷ���ĵ����ѭ������
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode *next;
}SListNode;

typedef struct SList
{
	SListNode *head;
}SList;

//��ʼ��
void SListInit(SList *plist);
//����
void SListDestory(SList *plist);
//Ϊx������
SListNode* BuySListNode(SLTDataType x);
//ͷ��
void SListPushFront(SList *plist, SLTDataType x);
//ͷɾ
void SListPopFront(SList *plist);
//β��
void SListPushBack(SList *plist, SLTDataType x);
//βɾ
void SListPopBack(SList *plist);
//��posλ��֮�����
void SListInsertAfter(SList *plist, SListNode *pos, SLTDataType x);
//��posλ��֮ǰ����
void SListInsertBefore(SList *plist, SListNode *pos, SLTDataType x);
//ɾ��pos���
void SListErasePos(SListNode *pos);
//����Ԫ��x
SListNode* SListFind(SList *plist, SLTDataType x);
//ɾ��Ԫ��x
void SListEraseX(SList *plist, SLTDataType x);
//�޸�ֵ
void SListModify(SListNode *pos, SLTDataType x);
//��ӡ
void SListPrint(SList *plist);

#endif //_SLITS_H_