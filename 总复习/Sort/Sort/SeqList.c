#include "SeqList.h"

//��ʼ��˳���
void SeqListInit(SeqList *psl, size_t _capacity)
{
	assert(psl);
	psl->_capacity = _capacity;
	psl->_array = (SLDataType *)malloc(_capacity*sizeof(SLDataType));
	assert(psl->_array);
	psl->_size = 0;
}

//����˳���
void SeqListDestory(SeqList *psl)
{
	assert(psl);
	if (psl->_array)
	{
		free(psl->_array);
		psl->_array = NULL;
		psl->_capacity = 0;
		psl->_size = 0;
	}
}

//˳�������
void Check_capacity(SeqList *psl)
{
	assert(psl);
	if (psl->_size == psl->_capacity)
	{
		psl->_capacity *= CAPACITY;
		psl->_array = (SLDataType *)realloc(psl->_size, psl->_capacity*sizeof(SLDataType));
	}
}

//β��
void SeqListPushBack(SeqList *psl, SLDataType x)
{
	assert(psl);
	Check_capacity(psl);
	psl->_array[psl->_size] = x;
	psl->_size++;
}

//βɾ
void SeqListPopBack(SeqList *psl)
{
	assert(psl || psl->_size);
	psl->_size--;
}

//ͷ��
void SeqListPushFront(SeqList *psl, SLDataType x)
{
	assert(psl);
	Check_capacity(psl);
	for (int i = psl->_size - 1; i >= 0; i--)
	{
		psl->_array[i + 1] = psl->_array[i];
	}
	psl->_array[0] = x;
	psl->_size++;
}

//ͷɾ
void SeqListPopFront(SeqList *psl)
{
	assert(psl);
	psl->_size--;
	for (size_t i = 0; i < psl->_size; i++)
	{
		psl->_array[i] = psl->_array[i + 1];
	}
}

//����Ԫ��
int SeqListFind(SeqList *psl, SLDataType x)
{
	assert(psl);
	for (int i = 0; i < psl->_size; i++)
	{
		if (psl->_array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//posλ�ò���x
void SeqListInsert(SeqList *psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->_size);
	Check_capacity(psl);
	for (int i = psl->_size - 1; i >= pos; i--)
	{
		psl->_array[i + 1] = psl->_array[i];
	}
	psl->_array[pos] = x;
	psl->_size++;
}

//ɾ��posλ��
void SeqListErase(SeqList *psl, size_t pos)
{
	assert(psl || pos <= psl->_size);
	psl->_size--;
	for (int i = pos; i < psl->_size; i++)
	{
		psl->_array[i] = psl->_array[i + 1];
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
	assert(psl || pos <= psl->_size);
	psl->_array[pos] = x;
}

//��ӡ˳���
void SeqListPrint(SeqList *psl)
{
	for (int i = 0; i < psl->_size; i++)
	{
		printf("%d ", psl->_array[i]);
	}
	putchar('\n');
}

//˳����ð������
void SeqListBubbleSort(SeqList *psl)
{
	assert(psl);
	int flag = 0;
	for (int i = 0; i < psl->_size - 1; i++)
	{
		for (int j = 0; j < psl->_size - 1; j++)
		{
			if (psl->_array[j] > psl->_array[j + 1])
			{
				SLDataType tmp = psl->_array[j];
				psl->_array[j] = psl->_array[j + 1];
				psl->_array[j + 1] = tmp;
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
	int right = psl->_size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (psl->_array[mid] < x)
		{
			left = mid + 1;
		}
		else if (psl->_array[mid] > x)
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

//����˳����С
int SeqList_size(SeqList *psl)
{
	assert(psl);
	return (psl->_size >= 0) ? (psl->_size) : (-1);
}