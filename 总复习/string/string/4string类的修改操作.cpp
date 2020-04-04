#include <iostream>
#include <string>
using namespace std;

void teststring1()
{
	string s;
	s.push_back(' ');//β��
	s.append("hello");//׷���ַ���
	s += ',';//׷���ַ�
	s += "world!";//׷���ַ���
	cout << s << endl;
	cout << s.c_str() << endl;//��c���Եķ�ʽ��ӡ�ַ���

	//��ȡfile�ĺ�׺
	string file("string.cpp");
	size_t pos = file.rfind(".");
	string suffix(file.substr(pos, file.size() - pos));
	cout << suffix << endl;

	//ȡ��url�е�����
	string url("http://www.cplusplus.com/reference/string/string/find/");
	cout << url << endl;
	size_t start = url.find("://");
	if (start == string::npos)
	{
		cout << "invalid url" << endl;
		return;
	}
	start += 3;
	size_t finish = url.find('/', start);
	string address = url.substr(start, finish - start);
	cout << address << endl;

	//ɾ��url�е�Э��ǰ׺
	pos = url.find("://");
	url.erase(0, pos + 3);
	cout << url << endl;
}

//ע��
//1����stringβ��׷���ַ�ʱ��s.push_back(c)/s.append(1, c)/s += 'c'���ַ�ʽʵ�ַ�ʽ��࣬һ�������string���+=�����õıȽ϶࣬+=���������������ӵ����ַ���Ҳ�������ַ���
//2����string����ʱ������ܹ����Ԥ�������ٸ��ַ���������ͨ��reverse�ѿռ�Ԥ����

int main()
{
	teststring1();
	system("pause");
	return 0;
}
