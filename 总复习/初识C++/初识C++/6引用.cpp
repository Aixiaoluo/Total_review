//#include <iostream>
//using namespace std;
//
////���ò����¶���һ�����������Ǹ��Ѿ����ڵı��������������������Ϊ���ñ��������ڴ�ռ䣬���������õı�������ͬһ���ڴ�ռ�
////eg:����& ���ñ����� = ����ʵ��
//
//void Test6()
//{
//	int a = 10;
//	int& aa = a;
//	printf("%p\n", &a);
//	printf("%p\n", &aa);
//}
//
////��������
////1���������ڶ���ʱ�����ʼ��
////2��һ�����������ж������
////3������һ������һ��ʵ�壬�ٲ�����������ʵ��
//
//void TestRef()
//{
//	int b = 20;
//	//int& ra;
//	int& ra = b;
//	int& rra = b;
//	printf("%p %p %p", &b, &ra, &rra);
//}
//
////������
//void TestConstRef()
//{
//	const int a = 10;
//	//int& ra = a;  aΪ����
//	const int& ra = a;
//	//int& b = 10;  bΪ����
//	const int& b = 10;
//	double d = 3.14;
//	//int&rd = d;  ���Ͳ�ͬ
//	const int& rd = d;
//}
//
////ʹ�ó���
////1��������
//void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////2��������ֵ
//int& TestRefReturn(int& a)
//{
//	a += 10;
//	return a;
//}
//
//int& Add2(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	Test6();
//	TestRef();
//	int& ret = Add2(10, 20);
//	Add2(3, 4);
//	cout << "Add2(10, 20) = " << ret << endl;
//	system("pause");
//	return 0;
//}
