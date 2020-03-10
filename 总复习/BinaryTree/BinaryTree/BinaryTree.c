#include "BinaryTree.h"
#include "Queue.h"
#include "Stack.h"

//ͨ��ǰ���������"ABD##E#H##CF##G##"����������
BinaryTreeNode* BinaryTreeCreate(BinaryTreeDataType *arr)
{
	static int i = 0;
	if (arr[i] == '#')
	{
		i++;
		return NULL;
	}
	BinaryTreeNode *cur = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
	cur->_data = arr[i];
	i++;
	cur->_left = BinaryTreeCreate(arr);
	cur->_right = BinaryTreeCreate(arr);
	return cur;
}

//�ݹ����
//ǰ�����
void BinaryTreePreOrder(BinaryTreeNode *root)
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePreOrder(root->_left);
		BinaryTreePreOrder(root->_right);
	}
}

//�������
void BinaryTreeInOrder(BinaryTreeNode *root)
{
	if (root)
	{
		BinaryTreeInOrder(root->_left);
		putchar(root->_data);
		BinaryTreeInOrder(root->_right);
	}
}

//�������
void BinaryTreePostOrder(BinaryTreeNode *root)
{
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		putchar(root->_data);
	}
}

//�������
void BinaryTreeLevelOrder(BinaryTreeNode *root)
{
	BinaryTreeNode *cur;
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, root);
	while (!QueueEmpty(&queue))
	{
		cur = QueueFront(&queue);
		putchar(cur->_data);
		if (cur->_left)
		{
			QueuePush(&queue, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&queue, cur->_right);
		}
		QueuePop(&queue);
	}
	QueueDestory(&queue);
}

//�ǵݹ����
//ǰ�����
void BinaryTreePreOrderNonR(BinaryTreeNode *root)
{
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (cur)
	{
		putchar(cur->_data);
		if (cur->_right)
		{
			StackPush(&stack, cur->_right);
		}
		if (cur->_left)
		{
			cur = cur->_left;
		}
		else
		{
			cur = StackTop(&stack);
			StackPop(&stack);
		}
	}
	StackDestory(&stack);
}

//�������
void BinaryTreeInOrderNonR(BinaryTreeNode *root)
{
	assert(root);
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (cur || !StackEmpty(&stack))
	{
		for (; cur; cur->_left)
		{
			StackPush(&stack, cur);
		}
		cur = StackTop(&stack);
		putchar(cur->_data);
		StackPop(&stack);
		cur = cur->_right;
	}
	StackDestory(&stack);
}

//�������
void BinaryTreePostOrderNonR(BinaryTreeNode *root)
{

}

//���ض������Ľ�����
int BinaryTreeSize(BinaryTreeNode *root)
{

}

//����Ҷ�ӽ�����
int BinaryTreeLeafSize(BinaryTreeNode *root);
//���ص�K�������
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);
//���ҽڵ�x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x);
//�ж��Ƿ�Ϊ��ȫ������
void BinaryTreeComplete(BinaryTreeNode *root);

//����
void BinaryTreeDestory(BinaryTreeNode *root)
{
	assert(root);
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		free(root);
		root = NULL;
	}
}

//��ӡ�������ڵ�
void BinaryTreePrint(BinaryTreeNode *root);
