#include <iostream>

using namespace std;

//��������
//�����������͵Ŀռ䣬new��malloc��realloc�� calloc�������ƣ�delete��free��������
//new/delete������ͷŵ��ǵ����ռ䣬new[]��delete[]������ͷŵ��������ռ�
//new����ռ�ʧ��ʱ���׳��쳣����malloc�Ƿ���NULL

//�Զ�������
//newԭ��
//1������operator new����ռ�
//2��������Ŀռ���ִ�й��캯������ɶ���Ĺ���
//deleteԭ��
//1���ڿռ���ִ��������������ɶ�������Դ��������
//2������operator delete�����ͷŶ���Ŀռ�
//new[]ԭ��
//1������operator new[]��������operator new[]��ʵ�ʵ���operator new�������N������ռ������
//2��������Ŀռ��Ͻ���N�ι��캯��
//delete[]ԭ��
//1�����ͷŶ���ռ���ִ��N���������������N����������Դ������
//2������operator delete[]�����ͷ���Դ��ʵ����operator delete[]�е���operator delete���ͷſռ�

int main()
{

	system("pause");
	return 0;
}
