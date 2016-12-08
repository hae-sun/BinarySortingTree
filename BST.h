#pragma once
#include"iostream"
using std::cin;
using std::cout;
using std::endl;


typedef struct  BSTnode{
	int data = -1;
	BSTnode * leftChild  = NULL;
	BSTnode * rightChild = NULL;
	BSTnode() {};
	BSTnode(int d) :data(d) {};
}BSTnode, * BSTPnode;                           //BSTnode ��ʾ�������ڵ㣬 BSTPnode��ʾ�ڵ�ָ������



class BST
{
public:
	BST();                                 //��������������
	~BST() {};
	bool insert(int, BSTPnode &);
	void outPut(BSTPnode);
	BSTPnode & getRoot();
	BSTPnode search(int, BSTPnode);

private:
	BSTPnode root = NULL;
};





