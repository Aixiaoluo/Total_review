#include <iostream>
#include <string>
#include <map>

using namespace std;

//multimap�ĸ���
//1��multimap�ǹ���ʽ�����������ض��Ĵ��򣨰���key���Ƚϣ��洢�ɼ�key��ֵvalue��϶��ɵ�Ԫ��,�����ֵ��֮���key�����ظ�
//2����multimap�У���ֵkeyͨ�����������Ψһ��ʶԪ�أ�ֵvalue�д洢���key���������ݡ�
//3��multimap����ָ�����ϸ��������key��������
//4��multimap��ͨ����ֵ���ʵ���Ԫ�ر�unordered_multimap��������ʹ�õ�����ֱ�ӱ���multimap��Ԫ�ؿ��Եõ�����key���������
//5��multimap�ĵײ�ͨ����ƽ��������������������
//6��multimap��map��Ψһ������multimap�е�key�����ظ�����map��key��Ψһ��

int main()
{
	multimap<string, string> m;

	//��map�в���Ԫ��
	//����ֵ�Բ���map����pairֱ�ӹ����ֵ��
	m.insert(pair<string, string>("peach", "����"));

	//��male_pair���������ֵ��
	m.insert(make_pair("peach", "����"));

	//����key�����ڣ����׳��쳣
	//m.at("banana") = "�㽶";

	//����m�Ĵ�С
	cout << m.size() << endl;

	//����map�е�Ԫ��
	for (auto& e : m)
	{
		cout << e.first << "--->" << e.second << endl;
	}
	cout << endl;

	//ɾ��keyΪ"apple"��Ԫ��
	m.erase("apple");

	if (m.count("apple") == 1)
	{
		cout << "apple����" << endl;
	}
	else
	{
		cout << "apple��ɾ��" << endl;
	}
	system("pause");
	return 0;
}
