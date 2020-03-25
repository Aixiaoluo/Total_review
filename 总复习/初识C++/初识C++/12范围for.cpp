#include <iostream>
using namespace std;

//C++98����һ������
void TestFor()
{
	int _array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < sizeof(_array) / sizeof(_array[0]); i++)
	{
		_array[i] *= 2;
	}

	for (int* p = _array; p < _array + sizeof(_array) / sizeof(_array[0]); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

//C++11�÷�Χfor����
//��ʽ��for(��Χ�����ڵ����ı���:��ʾ�������ķ�Χ)
void TestFor11()
{
	int _array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto& e : _array)
	{
		cout << e * 2 << " ";
	}
	cout << endl;
}

//��Χfor��ʹ������
//1��forѭ���ķ�Χ����ȷ��������������ԣ����������һ�������һ��Ԫ�صķ�Χ����������ԣ����begin������end�����ǵ����ķ�Χ��
//2�������Ķ���Ҫʵ��++��==

int main()
{
	TestFor();
	TestFor11();
	system("pause");
	return 0;
}
