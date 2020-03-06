#include "DList.h"

//Ϊx������
ListNode* BuyListNode(DLDataType x)
{
	ListNode *listnode = (ListNode *)malloc(sizeof(ListNode));
	if (listnode == NULL)
	{
		return NULL;
	}
	listnode->data = x;
	listnode->_prev = NULL;
	listnode->_next = NULL;
	return listnode;
}

//��ʼ��
void DListInit(List *plist)
{
	assert(plist);
	ListNode *_head = BuyListNode(0);
	plist->_head = _head;
	plist->_head->_prev = plist->_head;
	plist->_head->_next = plist->_head;
}

//����
void DListDestory(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_next;
	while (cur != plist->_head)
	{
		ListNode *tmp = cur->_next;
		free(cur);
		cur = tmp;
	}
	free(plist->_head);
	plist->_head = NULL;
}

//β��
void DListPushBack(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = plist->_head->_prev;
	cur->_next = node;
	node->_prev = cur;
	plist->_head->_prev = node;
	node->_next = plist->_head;
}

//βɾ
void DListPopBack(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//ͷ��
void DListPushFront(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = plist->_head->_next;
	cur->_prev = node;
	node->_next = cur;
	plist->_head->_next = node;
	node->_prev = plist->_head;
}

//ͷɾ
void DListPopFront(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_next;
	cur->_prev->_next = cur->_next;
	cur->_next->_prev = cur->_prev;
	free(cur);
	cur = NULL;
}

//����Ԫ��
ListNode* DListFind(List *plist, DLDataType x)
{
	assert(plist->_head);
	for (ListNode *cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)
	{
		if (cur->data == x)
		{
			return cur;
		}
	}
	return NULL;
}

//��posλ��֮ǰ����
void DListInsertBefore(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = pos->_next;
	cur->_prev = node;
	node->_next = cur;
	plist->_head->_next = node;
	node->_prev = plist->_head;
}

//��pos֮�����
void DListInsertAfter(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = pos->_prev;
	cur->_next = node;
	node->_prev = cur;
	plist->_head->_prev = node;
	node->_next = plist->_head;
}

//ɾ��posλ�ý��
void DListErasePos(List *plist, ListNode *pos)
{
	assert(plist->_head);
	ListNode *cur = pos->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//ɾ��Ԫ��x
void DListEraseX(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *pos = DListFind(plist, x);
	ListNode *cur = pos->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//�޸�posλ��Ԫ��Ϊx
void DListModify(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	DListInsertBefore(plist, pos, x);
	DListErasePos(plist, pos->_next);
}

//��ӡ˫���ͷѭ������
void DListPrint(List *plist)
{
	assert(plist->_head);
	printf(" plist->_head ");
	for (ListNode *cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)
	{
		printf("<==> %d ", cur->data);
	}
	printf("<==> plist->_head \n");
}