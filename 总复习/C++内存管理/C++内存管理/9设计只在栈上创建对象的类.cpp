#include <iostream>

using namespace std;

//�ڶѺ�ջ�ϴ������󶼻���ù��캯������ˣ��Ƚ����캯��˽�л�
//����һ��static�������ջ����Ĵ���

class StackOnly
{
public:
	static StackOnly CreatObject()
	{
		return StackOnly();
	}

private:
	StackOnly()
	{

	}

};

//���������ε�new��new��λ���ʽ
class StackOnly
{
public:
	StackOnly()
	{

	}
private:
	void* operator new(size_t size);
	void operator delete(void* p);
};

int main()
{

	system("pause");
	return 0;
}
