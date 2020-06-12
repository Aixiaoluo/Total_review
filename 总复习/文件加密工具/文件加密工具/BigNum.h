#pragma  once
#include <string>
#include <utility>

using namespace std;

class BigNum
{
public:
	BigNum()
	{

	}
	BigNum(const string& num);
	BigNum(const int& num);
public:
	//�ӷ�
	string add(string num1, string num2);
	//����
	string sub(string num1, string num2);
	//�˷�
	string mul(string num1, string num2);
	//����
	pair<string, string> dev(string num1, string num2);
private:
	//���ַ�����ʾ����
	string m_number;
};