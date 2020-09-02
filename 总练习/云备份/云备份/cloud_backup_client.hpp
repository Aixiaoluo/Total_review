#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include "httplib.h"

#define SERVER_IP "192.168.30.141"
#define SERVER_PORT 9000
#define LISTEN_DIR "./backup/"
#define STORAGE_FILE "./list.backup"

//�ļ���д����
class FileUtil
{
public:
	//���ļ��ж�ȡ����
	static bool Read(const std::string& name, std::string* body)
	{
		std::ifstream fs(name, std::ios::binary);
		if (fs.is_open() == false)
		{
			std::cout << "open file " << name << " failed" << std::endl;
			return false;
		}
		int64_t size = boost::filesystem::file_size(name);
		body->resize(size);
		fs.read(&(*body)[0], size);
		if (fs.good() == false)
		{
			std::cout << "read file " << name << " failed" << std::endl;
			return false;
		}
		fs.close();
		return true;
	}

	//���ļ���д������
	static bool Write(const std::string& name, const std::string& body)
	{
		//ofstream���ļ�Ĭ�ϸ���д��
		std::ofstream ofs(name, std::ios::binary);
		if (ofs.is_open() == false)
		{
			std::cout << "open file " << name << " failed" << std::endl;
			return false;
		}
		ofs.write(&body[0], body.size());
		if (ofs.good() == false)
		{
			std::cout << "write file" << name << " failed" << std::endl;
			return false;
		}
		ofs.close();
		return true;
	}
};

//���ݹ���ģ��
class DataManager
{
public:
	DataManager(const std::string& filename)
		:m_storage_file(filename)
	{

	}

	//������������
	bool Insert(const std::string& key, const std::string& val)
	{
		m_backup_list[key] = val;
		Storage();
		return true;
	}

	//ͨ���ļ����ƻ�ȡ�ļ���etag��Ϣ
	bool GetEtag(const std::string& key, std::string* val)
	{
		auto pos = m_backup_list.find(key);
		if (pos == m_backup_list.end())
		{
			return false;
		}
		*val = pos->second;
		return true;
	}

	//�־û��洢
	bool Storage()
	{
		//�����ݳ־û��洢����Ҫ�����ݶ���������л��洢
		//��������֯��src  dst \r\n
		std::stringstream tmp;
		for (auto it = m_backup_list.begin(); it != m_backup_list.end(); it++)
		{
			tmp << it->first << " " << it->second << "\r\n";
		}
		//�����ݱ��ݵ��ļ���
		FileUtil::Write(m_storage_file, tmp.str());
		return true;
	}

	//��ʼ������ԭ������
	bool InitLoad()
	{
		//�����ݵĳ־û��洢�ļ��м�������
		std::string body;
		if (FileUtil::Read(m_storage_file, &body) == false)
		{
			return false;
		}

		std::vector<std::string> list;
		boost::split(list, body, boost::is_any_of("\r\n"), boost::token_compress_off);
		for (auto& e : list)
		{
			size_t pos = e.find(" ");
			if (pos == std::string::npos)
			{
				continue;
			}
			std::string key = e.substr(0, pos);
			std::string val = e.substr(pos + 1);
			Insert(key, val);
		}
		return true;
	}

private:
	//�־û��洢�ļ�����
	std::string m_storage_file;
	//���ݵ��ļ���Ϣ
	std::unordered_map<std::string, std::string> m_backup_list;
};

DataManager data_manager(STORAGE_FILE);

//Ŀ¼���ģ��
class CloudClient
{
public:
	CloudClient(const std::string& listern_dir, const std::string& stroage_file, const std::string& server_ip, uint16_t server_port)
		:m_listen_dir(listern_dir)
		, m_storage_file(stroage_file)
		, m_server_ip(server_ip)
		, m_server_port(server_port)
	{

	}

	bool Start()
	{
		data_manager.InitLoad();
		while (1)
		{
			std::vector<std::string> list;
			GetBackUpFileList(&list);
			for (int i = 0; i < list.size(); i++)
			{
				std::string name = list[i];
				std::string pathname = m_listen_dir + name;
				std::string body;
				std::cout << pathname << "is need to backup" << std::endl;
				FileUtil::Read(pathname, &body);
				httplib::Client client(m_server_ip, m_server_port);
				std::string req_path = "/" + name;
				auto rsp = client.Put(req_path.c_str(), body, "application/octet-stream");
				if (rsp == NULL || (rsp == NULL && rsp->status != 200))
				{
					std::cout << pathname << "backup failed" << std::endl;
					continue;
				}
				std::string etag;
				GetEtag(pathname, &etag);
				data_manager.Insert(name, etag);

				std::cout << pathname << "backup success" << std::endl;
			}
			Sleep(1000);
		}
	}

	//��ȡ��Ҫ���ݵ��ļ��б�
	bool GetBackUpFileList(std::vector<std::string>* list)
	{
		//��Ŀ¼�������򴴽�Ŀ¼
		if (boost::filesystem::exists(m_listen_dir) == false)
		{
			boost::filesystem::create_directories(m_listen_dir);
		}
		//����Ŀ¼��أ���ȡָ��Ŀ¼�µ������ļ�����
		boost::filesystem::directory_iterator begin(m_listen_dir);
		boost::filesystem::directory_iterator end;
		for (; begin != end; ++begin)
		{
			if (boost::filesystem::is_directory(begin->status()))
			{
				//Ŀ¼����Ҫ���б���
				//����Ŀ¼ֱ�����������޲㼶Ŀ¼��
				continue;
			}
			std::string pathname = begin->path().string();
			std::string name = begin->path().filename().string();
			std::string cur_etag;
			std::string old_etag;
			//��ȡ��ǰetag
			GetEtag(pathname, &cur_etag);
			//��ȡԭ��etag
			data_manager.GetEtag(name, &old_etag);
			//��ǰetag��ԭ��etag����ȣ����ļ���Ҫ����
			if (cur_etag != old_etag)
			{
				list->push_back(name);
			}
		}
		return true;
	}

	//�����ļ���eatg��Ϣ
	static bool GetEtag(const std::string& pathname, std::string* etag)
	{
		//etag�ļ���С-�ļ����һ���޸�ʱ��
		int64_t fsize = boost::filesystem::file_size(pathname);
		time_t mtime = boost::filesystem::last_write_time(pathname);
		*etag = std::to_string(fsize) + "-" + std::to_string(mtime);
		return true;
	}
private:
	std::string m_listen_dir;//��ص�Ŀ¼����
	std::string m_storage_file;
	std::string m_server_ip;
	uint16_t m_server_port;
};