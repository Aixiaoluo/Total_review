#include <iostream>
#include <memory>
#include <thread>

using namespace std;

//1������ָ����������ü����Ƕ������ָ�������ģ������߳�������ָ������ü���ͬʱ++��--�������������ԭ�ӵģ����ü���ԭ����1��++�����Σ����ܻ���2�������ᵼ����Դδ�ͷŻ��߳��������--��Ҫ����
//2������ָ�����Ķ������ڶ��ϣ������߳���ͬʱȥ���ʣ��ᵼ���̰߳�ȫ����

struct Date
{
	int m_year;
	int m_month;
	int m_day;
};

void SharedPtrFunc(shared_ptr<Date>& sp, size_t n)
{
	cout << sp.get() << endl;
	for (size_t i = 0; i < n; i++)
	{
		shared_ptr<Date> copy(sp);

		copy->m_year++;
		copy->m_month++;
		copy->m_day++;
	}
}

int main()
{
	shared_ptr<Date> p(new Date);
	cout << p.get() << endl;

	const size_t n = 100;
	thread t1(SharedPtrFunc, p, n);
	thread t2(SharedPtrFunc, p, n);

	t1.join();
	t2.join();

	cout << p->m_year << endl;
	cout << p->m_month << endl;
	cout << p->m_day << endl;
	system("pause");
	return 0;
}
