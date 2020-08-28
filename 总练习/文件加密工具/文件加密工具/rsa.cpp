#include "rsa.h"

//�������Լ��
bool RSA::isPrime(DataType num)
{
	boost::random::mt19937 gen(time(nullptr));
	if (boost::multiprecision::miller_rabin_test(num, 25, gen))
	{
		if (boost::multiprecision::miller_rabin_test((num - 1) / 2, 25, gen))
		{
			return true;
		}
	}

	return false;
}

//������ȡģ���� ����a^b%c
DataType RSA::ecrept(DataType a, DataType b, DataType c)
{
	DataType res = 1;
	DataType A = a % c;

	while (b)
	{
		if (b & 1)
		{
			res = (res * A) % c;
		}
		b >>= 1;
		A = (A * A) % c;
	}

	return res;
}

//��ȡһ������
DataType RSA::getPrime()
{
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(0, DataType(1) << 100);
	DataType num = dist(gen);

	while (1)
	{
		if (isPrime(num))
		{
			break;
		}
	}

	return num;
}

//��ȡn  n = p * q
DataType RSA::getNkey(DataType p, DataType q)
{
	return p * q;
}

//��ȡorla������ֵ  orla(n) = (p - 1) * (q - 1)
DataType RSA::getOrla(DataType p, DataType q)
{
	return (p - 1) * (q - 1);
}

//��ȡ������Կe  e����1 <= e <= orla(n)
DataType RSA::getEkey(DataType orla)
{
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(0, DataType(1) << 1023);
	DataType eKey = dist(gen);

	while (1)
	{
		eKey = eKey % orla;
		if (eKey > 1 && getGcd(eKey, orla) == 1)
		{
			return eKey;
		}
	}
}

//��ȡ������Կd d����de mod orla = 1
DataType RSA::getDkey(DataType eKey, DataType orla)
{
	DataType dKey = orla / eKey;
	while (1)
	{
		if (dKey * eKey % orla == 1)
		{
			return dKey;
		}
		dKey++;
	}
}

//�������������Լ��
DataType RSA::getGcd(DataType a, DataType b)
{
	if (b == 0)
	{
		return a;
	}
	return getGcd(b, a % b);
}

//��չŷ������㷨�������Լ���Ͷ�Ӧ��һ��� ����ax + by = gcd
DataType RSA::getExgcd(DataType a, DataType b, DataType x, DataType y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
	}
	DataType gcd = getExgcd(b, a % b, x, y);
	DataType x1 = x;
	DataType y1 = y;
	x = y1;
	y = x1 - (a / b) * y1;
	return gcd;
}
