//#include <iostream>
//
//using namespace std;
//
////dynamic_cast���ڽ�һ����������ָ��ת��Ϊ��������ָ������ã���̬ת����
////����ת�ͣ��������ָ��->�������ָ��/���ã�����Ҫת������ֵ���ݹ���
////����ת�ͣ��������ָ��->�������ָ��/���ã���dynamic_castת���ǰ�ȫ�ģ�
////ע��
////1��dynamic_castֻ�����ں����麯������
////2��dynamic_cast���ȼ���Ƿ���ת���ɹ����ܳɹ�ת����ת�������򷵻�0
////3��ǿ������ת����رջ�������������ͼ�顣
//class A
//{
//public:
//	virtual void f()
//	{
//
//	}
//};
//
//class B : public A
//{
//
//};
//
//void fun(A* pa)
//{
//	B* pb1 = static_cast<B*>(pa);
//	B* pb2 = dynamic_cast<B*>(pa);
//
//	cout << "pb1:" << pb1 << endl;
//	cout << "pb2:" << pb2 << endl;
//}
//
//int main()
//{
//	A a;
//	B b;
//	fun(&a);
//	fun(&b);
//	system("pause");
//	return 0;
//}
