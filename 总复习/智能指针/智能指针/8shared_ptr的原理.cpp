#include <iostream>
#include <mutex>

using namespace std;

//shared_ptr��ԭ��ͨ�����ü����ķ�ʽ��ʵ�ֶ��shared_ptr����֮��Ĺ�����Դ

//1��shared_ptr���ڲ�����ÿ����Դ��ά����һ�ݼ�����������¼����Դ������������
//2���ڶ������ٵ�ʱ�򣬶�������ü�����һ
//3���������ü�����0����֤���ö��������һ��ʹ�ø���Դ�Ķ�����������ͷ���Դ
//4��������0,�����ͷŸ���Դ�������Ұָ��

template <class T>
class SharedPtr
{
public:
	SharedPtr(T* ptr = nullptr)
		:m_ptr(ptr)
		, m_pRefCount(new int(1))
		, m_pMutex(new mutex)
	{

	}

	~SharedPtr()
	{
		Release();
	}

	SharedPtr(const SharedPtr<T>& sp)
		:m_pRefCount(sp.m_pRefCount)
		, m_ptr(sp.m_ptr)
		, m_pMutex(sp.m_pMutex)
	{
		AddRefCount();
	}

	SharedPtr& operator = (const SharedPtr<T>& sp)
	{
		if (this != &sp)
		{
			Release();

			m_pRefCount = sp.m_pRefCount;
			m_ptr = sp.m_ptr;
			m_pMutex = sp.m_pMutex;

			AddRefCount();
		}
		return *this;
	}

	T& operator * ()
	{
		return *m_ptr;
	}

	T* operator -> ()
	{
		return m_ptr;
	}

	int UseCount()
	{
		return *m_pRefCount;
	}

	T* Get()
	{
		return m_ptr;
	}

	void AddRefCount()
	{
		m_pMutex->lock();
		(*m_pRefCount)++;
		m_pMutex->unlock();
	}
private:
	void Release()
	{
		bool deleteflag = false;
		m_pMutex->lock();
		if ((*m_pRefCount)-- == 0)
		{
			delete m_ptr;
			delete m_pRefCount;
			deleteflag = true;
		}
		m_pMutex->unlock();
		if (deleteflag == true)
		{
			delete m_pMutex;
		}
	}
private:
	int* m_pRefCount;
	T* m_ptr;
	mutex* m_pMutex;
};

int main()
{
	SharedPtr<int> sp1(new int(10));
	SharedPtr<int> sp2(sp1);
	*sp2 = 20;

	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;

	SharedPtr<int> sp3(new int(10));
	sp2 = sp3;

	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;
	cout << sp3.UseCount() << endl;

	sp1 = sp3;

	cout << sp1.UseCount() << endl;
	cout << sp2.UseCount() << endl;
	cout << sp3.UseCount() << endl;

	system("pause");
	return 0;
}
