#include <iostream>

using namespace std;

//�����ࣺ���麯������д�� "= 0"�����������Ϊ���麯�����������麯���������������
//�����಻��ʵ����������,ֻ����д��Ĵ��麯������ʵ����������
//���麯���淶�������������д�����麯�������ֳ��˽ӿڼ̳�

class Car
{
public:
	virtual void Drive() = 0;
};

class Benz : public Car
{
	virtual void Drive()
	{
		cout << "Benz" << endl;
	}
};

class BMW : public Car
{
	virtual void Drive()
	{
		cout << "BMW" << endl;
	}
};

int main()
{
	Car* pBenz = new Benz;
	pBenz->Drive();

	Car* pBMW = new BMW;
	pBMW->Drive();
	system("pause");
	return 0;
}
