#include <iostream>

using namespace std;

//����Ĺ��캯��˽�У�������������˽�У���ֹ����ÿ�����ջ�����ɶ���
//�ṩһ����̬��Ա�������ڸþ�̬��Ա��������ɶѶ���Ĵ���

class HeapOnly
{
public:
	static HeapOnly* CreatObject()
	{
		return new HeapOnly;
	}

private:
	HeapOnly()
	{

	}

	//C++98
	//�������캯����ջ�ϴ�������
	//HeapOnly(const HeapOnly& heaponly)
	//{

	//}

	//C++11
	HeapOnly(const HeapOnly& heaponly) = delete;
};

int main()
{

	system("pause");
	return 0;
}
