#include "DList.h"

//Ϊx������
ListNode* BuyListNode(DLDataType x)
{
	ListNode *listnode = (ListNode *)malloc(sizeof(DLDataType));
	if (listnode == NULL)
	{
		return NULL;
	}
	listnode->data = x;
	listnode->prev = NULL;
	listnode->next = NULL;
	return listnode;
}

//��ʼ��
void DListInit(List *plist)
{
	assert(plist);
	ListNode *head = BuyListNode(0);
	plist->head = head;
	plist->head->prev = plist->head;
	plist->head->next = plist->head;
}

//����
void DListDestory(List *plist)
{
	assert(plist);
	ListNode *cur = plist->head->next;
	while (cur != plist->head)
	{
		ListNode *tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	free(plist->head);
	plist->head = NULL;
}

//β��
void DListPushBack(List *plist, DLDataType x)
{
	assert(plist);
	ListNode *cur = plist->head;
	
}

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
//��ӡ˫���ͷѭ������
void DListPrint(List *plist);