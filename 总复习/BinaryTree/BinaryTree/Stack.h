#ifndef _STACK_H_
#define _STACK_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int StackDataType;

typedef struct Stack
{
	StackDataType *_array;
	size_t _size;
	size_t _capacity;
}Stack;

//��ʼ��
void StackInit(Stack *pstack, size_t capacity);
//����
void StackDestory(Stack *pstack);
//����
void CheckCapacity(Stack *pstack);
//ѹջ
void StackPush(Stack *pstack, StackDataType x);
//����
void StackPop(Stack *pstack);
//����ջ��Ԫ��
StackDataType StackTop(Stack *pstack);
//����ջ�Ĵ�С
int StackSize(Stack *pstack);
//�п�
int StackEmpty(Stack *pstack);
//��ӡ
void StackPrint(Stack *pstack);
#endif //_STACK_H_