#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "Queue.h"
#include "Stack.h"

typedef char BinaryTreeDataType;

typedef struct BinaryTreeNode
{
	BinaryTreeDataType _data;
	struct BinaryTreeNode *_left;
	struct BinaryTreeNode *_right;
}BinaryTreeNode;

//ͨ��ǰ���������"ABD##E#H##CF##G##"����������
BinaryTreeNode* BinaryTreeCreate(BinaryTreeDataType *arr);

//�ݹ����
//ǰ�����
void BinaryTreePreOrder(BinaryTreeNode *root);
//�������
void BinaryTreeInOrder(BinaryTreeNode *root);
//�������
void BinaryTreePostOrder(BinaryTreeNode *root);
//�������
void BinaryTreeLevelOrder(BinaryTreeNode *root);

//�ǵݹ����
//ǰ�����
void BinaryTreePreOrderNonR(BinaryTreeNode *root);
//�������
void BinaryTreeInOrderNonR(BinaryTreeNode *root);
//�������
void BinaryTreePostOrderNonR(BinaryTreeNode *root);
//���ض������Ľ�����
int BinaryTreeSize(BinaryTreeNode *root);

//�ݹ�ʵ��
//����Ҷ�ӽ�����
int BinaryTreeLeafSize(BinaryTreeNode *root);
//���ص�K�������
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//�ǵݹ�ʵ��
//����Ҷ�ӽ�����
int BinaryTreeLeafSize(BinaryTreeNode *root);
//���ص�K�������
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//���ҽڵ�x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x);
//�ж��Ƿ�Ϊ��ȫ������
void BinaryTreeComplete(BinaryTreeNode *root);
//����
void BinaryTreeDestory(BinaryTreeNode *root);
//��ӡ�������ڵ�
void BinaryTreePrint(BinaryTreeNode *root);

#endif //_BINARYTREE_H_