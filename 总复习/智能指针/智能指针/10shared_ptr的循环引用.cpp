#include <iostream>
#include <memory>

using namespace std;

//ѭ�����õķ���
//1��node1��node2��������ָ�����ָ�������ڵ㣬���ü������1������Ҫ�ֶ�delete
//2��node1��m_pnextָ��node2��node2��m_prevָ��node1�����ü������2
//3��node1��node2���������ü�����1������m_next����ָ����һ���ڵ㣬����m_prev����ָ����һ���ڵ�
//4��m_next��node1�ĳ�Ա��m_prev��node2�ĳ�Ա��ֻ��node1��node2������m_next��m_prev�Ż���������͹�����ѭ�����ã�˭�������ͷ�

class ListNode
{
public:
	int m_data;
	shared_ptr<ListNode> m_prev;
	shared_ptr<ListNode> m_next;
public:
	~ListNode()
	{
		cout << "~ListNode()" << endl;
	}
};

int main()
{
	shared_ptr<ListNode> node1(new ListNode);
	shared_ptr<ListNode> node2(new ListNode);

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;

	node1->m_next = node2;
	node2->m_prev = node1;

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;
	system("pause");
	return 0;
}
