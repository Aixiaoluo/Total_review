#include <iostream>
using namespace std;

typedef decltype(nullptr) nullptr_t;

//ע:
//1����ʹ��nullptr��ʾ��ֵָ��ʱ������Ҫ����ͷ�ļ���nullptr�ǹؼ���
//2����C++11��sizeof(nullptr)��sizeof((void*)0)��ռ���ֽ�����ͬ
//3��Ϊ����ߴ���Ľ�׳�ԣ�ʹ�ÿ�ֵָ��ʱ�����ʹ��nullptr

void Fun(int)
{
	cout << "Fun(int)" << endl;
}

void Fun(int*)
{
	cout << "Fun(int*)" << endl;
}

int main()
{
	Fun(0);
	Fun(NULL);
	Fun((int*)NULL);
	system("pause");
	return 0;
}