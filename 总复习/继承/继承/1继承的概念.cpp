#include <iostream>
#include <string>

using namespace std;

//�̳л������������������ʹ������Ը��õ�����Ҫ�ֶΣ����������Ա�ڱ���ԭ�е������ԵĻ����Ͻ�����չ�����ӹ���
//�̳г�����������������ƵĲ�νṹ���������ɼ򵥵����ӵ���֪���̣��̳�������Ʋ�εĸ���

class person
{
public:
	void print()
	{
		cout << "name : " << m_name << endl;
		cout << "age : " << m_age << endl;
	}
protected:
	string m_name = "zhangsan";
	int m_age = 18;
};

//�̳и����person�ĳ�Ա����Ա����+��Ա������
class student : public person
{
protected:
	int m_stuid;
};

class teacher : public person
{
protected:
	int m_jobid;
};

int main()
{
	student stu;
	teacher ter;

	stu.print();
	ter.print();
	system("pause");
	return 0;
}
