#include <iostream>

using namespace std;

//reinterpret_cast������ͨ��Ϊ��������λģʽ�ṩ�ϵͲ�ε����½��ͣ����ڽ�һ������ת��Ϊ��һ�ֲ�ͬ������

typedef void (*FUNC)();

int doSomething(int i)
{
	cout << "doSomething()" << endl;
	return 0;
}

int main()
{
	FUNC f = reinterpret_cast<FUNC>(doSomething);
	f();
	system("pause");
	return 0;
}
