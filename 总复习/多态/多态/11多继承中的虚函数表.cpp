#include <iostream>

using namespace std;

//��̳��������δ��д���麯�����ڵ�һ���̳л��ಿ�ֵ��麯������

class Base1
{
public:
	virtual void func1()
	{
		cout << "Base1::func1()" << endl;
	}

	virtual void func2()
	{
		cout << "base1::func2()" << endl;
	}
private:
	int m_b1;
};

class Base2
{
public:
	virtual void func1()
	{
		cout << "Base2::func1()" << endl;
	}

	virtual void func2()
	{
		cout << "Base2::func2()" << endl;
	}
private:
	int m_b2;
};

class Derive : public Base1, public Base2
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
private:
	int m_d;
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
	Base1 b1;
	Base2 b2;

	VFPTR* Base1b1 = (VFPTR*)(*(int*)&b1);
	PrintVTable(Base1b1);

	VFPTR* Base1b2 = (VFPTR*)(*(int*)&b2);
	PrintVTable(Base1b2);

	Derive d;
	VFPTR* Derived1 = (VFPTR*)(*(int*)&d);
	PrintVTable(Derived1);

	VFPTR* Derived2 = (VFPTR*)(*(int*)((char*)&d+sizeof(Base1)));
	PrintVTable(Derived2);
	system("pause");
	return 0;
}
