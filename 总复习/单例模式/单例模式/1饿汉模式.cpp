#include <iostream>

using namespace std;
//����ģʽ
//һ����ֻ�ܴ���һ�����󣬼�����ģʽ����ģʽ���Ա�֤ϵͳ�и���ֻ��һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㣬��ʵ�������г���ģ�鹲��
//
//����ģʽ�������ò��ã���������ʱ�ʹ���һ��Ψһ��ʵ������
//�ŵ㣺��
//ȱ�㣺���ܻᵼ�½�����������������ж������ģʽ����ʵ������˳��ȷ��
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		return &m_instance;
	}
private:
	//���캯��˽��
	Singleton()
	{

	}

	//C++98������
	Singleton(const Singleton&);
	Singleton& operator=(Singleton const&);

	//C++11��ֹ����
	Singleton(const Singleton&) = delete;
	Singleton& operator=(Singleton const&) = delete;

	static Singleton m_instance;
};

Singleton Singleton::m_instance;//�ڳ������֮ǰ����ɵ�������ĳ�ʼ��

int main()
{

	system("pause");
	return 0;
}
