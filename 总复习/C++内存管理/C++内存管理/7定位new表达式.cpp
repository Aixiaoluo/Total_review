//#include <iostream>
//
//using namespace std;
//
////��λnew���ʽ�����ѷ����ԭʼ�ڴ�ռ��е��ù��캯����ʼ��һ������
////ʹ�ø�ʽ��
////new(place_address)type����new(place_address)type(initializer-list)
////place_address������һ��ָ�룬initializer-list�����͵ĳ�ʼ���б�
//
////ʹ�ó�����
////��λnew���ʽ��ʵ����һ��������ڴ��ʹ�ã���Ϊ�ڴ�ط�������ڴ�û�г�ʼ��
////�����Զ������͵Ķ�����Ҫʹ��new�Ķ�λ���ʽ������ʾ���ù��캯�����г�ʼ��
//
//class Test
//{
//public:
//	Test(int data)
//		:_data(data)
//	{
//		cout << "Test()" << endl;
//	}
//
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//
//private:
//	int _data;
//};
//
//void Test1()
//{
//	//ptrĿǰֻ����Test��ͬ��С��һ��ռ䣬����������һ��������Ϊ���캯��û��ִ��
//	Test* ptr = (Test*)malloc(sizeof(Test));
//	//����Test��Ĺ��캯���в������˴���Ҫ����
//	new(ptr) Test(10);
//}
//
//int main()
//{
//	Test1();
//	system("pause");
//	return 0;
//}
