#include <iostream>
#include <string>

using namespace std;

//1�������е�private��Ա���������в��ɼ��������಻�ܷ������private��Ա��
//2�����ǻ����Ա���뱻�����ʣ�ֻ������������ʣ�����protected����
//3��public>protected>private
//4��class��Ĭ�Ϸ����޶�����private��struct��Ĭ�Ϸ����޶�����public
//5��һ�㳣ʹ��public�̳�

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

class student : protected person
{
protected:
	int m_stuid;
};
class student : private person
{
protected:
	int m_stuid;
};

class student : public person
{
protected:
	int m_stuid;
};

class teacher : protected person
{
protected:
	int m_jobid;
};

class teacher : private person
{
protected:
	int m_jobid;
};

class teacher : public person
{
protected:
	int m_jobid;
};

int main()
{

	system("pause");
	return 0;
}
