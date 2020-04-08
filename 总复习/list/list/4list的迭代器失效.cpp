#include <iostream>
#include <list>

using namespace std;

void TestListIterator1()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	list<int>::iterator it = l.begin();
	for (; it != l.end(); it++)
	{
		//erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
		l.erase(it);
	}
}

void TestListIterator2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	list<int>::iterator it = l.begin();
	for (; it != l.end();)
	{
		//erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
		l.erase(it++);
	}
}


int main()
{
	//TestListIterator1();
	TestListIterator2();
	system("pause");
	return 0;
}
