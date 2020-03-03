#include "SList.h"

//��ʼ��
void SListInit(SList *plist)
{
	assert(plist);
	plist->head = NULL;
}

//����
void SListDestory(SList *plist)
{
	assert(plist);
	SListNode *cur = plist->head;
	SListNode *next;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	plist->head = NULL;
}

//Ϊx������
SListNode* BuySListNode(SLTDataType x)
{
	SListNode *node = (SListNode *)malloc(sizeof(SListNode));
	assert(node);
	node->data = x;
	node->next = NULL;
	return node;
}

//ͷ��
void SListPushFront(SList *plist, SLTDataType x)
{
	assert(plist);
	SListNode *node = BuySListNode(x);
	assert(node);
	node->next = plist->head;
	plist->head = node;
}

//ͷɾ
void SListPopFront(SList *plist)
{
	assert(plist);
	assert(plist->head);
	SListNode *cur = plist->head;
	plist->head = plist->head->next;
	free(cur);
	cur = NULL;
}

//β��
void SListPushBack(SList *plist, SLTDataType x)
{
	assert(plist);
	if (plist->head == NULL)
	{
		SListPushFront(plist, x);
		return;
	}
	SListNode *cur;
	for (cur = plist->head; cur->next != NULL; cur = cur->next)
	{

	}
	SListNode *node = BuySListNode(x);
	cur->next = node;
}

//βɾ
void SListPopBack(SList *plist)
{
	assert(plist);
	assert(plist->head);
	if (plist->head->next == NULL)
	{
		SListPopFront(plist);
		return;
	}
	SListNode *cur = plist->head;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

//��posλ��֮�����
void SListInsertAfter(SList *plist, SListNode *pos, SLTDataType x)
{
	assert(plist);
	SListNode *node = BuySListNode(x);
	node->next = pos->next;
	pos->next = node;
}

//��posλ��֮ǰ����
void SListInsertBefore(SList *plist, SListNode *pos, SLTDataType x)
{
	assert(plist);
	SListNode *cur = plist->head;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	SListNode *node = BuySListNode(x);
	node->next = cur->next;
	cur->next = node;
}

//ɾ��pos���
void SListErasePos(SListNode *pos)
{
	SListNode *cur = pos->next;
	pos->next = cur->next;
	free(cur);
	cur = NULL;
}

//����Ԫ��x
SListNode* SListFind(SList *plist, SLTDataType x)
{
	assert(plist);
	for (SListNode *cur = plist->head; cur != NULL; cur = cur->next)
	{
		if (cur->data == x)
		{
			return cur;
		}
	}
	return NULL;
}

//ɾ��Ԫ��x
void SListEraseX(SList *plist, SLTDataType x)
{
	assert(plist);
	SListNode *pos = SListFind(plist, x);
	SListErasePos(pos);
}

//�޸�ֵ
void SListModify(SListNode *pos, SLTDataType x)
{
	pos->data = x;
}

//��ӡ
void SListPrint(SList *plist)
{
	assert(plist);
	for (SListNode *cur = plist->head; cur != NULL; cur = cur->next)
	{
		printf("%d --> ", cur->data);
	}
	printf("NULL\n");
}