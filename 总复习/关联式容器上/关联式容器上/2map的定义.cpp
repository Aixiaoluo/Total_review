#include <iostream>
#include <string>
#include <map>

using namespace std;

//map�ĸ���
//1��map�ǹ���ʽ�����������ض��Ĵ��򣨰���key���Ƚϣ��洢�ɼ�key��ֵvalue��϶��ɵ�Ԫ��
//2����map�У���ֵkeyͨ�����������Ψһ��ʶԪ�أ�ֵvalue�д洢���key���������ݡ�
//3��map���ռ�key���Ƚ�����
//4��map��ͨ����ֵ���ʵ���Ԫ�ر�unordered_map����������map�������˳���Ԫ�ؽ���ֱ�ӵ���
//5��map֧���±���ʣ���map[key] = value
//6��map�ĵײ�ͨ����ƽ��������������������

int main()
{
	map<string, string> m;

	//��map�в���Ԫ��
	//����ֵ�Բ���map����pairֱ�ӹ����ֵ��
	m.insert(pair<string, string>("peach", "����"));

	//��male_pair���������ֵ��
	m.insert(make_pair("peach", "����"));

	//��operator[]��map�в���Ԫ��

	//operator[]��ԭ��
	//��<key, T()>����һ����ֵ�ԣ�Ȼ�����insert()�������ü�ֵ�Բ��뵽map��
	//���key�Ѿ����ڣ�����ʧ�ܣ�insert�������ظ�key����λ�õĵ�����
	//���key�����ڣ�����ɹ���insert���������²���Ԫ������λ�õĵ�����
	//operator[]���insert����ֵ��ֵ���е�value����
	m["apple"] = "ƻ��";

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

	//keyΨһ�������ظ����룬�����ʧ��
	auto res = m.insert(make_pair("peach", "����~"));

	if (res.second)
	{
		cout << "<peach, ����>����map�У��Ѿ�����" << endl;
	}
	else
	{
		cout << "��ֵΪpeach��Ԫ���Ѵ��ڣ�" << res.first->first << "--->" << res.first->second << "����ʧ��" << endl;
	}

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
