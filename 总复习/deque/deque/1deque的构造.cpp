#include <iostream>
#include <deque>
using namespace std;

int main()
{

	deque<int> d1;//�����d1
	deque<int> d2(10, 5);//����10��ֵΪ5��d2
	
	for (auto& e : d2)
	{
		cout << e << " ";
	}
	cout << endl;

	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//���������乹��d3
	deque<int> d3(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (auto& e : d3)
	{
		cout << e << " ";
	}
	cout << endl;

	deque<int> d4(d3);//��������d4

	for (auto& e : d4)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
