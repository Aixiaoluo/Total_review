#include	 "Heap.h"

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