#include <iostream>

using namespace std;

//public�̳���һ��is-a�Ĺ�ϵ��ÿ�������඼��һ���������
//�����һ��has-a�Ĺ�ϵ������b�����a ��b������һ��a����
//����ʹ����ϣ���ο��Ǽ̳�
//�̳�������ݻ����ʵ���������������ʵ�֣�����ͨ������������ĸ���ͨ����Ϊ���临�ã���϶ȸ�
//��������Ҫ����ϵĶ���������ö���Ľӿڣ����ָ��ó�Ϊ���临�� ��϶ȵ�

//Car��BMW���ɵ�is-a��ϵ
class Car
{
protected:
	string m_colour = "red";
	string m_num = "��A250S13";
};

class BMW : public Car
{
public:
	void Drive()
	{
		cout << "Drive()" << endl;
	}
};

//Tire��Car���ɵ�has-a��ϵ
class Tire
{
protected:
	string m_brand = "naike";
	size_t m_size = 17;
};

class Car
{
protected:
	string m_colour = "red";
	string m_num = "��A250S13";
	Tire m_t;
};

int main()
{

	system("pause");
	return 0;
}
