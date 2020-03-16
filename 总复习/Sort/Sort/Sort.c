#include "Sort.h"

//��������
void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//BubbleSort��ð������
void BubbleSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		for (int j = 0; j < psl->_size - i - 1; j++)
		{
			if (psl->_array[j] > psl->_array[j + 1])
			{
				Swap(&psl->_array[j], &psl->_array[j + 1]);
			}
		}
	}
}

//SelectSort��ѡ������
void SelectSort(SeqList *psl)
{
	//if (psl->_size == 0)
	//{
	//	return;
	//}
	for (int i = 0; i < psl->_size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < psl->_size; j++)
		{
			if (psl->_array[j] < psl->_array[min])
			{
				min = j;
			}
		}
		Swap(psl->_array[i], psl->_array[min]);
	}
}

//InstertSort����������
void InstertSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		int tmp = psl->_array[i];
		int j;
		for (j = i; j > 0 && psl->_array[j - 1] > tmp; j--)
		{
			psl->_array[j] = psl->_array[j - 1];
		}
		psl->_array[j] = tmp;
	}
}

//ShellSort��ϣ������
void ShellSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int gap = psl->_size / 2; gap; gap /= 2)
	{
		for (int k = 0; k < gap; k++)
		{
			for (int i = k + gap; i < psl->_size; i += gap)
			{
				int tmp = psl->_array[i];
				int j;
				for (j = i; j > gap && psl->_array[j - gap] > tmp; j -= gap)
				{
					psl->_array[j] = psl->_array[j - gap];
				}
				psl->_array[j] = tmp;
			}
		}
	}
}

//MergeSort���鲢����
void MergeSort(SeqList *psl);
//QuickSort����������
void QuickSort(SeqList *psl);
//HeapSort��������
void HeapSort(SeqList *psl);
//CountSort����������
void CountSort(SeqList *psl);
//BucketSort��Ͱ����
void BucketSort(SeqList *psl);
//RadixSort����������
void RadixSort(SeqList *psl);