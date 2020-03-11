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
	while (!StackEmpty(&stack) || cur)
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
	assert(root);
	BinaryTreeNode *cur = root;
	Stack stack;
	char tag[100];
	StackInit(&stack, 100);
	do
	{
		for (; cur; cur = cur->_left)
		{
			StackPush(&stack, cur);
			tag[StackSize(&stack) - 1] = 0;
		}
		while (!StackEmpty(&stack) && tag[StackSize(&stack) - 1])
		{
			cur = StackTop(&stack);
			putchar(cur->_data);
			StackPop(&stack);
		}
		if (!StackEmpty(&stack))
		{
			cur = StackTop(&stack);
			tag[StackSize(&stack) - 1] = 1;
			cur = cur->_right;
		}
	} while (!StackEmpty(&stack));
	StackDestory(&stack);
}

//���ض������Ľ�����
int BinaryTreeSize(BinaryTreeNode *root)
{
	int count = 0;
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (cur)
	{
		count++;
		//putchar(cur->_data);
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
	return count;
}

//�ݹ�ʵ��
//����Ҷ�ӽ�����
int BinaryTreeLeafSize(BinaryTreeNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else if ((root->_left == NULL) && (root->_right == NULL))
	{
		return 1;
	}
	else
	{
		return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
	}
}

//���ص�K�������
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k)
{
	if (root && k <= 0)
	{
		return 0;
	}
	else if (root && k == 1)
	{
		return 1;
	}
	else
	{
		return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
	}
}

//�ǵݹ�ʵ��
//����Ҷ�ӽ�����
int BinaryTreeLeafSize(BinaryTreeNode *root);
//���ص�K�������
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//���ҽڵ�x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x)
{
	BinaryTreeNode *cur;
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, root);
	while (!QueueEmpty(&queue))
	{
		cur = QueueFront(&queue);
		//putchar(cur->_data);
		if (cur->_data == x)
		{
			return cur;
		}
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
