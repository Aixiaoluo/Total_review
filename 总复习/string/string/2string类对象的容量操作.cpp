//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void TestString2()
//{
//	string s("Hello,World!");
//
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//resize������Сԭ���Ѿ������capacity
//}
//
//void TestString3()
//{
//	string s;
//
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//reserve������С�Ѿ������capacity
//}
//
//void TestString4()
//{
//	string s;
//	size_t size = s.capacity();
//	
//	cout << "making s grow:" << endl;
//
//	for (int i = 0; i < 100; i++)
//	{
//		s.push_back('c');
//		if (size != s.capacity())
//		{
//			size = s.capacity();
//			cout << "capacity changed: " << size << endl;
//		}
//	}
//}
//
////ע��
////1��size()��length()�����ײ�ʵ��ԭ����ȫ��ͬ������size()��ԭ����Ϊ�������������Ľӿڱ���һ�£�
////2��clearֻ�����string�е���Ч�ַ�������ı�ײ�ռ��С
////3��resize(size_t n)��resize(size_t n, char c)���ǽ��ַ����е���Ч�ַ������ı䵽n��,resize(size_t n)�ǽ�������Ŀռ䲹0��resize(size_t n, char c)�ǽ���������ַ���c
////4��resize������Сԭ���Ѿ������capacity
////5��reserve(size_t res_arg = 0):ΪstringԤ���ռ䣬���ı���ЧԪ�ظ�������reserve�Ĳ���С��string�ĵײ�ռ��Сʱ��reserve����ı�������С
////6���κβ������ᵼ�¿ռ���С
//int main()
//{
//	TestString2();
//	TestString3();
//	TestString4();
//
//	system("pause");
//	return 0;
//}
