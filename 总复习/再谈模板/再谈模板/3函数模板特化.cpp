//#include <iostream>
//
//using namespace std;
//
////����ģ���ػ��Ĳ���
////1����������һ������ģ��
////2��template<> ��������ֵ ��Ҫ�ػ��ĺ�����<��Ҫ�ػ�������>(�����б�)
////3���������β��б�������Ҫ�ػ�������һ��
//
//template<class T>
//bool isEqual(T& left, T& right)
//{
//	return (left == right) ? true : false;
//}
//
//template<>
//bool isEqual<char*>(char*& left, char*& right)
//{
//	return (strcmp(left, right) == 0) ? true : false;
//}
//
//int main()
//{
//	char* p1 = "Hello";
//	char* p2 = "World";
//	char* p3 = "World";
//
//	cout << isEqual(p1, p2) << endl;
//	cout << isEqual(p2, p3) << endl;
//	system("pause");
//	return 0;
//}
