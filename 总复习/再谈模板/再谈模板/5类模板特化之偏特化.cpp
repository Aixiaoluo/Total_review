//#include <iostream>
//
//using namespace std;
//
////��ģ���ƫ�ػ���ָ�κ�ģ�������һ�������������Ƶ��ػ��汾
//
////��ģ���ƫ�ػ���Ϊ����
////һ���ǲ����ػ�����ģ�������һ�����ػ�
////����һ���ǲ����Ľ�һ�����ƣ�ƫ�ػ�Ҳ�����ǽ�ģ��������и���һ�������ƣ�����Ƴ���ģ��
//
//template<class T1, class T2>
//class Data
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1, T2>" << endl;
//	}
//private:
//	T1 m_d1;
//	T2 m_d2;
//};
//
//template<class T2>
//class Data<int, T2>
//{
//public:
//	Data()
//	{
//		cout << "Data()<int, T2>" << endl;
//	}
//private:
//	int m_d1;
//	T2 m_d2;
//};
//
//template<class T1>
//class Data<T1, char>
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1, char>" << endl;
//	}
//private:
//	T1 m_d1;
//	char m_d2;
//};
//
//template<class T1, class T2>
//class Data<T1*, T2*>
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1*, T2*>" << endl;
//	}
//private:
//	T1* m_d1;
//	T2* m_d2;
//};
//
//template<class T1, class T2>
//class Data<T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		:m_d1(d1)
//		, m_d2(d2)
//	{
//		cout << "Data(T1&, T2&)" << endl;
//	}
//private:
//	const T1& m_d1;
//	const T2& m_d2;
//};
//
//int main()
//{
//	Data<double, int> d1; // �����ػ���int�汾
//	Data<int, double> d2; // ���û�����ģ��
//	Data<int *, int*> d3; // �����ػ���ָ��汾
//	Data<int&, int&> d4(1, 2); // �����ػ���ָ��汾
//
//	system("pause");
//	return 0;
//}
