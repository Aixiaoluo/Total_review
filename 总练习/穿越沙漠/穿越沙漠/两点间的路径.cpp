//#include "MyGraph.h"
//
//using namespace std;
//
//MyGraph::MyGraph(int VertexNum)
//{
//	this->vertexNum = VertexNum;
//	//���ٷ��ʱ������
//	this->visitedFlag = new bool[vertexNum];
//	//�����ڽӾ���
//	this->matrix = new bool*[vertexNum];
//	for (int i = 0; i < vertexNum; i++)
//	{
//		this->visitedFlag[i] = false;
//		this->matrix[i] = new bool[vertexNum];
//		//����������Ԫ��ȫ����ʼ��Ϊ0
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = 0;
//	}
//}
//
///**
// * �޲������캯����ͨ��createTestData����������һ���ڽӾ����������
// * ���������㷨�Ĳ���
// */
//MyGraph::MyGraph()
//{
//	this->vertexNum = 27;
//	//���ٷ��ʱ������
//	this->visitedFlag = new bool[vertexNum];
//	//�����ڽӾ���
//	this->matrix = new bool*[vertexNum];
//	for (int i = 0; i < vertexNum; i++)
//	{
//		this->matrix[i] = new bool[vertexNum];
//		this->visitedFlag[i] = false;
//		//����������Ԫ��ȫ����ʼ��Ϊ0
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = 0;
//	}
//	//��ʼ���ڽӾ���
//	bool initMatrix[27][27] = {
//			{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//			{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//			{0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
//			{0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
//			{0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
//			{0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1},
//			{0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
//			{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0},
//			{0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0},
//			{1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1},
//			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0}
//	};
//	//��ֵ
//	for (int i = 0; i < vertexNum; i++)
//		for (int j = 0; j < vertexNum; j++)
//			this->matrix[i][j] = initMatrix[i][j];
//	printMatrix();
//}
//
//
//MyGraph::~MyGraph()
//{
//	for (int i = 0; i < vertexNum; i++)
//		delete[] matrix[i];
//	delete matrix;
//	delete[]visitedFlag;
//}
//
///**
// * ����ڽӾ���
// */
//void MyGraph::printMatrix()
//{
//	for (int i = 0; i < vertexNum; i++)
//	{
//		for (int j = 0; j < vertexNum; j++)
//			cout << matrix[i][j] << "  ";
//		cout << endl;
//	}
//}
//
///**
// * ����row��column�е��ڽӾ���ֵ
// */
//void MyGraph::updateMatrix(int row, int column)
//{
//	//����������ͼ���ʸ��º�ľ���ֵ��һ���Գƾ���
//	matrix[row][column] = true;
//	matrix[column][row] = true;
//}
//
///**
// * ��ȡrow��column�е��ڽӾ����ֵ
// */
//bool MyGraph::getMatrixValue(int row, int column)
//{
//	return this->matrix[row][column];
//}
//
///**
// * ���������ڵ�֮�������·��
// */
//void MyGraph::getPathofTwoNode(int startNode, int endNode)
//{
//	//����������ȱ����ķ�ʽ�����������ڵ�֮�������·��
//	visitedFlag[startNode] = true;
//	pathStack.push_back(startNode);
//	findPath(startNode, endNode);
//}
//
//void MyGraph::findPath(int startNode, int endNode)
//{
//	if (startNode == endNode)
//	{
//		//�ҵ�һ��·�������·��
//		cout << "�ҵ�һ��·��";
//		for (int node : pathStack)
//			cout << node << "  ";
//		cout << endl;
//		visitedFlag[*(pathStack.end() - 1)] = false;
//		pathStack.pop_back();
//		return;
//	}
//	else
//	{
//		//�ҵ�startNode����û����ջ���ڽӵ�
//		int unStackedNum = 0;
//		for (int i = 0; i < vertexNum; i++)
//		{
//			if (matrix[startNode][i] && !visitedFlag[i])
//			{
//				unStackedNum++;
//				visitedFlag[i] = true;
//				pathStack.push_back(i);
//				findPath(i, endNode);
//			}
//		}
//		visitedFlag[*(pathStack.end() - 1)] = false;
//		pathStack.pop_back();
//	}
//}
//
//int main()
//{
//
//	MyGraph graph = MyGraph();
//	graph.getPathofTwoNode(1, 15);
//	return 0;
//}