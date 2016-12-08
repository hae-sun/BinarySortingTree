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
}BSTnode, * BSTPnode;                           //BSTnode 表示二叉树节点， BSTPnode表示节点指针类型



class BST
{
public:
	BST();                                 //创建二叉搜索树
	~BST() {};
	bool insert(int, BSTPnode &);
	void outPut(BSTPnode);
	BSTPnode & getRoot();
	BSTPnode search(int, BSTPnode);

private:
	BSTPnode root = NULL;
};





