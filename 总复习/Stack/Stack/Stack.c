#include "Stack.h"

//��ʼ��
void StackInit(Stack *pstack, size_t capacity)
{
	assert(pstack);
	pstack->_capacity = capacity;
	pstack->_array = (StackDataType *)malloc(capacity*sizeof(StackDataType));
	assert(pstack->_array);
	pstack->_size = 0;
}

//����
void StackDestory(Stack *pstack)
{
	assert(pstack);
	if (pstack->_array)
	{
		free(pstack->_array);
		pstack->_array = NULL;
		pstack->_size = 0;
		pstack->_capacity = 0;
	}
}

//����
void CheckCapacity(Stack *pstack)
{
	assert(pstack);
	if (pstack->_size == pstack->_capacity)
	{
		pstack->_capacity *= CAPACITY;
		pstack->_array = (StackDataType *)realloc(pstack->_size, pstack->_capacity*sizeof(StackDataType));
	}
}

//ѹջ
void StackPush(Stack *pstack, StackDataType x)
{
	assert(pstack);
	CheckCapacity(pstack);
	pstack->_array[pstack->_size] = x;
	pstack->_size++;
}

//����
void StackPop(Stack *pstack)
{
	assert(pstack || pstack->_size);
	pstack->_size--;
}

//����ջ��Ԫ��
StackDataType StackTop(Stack *pstack)
{
	assert(pstack);
	if (pstack->_array)
	{
		return pstack->_array[pstack->_size - 1];
	}
	return -1;
}

//����ջ�Ĵ�С
int StackSize(Stack *pstack)
{
	assert(pstack);
	assert(pstack);
	if (pstack->_array)
	{
		return pstack->_size;
	}
	return -1;
}

//�п�
int StackEmpty(Stack *pstack)
{
	assert(pstack);
	if (StackSize(pstack) == -1)
	{
		return 1;
	}
	return -1;
}

//��ӡ
void StackPrint(Stack *pstack)
{
	assert(pstack);
	for (int i = 0; i < pstack->_size; i++)
	{
		printf("%d--", pstack->_array[i]);
	}
	printf("Top\n");
}