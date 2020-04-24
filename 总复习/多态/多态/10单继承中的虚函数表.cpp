#include <iostream>

using namespace std;

class Base
{
public:
	virtual void func1()
	{
		cout << "Base::func1()" << endl;
	}

	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}
private:
	int m_a;
};

class Derive : public Base
{
public:
	virtual void func1()
	{
		cout << "Derive::func1()" << endl;
	}

	virtual void func3()
	{
		cout << "Derive::func3()" << endl;
	}

	virtual void func4()
	{
		cout << "Derive::func4()" << endl;
	}
private: 
	int m_b;
};

typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	cout << "����ַ" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; i++)
	{
		printf("��%d���麯����ַ��0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}

int main()
{
	Base b;
	Derive d;

	//˼·��ȡ��b��d�����ǰ�ĸ��ֽڣ���������ָ��
	//1����ȡ��b�ĵ�ַǿת��int*��ָ��
	//2��������ȡֵ����ȡ��b�����4���ֽڵ�ֵ
	//3����ǿת��VFPTR*����Ϊ�����Ǵ�VFPTR���麯��ָ�룩���͵�����
	//4�����ָ�봫�ݸ�PrintVTable��ӡ���
	VFPTR* vTableb = (VFPTR*)(*(int*)&b);
	PrintVTable(vTableb);

	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
	PrintVTable(vTabled);
	system("pause");
	return 0;
}
