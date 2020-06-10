#pragma once

typedef long DataType;

struct Key
{
	DataType m_EKey;
	DataType m_Dkey;
	DataType m_NKey;
};

//1�����������������p��q
//2������n ����n = p * q
//3����n��ŷ������������f(n) = f(p) * f(q) = (p - 1)*(q - 1)
//4�����ȡe  1 < e < f(n) ��e �� f(n)����
//5������e����f(n)��ģ��Ԫ��d (d * e) % f(n) = 1
//6��������Կ(e, n) ˽Կ(d, n)

class rsa
{
public:
	//1�����������������p��q
	DataType getPrime();
	//�ж�һ�����Ƿ�������
	bool isPrime(DataType data);
	//2������n ����n = p * q
	DataType getNkey(DataType prime1, DataType prime2);
	//3����n��ŷ������������f(n) = f(p) * f(q) = (p - 1)*(q - 1)
	DataType getOrla(DataType prime1, DataType prime2);
	//4����EKey���ȡe  1 < e < f(n) ��e �� f(n)����
	DataType getEKey(DataType orla);
	//5����DKey����e����f(n)��ģ��Ԫ��d (d * e) % f(n) = 1
	DataType getDKey(DataType EKey, DataType orla);
	//���ܹ��̣�ģ������ ��a^b%c
	DataType encryption(DataType data, DataType EKey, DataType NKey);
	//���ܹ��̣�ģ������ ��a^b%c
	DataType decryption(DataType data, DataType DKey, DataType NKey);
	//�������������Լ��
	DataType getCommonDivisor(DataType data1, DataType data2);
	//�������е�key
	void getKeys();
	Key getKey();
private:
	Key m_Key;
};