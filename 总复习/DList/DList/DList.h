#ifndef _DLIST_H_
#define _DLIST_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int DLDataType;

typedef struct ListNode
{
	DLDataType data;
	struct ListNode *_next;
	struct ListNode *_prev;
}ListNode;

typedef struct List
{
	ListNode *_head;
}List;

//Ϊx������
ListNode* BuyListNode(DLDataType x);
//��ʼ��
void DListInit(List *plist);
//����
void DListDestory(List *plist);
//β��
void DListPushBack(List *plist, DLDataType x);
//βɾ
void DListPopBack(List *plist);
//ͷ��
void DListPushFront(List *plist, DLDataType x);
//ͷɾ
void DListPopFront(List *plist);
//����Ԫ��
ListNode* DListFind(List *plist, DLDataType x);
//��posλ��֮ǰ����
void DListInsertBefore(List *plist, ListNode *pos, DLDataType x);
//��pos֮�����
void DListInsertAfter(List *plist, ListNode *pos, DLDataType x);
//ɾ��posλ�ý��
void DListErasePos(List *plist, ListNode *pos);
//ɾ��Ԫ��x
void DListEraseX(List *plist, DLDataType x);
//�޸�posλ��Ԫ��Ϊx
void DListModify(List *plist, ListNode *pos, DLDataType x);
//��ӡ˫���ͷѭ������
void DListPrint(List *plist);
#endif //_DLIST_H_