//#include <iostream>
//
//using namespace std;
//
////����ָ��Ҳ��Ҫ�߱�ָ�����Ϊ��������ã���ͷ����
//
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)
//		:m_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		if (m_ptr)
//		{
//			delete m_ptr;
//		}
//	}
//
//	T& operator * ()
//	{
//		return *m_ptr;
//	}
//
//	T* operator -> ()
//	{
//		return m_ptr;
//	}
//private:
//	T* m_ptr;
//};
//
//struct Date
//{
//	int m_year;
//	int m_month;
//	int m_day;
//};
//
//int main()
//{
//	SmartPtr<int> sp(new int);
//	*sp = 10;
//	cout << *sp << endl;
//
//	SmartPtr<Date> sparray(new Date);
//	sparray->m_year = 2020;
//	sparray->m_month = 4;
//	sparray->m_day = 27;
//	system("pause");
//	return 0;
//}
