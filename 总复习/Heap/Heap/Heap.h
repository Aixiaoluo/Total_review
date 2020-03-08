#ifndef _HEAP_H_
#define _HEAP_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType *_array;
	size_t _size;
	size_t _capacity;
}Heap;


//���µ����㷨
void HeapAdjustdown(Heap *pheap);
//��ʼ��
void HeapInit(Heap *pheap, HeapDataType *arr, size_t capacity);
//����
void HeapDestory(Heap *pheap);
//���ٿռ�
void CheckCapacity(Heap *pheap);
//����
void HeapPush(Heap *pheap, HeapDataType x);
//ɾ��
void HeapPop(Heap *pheap);
//���ضѶ�Ԫ��
HeapDataType HeapTop(Heap *pheap);
//���ضѵĴ�С
void HeapSize(Heap *pheap);
//�п�
void HeapEmpty(Heap *pheap);
//��ӡ��
void HeapPrint(Heap *pheap);

#endif //_HEAP_H_