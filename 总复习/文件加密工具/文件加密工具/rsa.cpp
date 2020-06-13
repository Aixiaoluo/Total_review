#include "rsa.h"

rsa::rsa()
{
	getKeys();
}

//�ļ�����
void rsa::ecrept(const char* filename, const char* fileout)
{
	ifstream fin(filename, ifstream::binary);
	ofstream fout(fileout, ifstream::binary);

	if (!fin.is_open())
	{
		perror("input file open failed!");
		return;
	}

	char* buffer = new char[NUM];
	DataType* bufferOut = new DataType[NUM];

	while (!fin.eof())
	{
		fin.read(buffer, NUM);
		//gcount�������һ�ζ�ȡ���ֽ���
		int curBytes = fin.gcount();
		for (int i = 0; i < curBytes; i++)
		{
			bufferOut[i] = encryption((DataType)buffer[i], m_Key.m_EKey, m_Key.m_NKey);
		}

		fout.write((char*)bufferOut, curBytes*sizeof(DataType));
	}

	delete[] buffer;
	delete[] bufferOut;

	fin.close();
	fout.close();
}

//�ļ�����
void rsa::dcrept(const char* filename, const char* fileout)
{
	ifstream fin(filename, ifstream::binary);
	ofstream fout(fileout, ofstream::binary);

	if (!fin.is_open())
	{
		perror("input file open failed!");
		return;
	}

	DataType* buffer = new DataType[NUM];
	char* bufferOut = new char[NUM];

	while (!fin.eof())
	{
		fin.read((char*)buffer, NUM * sizeof(DataType));
		int num = fin.gcount();
		num /= sizeof(DataType);
		for (int i = 0; i < num; i++)
		{
			bufferOut[i] = (char)decryption(buffer[i], m_Key.m_Dkey, m_Key.m_NKey);
		}

		fout.write(bufferOut, num);
	}

	delete[] buffer;
	delete[] bufferOut;

	fin.close();
	fout.close();
}

//1�����������������p��q
DataType rsa::getPrime()
{
	//srand(time(nullptr));
	cout << "1�����������������p��q" << endl;
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(0, DataType(1) << 256);

	DataType prime;
	while (1)
	{
		prime = dist(gen);
		if (isPrimeBigNum(prime))
		{
			break;
		}
	}

	return prime;
}

//�ж�һ�����Ƿ�������
bool rsa::isPrime(DataType data)
{
	if (data < 0)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(data); i++)
	{
		if (data % i == 0)
		{
			return false;
		}
	}

	return true;
}

//�������Լ��
bool rsa::isPrimeBigNum(DataType data)
{
	//cout << "�������Լ��" << endl;
	boost::random::mt19937 gen(time(nullptr));

	if (miller_rabin_test(data, 25, gen))
	{
		if (miller_rabin_test((data - 1) / 2, 25, gen))
		{
			return true;
		}
	}

	return false;
}

//2������n ����n = p * q
DataType rsa::getNkey(DataType prime1, DataType prime2)
{
	cout << "2������n ����n = p * q" << endl;
	return prime1 * prime2;
}

//3����n��ŷ������������f(n) = f(p) * f(q) = (p - 1)*(q - 1)
DataType rsa::getOrla(DataType prime1, DataType prime2)
{
	cout << "3����n��ŷ������������f(n) = f(p) * f(q) = (p - 1)*(q - 1)" << endl;
	return (prime1 - 1) * (prime2 - 1);
}

//4����EKey���ȡe  1 < e < f(n) ��e �� f(n)����
DataType rsa::getEKey(DataType orla)
{
	cout << "4����EKey���ȡe  1 < e < f(n) ��e �� f(n)����" << endl;
	//srand(time(nullptr));
	boost::random::mt19937 gen(time(nullptr));
	boost::random::uniform_int_distribution<DataType> dist(2, orla);

	DataType EKey;
	while (1)
	{
		EKey = dist(gen);
		if (getCommonDivisor(EKey, orla) == 1)
		{
			return EKey;
		}
	}
}

//5����DKey����e����f(n)��ģ��Ԫ��d (d * e) % f(n) = 1
DataType rsa::getDKey(DataType EKey, DataType orla)
{
	cout << "5����DKey����e����f(n)��ģ��Ԫ��d (d * e) % f(n) = 1" << endl;
	DataType DKey;
	DKey = orla / EKey;
	while (1)
	{
		if ((DKey * EKey) % orla == 1)
		{
			return DKey;
		}
		DKey++;
	}
}

//���ܹ��̣�ģ������ ��a^b%c
DataType rsa::encryption(DataType data, DataType EKey, DataType NKey)
{
	//i: 0,����, ���һλ
	DataType Ai = data;
	DataType msgE = 1;
	//data^Key%NKey
	while (EKey)
	{
		if (EKey & 1)
		{
			msgE = (msgE * Ai) % NKey;
		}
		EKey >>= 1;
		Ai = (Ai * Ai) % NKey;
	}

	return msgE;
}

//���ܹ��̣�ģ������ ��a^b%c
DataType rsa::decryption(DataType data, DataType DKey, DataType NKey)
{
	DataType Ai = data;
	DataType msgE = 1;
	//data^Key%NKey
	while (DKey)
	{
		if (DKey & 1)
		{
			msgE = (msgE * Ai) % NKey;
		}
		DKey >>= 1;
		Ai = (Ai * Ai) % NKey;
	}

	return msgE;
}

//�������������Լ����շת�������
DataType rsa::getCommonDivisor(DataType data1, DataType data2)
{
	DataType res = data1 % data2;
	while (res)
	{
		data1 = data2;
		data2 = res;
		res = data1 % data2;
	}

	return data2;
}

void rsa::getKeys()
{
	DataType prime1 = getPrime();
	DataType prime2 = getPrime();
	while (prime1 == prime2)
	{
		prime2 = getPrime();
	}

	DataType orla = getOrla(prime1, prime2);
	m_Key.m_NKey = getNkey(prime1, prime2);
	m_Key.m_EKey = getEKey(orla);
	m_Key.m_Dkey = getDKey(m_Key.m_EKey, orla);
}

Key rsa::getKey()
{
	return m_Key;
}