#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

//ע��
//deque�������Ч�ʺܵͣ�����deque�����ʱ����Ҫ��ζ�deque�е�Ԫ�ؽ��������������deque�ı����ܵͣ�deque�Ŀռ䲻������

int main()
{
	int arr[] = { 3, 2, 4, 5, 1, 8, 9, 7, 6 };
	deque<int> d(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	sort(d.begin(), d.end());

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
