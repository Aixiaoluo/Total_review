//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cassert>
//#include <cstring>
//
//using namespace std;
//
////���������Ƕ���������ʱ����Զ������������������һЩ��Դ���ͷŹ�����
////��������������
////1����������������������ǰ�����~
////2���޲����޷���ֵ
////3��һ��������ֻ��һ��������������δ��ʵ���壬�б���������Ĭ����������
////4�������������ڽ���ʱ��C++�������Զ���������������
//
//typedef int DataType;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		_SeqList = (DataType*)malloc(capacity * sizeof(DataType));
//		assert(_SeqList);
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	~SeqList()
//	{
//		if (_SeqList)
//		{
//			free(_SeqList);
//			_SeqList = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _SeqList;
//	size_t _size;
//	size_t _capacity;
//};
//
//class String
//{
//public:
//	String(const char* str = "zhangsan")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//		_str = NULL;
//	}
//
//private:
//	char* _str;
//};
//
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//
//int main()
//{
//	String _name;
//	Person per;
//
//	system("pause");
//	return 0;
//}
