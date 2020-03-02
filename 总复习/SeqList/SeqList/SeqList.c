#include "SeqList.h"

//��ʼ��˳���
void SeqListInit(SeqList *psl, size_t capacity)
{
	assert(psl);
	psl->capacity = capacity;
	psl->array = (SLDataType *)malloc(capacity*sizeof(SLDataType));
	assert(psl->array);
	psl->size = 0;
}

//����˳���
void SeqListDestory(SeqList *psl)
{
	assert(psl);
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->capacity = 0;
		psl->size = 0;
	}
}

//˳�������
void CheckCapacity(SeqList *psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		psl->capacity *= CAPACITY;
		psl->array = (SLDataType *)realloc(psl->size, psl->capacity*sizeof(SLDataType));
	}
}

//β��
void SeqListPushBack(SeqList *psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

//βɾ
void SeqListPopBack(SeqList *psl)
{
	assert(psl || psl->size);
	psl->size--;
}

//ͷ��
void SeqListPushFront(SeqList *psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	for (int i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}

//ͷɾ
void SeqListPopFront(SeqList *psl)
{
	assert(psl);
	psl->size--;
	for (size_t i = 0; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//����Ԫ��
int SeqListFind(SeqList *psl, SLDataType x)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//posλ�ò���x
void SeqListInsert(SeqList *psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->size);
	CheckCapacity(psl);
	for (int i = psl->size - 1; i >= pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

//ɾ��posλ��
void SeqListErase(SeqList *psl, size_t pos)
{
	assert(psl || pos <= psl->size);
	psl->size--;
	for (int i = pos; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//ɾ��x
void SeqListRemove(SeqList *psl, SLDataType x)
{
	assert(psl);
	size_t pos = SeqListFind(psl, x);
	if (pos)
	{
		SeqListErase(psl, pos);
	}
}

//�޸�posλ��Ϊx
void SeqListModify(SeqList *psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->size);
	psl->array[pos] = x;
}

//��ӡ˳���
void SeqListPrint(SeqList *psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->array[i]);
	}
	putchar('\n');
}

//˳����ð������
void SeqListBubbleSort(SeqList *psl)
{
	assert(psl);
	int flag = 0;
	for (int i = 0; i < psl->size - 1; i++)
	{
		for (int j = 0; j < psl->size - 1; j++)
		{
			if (psl->array[j] > psl->array[j + 1])
			{
				SLDataType tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
				flag = 1;
			}
			if (flag == 0)
			{
				return;
			}
		}
	}
}

//˳���Ķ��ֲ���
int SeqListBinarySearch(SeqList *psl, SLDataType x)
{
	assert(psl);
	int left = 0;
	int right = psl->size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (psl->array[mid] < x)
		{
			left = mid + 1;
		}
		else if (psl->array[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//ɾ��˳��������xԪ��
void SeqListRemoveAll(SeqList *psl, SLDataType x)
{
	assert(psl);
	size_t pos = SeqListFind(psl, x);
	if (pos == 0 || pos)
	{
		SeqListErase(psl, pos);
	}
}