#include "BigNum.h"

BigNum::BigNum(const string& num)
:m_number(num)
{

}

BigNum BigNum::operator + (BigNum& bi)
{
	string res = add(m_number, bi.m_number);
	return BigNum(res);
}

BigNum BigNum::operator - (BigNum& bi)
{
	string res = sub(m_number, bi.m_number);
	return BigNum(res);
}

BigNum BigNum::operator * (BigNum& bi)
{
	string res = mul(m_number, bi.m_number);
	return BigNum(res);
}

BigNum BigNum::operator / (BigNum& bi)
{
	pair<string, string> res = dev(m_number, bi.m_number);
	return BigNum(res.first);
}

BigNum BigNum::operator % (BigNum& bi)
{
	pair<string, string> res = dev(m_number, bi.m_number);
	return BigNum(res.second);
}

ostream& operator << (ostream& _cout, BigNum& bi)
{
	_cout << bi.m_number << endl;
	return _cout;
}

istream& operator >> (istream& _cin, BigNum& bi)
{
	_cin >> bi.m_number;
	return _cin;
}

//�ӷ�
string BigNum::add(string num1, string num2)
{
	//λ������
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNUm = abs(len1 - len2);
	int longSize = len1 > len2 ? len1 : len2;

	if (len1 < len2)
	{
		num1.insert(0, diffNUm, '0');
	}
	else
	{
		num2.insert(0, diffNUm, '0');
	}

	string res;
	res.resize(longSize);

	//��λ���
	int step = 0;
	for (int i = longSize - 1; i >= 0; i--)
	{
		res[i] = (num1[i] - '0') + (num2[i] - '0') + step;
		res[i] += '0';
		//����
		if (res[i] > '9')
		{
			res[i] -= 10;
			step = 1;
		}
		else
		{
			step = 0;
		}
	}

	if (step == 1)
	{
		res.insert(0, 1, '1');
	}

	return res;
}

//����
string BigNum::sub(string num1, string num2)
{
	//λ������
	int len1 = num1.size();
	int len2 = num2.size();
	int diffNUm = abs(len1 - len2);
	int longSize = len1 > len2 ? len1 : len2;

	if (len1 < len2)
	{
		num1.insert(0, diffNUm, '0');
	}
	else
	{
		num2.insert(0, diffNUm, '0');
	}

	string res;
	res.resize(longSize);

	for (int i = longSize - 1; i >= 0; i--)
	{
		//�ж��Ƿ���Ҫ��λ
		if (num1[i] < num2[i])
		{
			num1[i] += 10;
			num1[i - 1]--;
		}

		res[i] = (num1[i] - '0') - (num2[i] - '0') + '0';
	}

	//ɾ��ǰ���0
	while ((res.size() > 1) && (res[0] == '0'))
	{
		res.erase(0, 1);
	}

	return res;
}

//�˷�
string BigNum::mul(string num1, string num2)
{
	//��λ���͵�������λ���ߵ��� ���Լ򻯼������
	if (num2.size() > num1.size())
	{
		num1.swap(num2);
	}

	string res;
	res = '0';
	for (int i = num2.size() - 1; i >= 0; i--)
	{
		//��ȡ��ǰ�����Ķ�Ӧλ��ֵ
		int curDigit = num2[i] - '0';
		int step = 0;
		//��ǰλ�˻����
		string tmp = num1;
		for (int j = tmp.size() - 1; j >= 0; j--)
		{
			//��λ���
			tmp[j] = (tmp[j] - '0') * curDigit + step;
			//���½�λ
			if (tmp[j] > 9)
			{
				step = tmp[j] / 10;
				tmp[j] = tmp[j] % 10;
			}
			else
			{
				step = 0;
			}
			//��ԭ���ַ�
			tmp[j] += '0';
		}

		//�ж����λ�Ƿ���Ҫ��λ
		if (step > 0)
		{
			tmp.insert(0, 1, step + '0');
		}
		//�������
		tmp.append(num2.size() - 1 - i, '0');
		//�ۼ�һ�γ˷��Ľ��
		res = add(res, tmp);
	}

	return res;
}

//��������������ʵ�֣�
pair<string, string> BigNum::dev(string num1, string num2)
{
	//��
	string res;
	//����
	string rem = num1;

	//���������зŴ󣬰���10�ı����Ŵ�
	int difNum = num1.size() - num2.size();
	num2.append(difNum, '0');
	for (int i = 0; i < difNum + 1; i++)
	{
		//��¼ִ�м��Ĵ���
		char count = '0';
		while (1)
		{
			if (less(rem, num2))
			{
				break;
			}
			rem = sub(rem, num2);
			count++;
		}
		res += count;

		//����������ʮ��
		num2.pop_back();
	}

	//ɾ��ǰ��'0'
	while ((res.size() > 1) && (res[0] == '0'))
	{
		res.erase(0, 1);
	}

	return make_pair(res, rem);
}

bool BigNum::less(string num1, string num2)
{
	if (num1.size() < num2.size())
	{
		return true;
	}
	else if (num1.size() > num2.size())
	{
		return false;
	}
	else
	{
		return num1 < num2;
	}
}
