#ifndef _SORT_H_
#define _SORT_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include "SeqList.h"
#include "Queue.h"

//��������
void Swap(int *x, int *y);

//BubbleSort��ð������
void BubbleSort(SeqList *psl);
//SelectSort��ѡ������
void SelectSort(SeqList *psl);
//InstertSort����������
void InstertSort(SeqList *psl);
//ShellSort��ϣ������
void ShellSort(SeqList *psl);
//MergeSort���鲢����
void DealMergeSort(SeqList *psl, SeqList *tmp, int start, int end);
void MergeSort(SeqList *psl);
//QuickSort����������
//Ѱ�һ�׼ֵ�±�ķ���
//hoare��
int GetIndexHoareWay(SeqList *psl, int left, int right);
//˫ָ�뷨1
int GetIndexDoublePointWay1(SeqList *psl, int left, int right);
//˫ָ�뷨2
int GetIndexDoublePointWay2(SeqList *psl, int left, int right);
//�ڿӷ�
int GetIndexDigWay(SeqList *psl, int left, int right);
void DealQuickSort(SeqList *psl, int left, int right);
void QuickSort(SeqList *psl);
//��������ǵݹ�
void QuickSortNonR(SeqList *psl);
//HeapSort��������
void HeapAdjustDown(SeqList *psl, int root);
void HeapSort(SeqList *psl);
//CountSort����������
void CountSort(SeqList *psl);
//BucketSort��Ͱ����
void BucketSort(SeqList *psl);
//RadixSort����������
int GetDigit(SeqList *psl);
void RadixSort(SeqList *psl);

#endif //_SORT_H_