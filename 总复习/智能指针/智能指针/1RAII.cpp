//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////RAII��һ�����ö����������������Ƴ�����Դ���ڴ棬�ļ�������������ӣ����������ļ���
//
////�ڶ�����ʱ��ȡ��Դ�����ſ��ƶ���Դ�ķ���ʹ֮�ڶ��������������ʼ�ձ�����Ч�������������ĵ�ʱ���ͷ���Դ
////�����������ڽ������������Դ��������������ʼ�ձ�����Ч
//
////ʹ��RAII�������SmartPtr��
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)
//		:m_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		if (m_ptr)
//		{
//			delete m_ptr;
//		}
//	}
//private:
//	T* m_ptr;
//};
//
//void dealMergeSort(int* a, int start, int end, int* tmp)
//{
//	if (start >= end)
//	{
//		return;
//	}
//	int mid = (start + end) / 2;
//	dealMergeSort(a, start, mid, tmp);
//	dealMergeSort(a, mid + 1, end, tmp);
//
//	int p = start;
//	int q = mid + 1;
//	int index = start;
//
//	while (p <= mid && q <= end)
//	{
//		if (a[p] < a[q])
//		{
//			tmp[index] = a[p];
//			p++;
//		}
//		else
//		{
//			tmp[index] = a[q];
//			q++;
//		}
//		index++;
//	}
//	for (; p <= mid; p++)
//	{
//		tmp[index] = a[p];
//		index++;
//	}
//	for (; q <= end; q++)
//	{
//		tmp[index] = a[q];
//		index++;
//	}
//	for (int i = start; i < end; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//
//void MergeSort(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	SmartPtr<int> sp(tmp);
//	dealMergeSort(a, 0, n - 1, tmp);
//
//	vector<int> v(100000000, 10);
//}
//
//int main()
//{
//	try
//	{
//		int a[5] = { 4, 5, 2, 3, 1 };
//		MergeSort(a, 5);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Unknow erro" << endl;
//	}
//	system("pause");
//	return 0;
//}
