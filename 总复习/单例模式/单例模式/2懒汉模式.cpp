#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

//����ģʽ
//�ӳټ���
//�ŵ㣺��һ��ʹ��ʵ������ʱ���������󣬽��������޸��أ��������ʵ������˳�����ɿ���
//ȱ�㣺����

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (m_pInstance == nullptr)
		{
			m_mutex.lock();
			if (m_pInstance == nullptr)
			{
				m_pInstance = new Singleton();
			}
			m_mutex.unlock();
		}
		return m_pInstance;
	}

	//ʵ��һ����Ƕ����������
	class CGarbo
	{
	public:
		~CGarbo()
		{
			if (Singleton::m_pInstance)
			{
				delete Singleton::m_pInstance;
			}
		}
	public:
		//����һ����̬��Ա�������������ʱ��ϵͳ���Զ������������������Ӷ��ͷŵ�������
		static CGarbo Garbo;
	};

private:
	//���캯��
	Singleton()
	{

	}

	//C++98������
	Singleton(const Singleton&);
	Singleton& operator=(Singleton const&);
	
	////C++11��ֹ����
	//Singleton(const Singleton&) = delete;
	//Singleton& operator=(Singleton const&) = delete;

	static Singleton* m_pInstance;//��������ָ��
	static mutex m_mutex;//������

};

Singleton* Singleton::m_pInstance = nullptr;
Singleton::CGarbo Garbo;
mutex Singleton::m_mutex;

void Func(int n)
{
	cout << Singleton::GetInstance() << endl;
}

int main()
{

	thread t1(Func, 10);
	thread t2(Func, 10);

	t1.join();
	t2.join();

	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;

	system("pause");
	return 0;
}
