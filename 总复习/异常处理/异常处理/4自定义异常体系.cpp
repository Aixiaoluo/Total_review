#include <iostream>

using namespace std;

//ͨ��һ�׼̳еĹ淶��ϵ���׳���������󣬲���һ���������Ϳ���

class Exception
{
protected:
	string m_errmsg;
	int m_id;
};

class SqlException : public Exception
{

};

class CatchException : public Exception
{

};

class HttpServerException : public Exception
{

};

int main()
{
	try
	{
		//�׳����������������
	}
	catch (const Exception& e)//����ֻ��Ҫ��������쳣�Ϳ���
	{

	}
	catch (...)
	{
		cout << "Unknow Exception" << endl;
	}
	system("pause");
	return 0;
}
