#include <iostream>

using namespace std;

//һ��catch������ȫ����һ���쳣���ڽ���һЩУ�������ϣ���ٽ��������ĵ���������������catch�����ͨ�������׳����쳣���ݸ����ϲ�ĺ������д���

double Division(int a, int b)
{
	//��b == 0ʱ�׳��쳣
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	else
	{
		return ((double)a / (double)b);
	}
}

void Func()
{
	//���������0�����׳��쳣
	//arrayû���ͷ��׳��쳣
	//�����쳣�������洦�����ﲶ��������׳�
	int* array = new int[10];
	try
	{
		int len, time;
		cin >> len >> time;
		cout << Division(len, time) << endl;
	}
	catch (...)
	{
		cout << "delete[]" << array << endl;
		delete[] array;
		throw;
	}
	cout << "delete[]" << array << endl;
	delete[] array;
}

int main()
{
	try
	{
		Func();
	}
	catch (const char* errmsg)
	{
		cout << errmsg << endl;
	}
	system("pause");
	return 0;
}
