#pragma  once
#include <iostream>
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

	BigNum operator + (BigNum& bi);
	BigNum operator - (BigNum& bi);
	BigNum operator * (BigNum& bi);
	BigNum operator / (BigNum& bi);
	BigNum operator % (BigNum& bi);

	BigNum& operator += (BigNum& bi);
	BigNum& operator -= (BigNum& bi);
	BigNum& operator *= (BigNum& bi);
	BigNum& operator /= (BigNum& bi);
	BigNum& operator %= (BigNum& bi);

	BigNum& operator ++ ();
	BigNum operator ++ (int);

	BigNum& operator -- ();
	BigNum operator -- (int);

	friend ostream& operator << (ostream& _cout, BigNum& bi);
	friend istream& operator >> (istream& _cout, BigNum& bi);

private:
	//�ӷ�
	string add(string num1, string num2);
	//����
	string sub(string num1, string num2);
	//�˷�
	string mul(string num1, string num2);
	//����
	pair<string, string> dev(string num1, string num2);
	bool less(string num1, string num2);
private:
	//���ַ�����ʾ����
	string m_number;
};