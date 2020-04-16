#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//�ļ��Ĳ������裺
//1������һ���ļ�������
//2��ʹ���ļ��������һ�������ļ�
//3��ʹ����ȡ�������������ļ����ж�д����
//4���ر��ļ�

class ServerInfo
{
public:
	char m_ip[32];//ip
	int m_port;//�˿�
};

class ConfigManger
{
public:
	ConfigManger(const char* configfile = "bitserver.config")
		:m_configfile(configfile)
	{

	}

	void WriteBin(const ServerInfo& info)
	{
		ofstream ofs(m_configfile, ifstream::in | ifstream::binary);
		ofs.write((const char*)& info, sizeof(ServerInfo));
		ofs.close();
	}

	void ReadBin(ServerInfo& info)
	{
		ifstream ifs(m_configfile, ifstream::out | ifstream::binary);
		ifs.read((char*)& info, sizeof(ServerInfo));
		ifs.close();
	}

	void WriteText(const ServerInfo& info)
	{
		ofstream ofs(m_configfile);
		ofs << info.m_ip << endl;
		ofs << info.m_port << endl;
		ofs.close();
	}

	void ReadText(ServerInfo& info)
	{
		ifstream ifs(m_configfile);
		ifs >> info.m_ip;
		ifs >> info.m_port;
		ifs.close();
	}

private:
	string m_configfile;//�����ļ�
};

int main()
{
	ConfigManger cfgMgr;
	ServerInfo wtinfo;
	ServerInfo rdinfo;
	strcpy(wtinfo.m_ip, "127.0.0.1");
	wtinfo.m_port = 80;

	// �����ƶ�д
	cfgMgr.WriteBin(wtinfo);
	cfgMgr.ReadBin(rdinfo);
	cout << rdinfo.m_ip << endl;
	cout << rdinfo.m_port << endl;

	// �ı���д
	cfgMgr.WriteText(wtinfo);
	cfgMgr.ReadText(rdinfo);
	cout << rdinfo.m_ip << endl;
	cout << rdinfo.m_port << endl;
	system("pause");
	return 0;
}
