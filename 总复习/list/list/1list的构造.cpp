#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;//����յ�l1
	list<int> l2(4, 100);//����4��ֵΪ100��list
	list<int> l3(l2.begin(), l2.end());//��l2��begin-end���乹��l3
	list<int> l4(l3);//��������l4

	//�����鹹��list
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l5(arr, arr + sizeof(arr) / sizeof(arr[0]));

	//�õ������ķ�ʽ��ӡl5
	for (list<int>::iterator it = l5.begin(); it!=l5.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�÷�Χfor����
	for (auto& e : l5)
	{
		cout << e << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}
