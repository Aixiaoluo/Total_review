#include <iostream>

using namespace std;

//�ڲ������
//���һ����������һ������ڲ�������ڲ���ͽ����ڲ���
//
//ע
//1���ڲ������ⲿ�����Ԫ��
//2���ڲ�����Զ������ⲿ���public��protected��private������
//3���ڲ�����Է����ⲿ���static��ö�ٳ�Ա������Ҫ�ⲿ��Ķ���/����
//4��sizeof(�ⲿ��) = �ⲿ��,���ڲ���û���κι�ϵ

class A
{
public:
	A(int h)
	{
		_h = h;
	}
	class B
	{
	public:
		void foo(const A& a)
		{
			cout << _k << endl;
			cout << a._h << endl;
		}
	};
private:
	static int _k;
	int _h;
};

int A::_k = 0;

int main()
{
	A::B b;
	b.foo(A(10));
	system("pause");
	return 0;
}
