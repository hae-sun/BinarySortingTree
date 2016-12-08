#include"BST.h"



BST::BST() {
	root = new BSTnode;
	cout << "Please input key to create Bsort_Tree:";
	int temp;
	cin >> temp;
	while (-1 != temp) {
		insert(temp, root->leftChild);
		cin >> temp;
	}
	root->rightChild = root->leftChild;
}


bool BST::insert(int data, BSTPnode & ptr) {
	if (ptr == NULL){
		ptr = new BSTnode(data);
		if (!ptr)
		{
			std::cerr << "创建节点时内存分配失败";	exit(1);
		}

		return true;
	}
	else if (data < ptr->data) {
		insert(data, ptr->leftChild);
	}
	else if (data > ptr->data) {
		insert(data, ptr->rightChild);
	}
	else if (data == ptr->data) {
		cout << "The input key(" << data << ")is have in!" << endl;
	}
	else return false;
}



void BST::outPut(BSTPnode p) {
	if (p == NULL)
		return;
	outPut(p->leftChild);
	cout << p->data << "->";
	outPut(p->rightChild);
	   return;
}



BSTPnode BST::search(int p, BSTPnode ptr) {                //尾递归，这就是二叉搜索树的优点，否则全部遍历的话就没有意义了

	if (!ptr)
		return NULL;
	else if (p < ptr->data)
		return search(p, ptr->leftChild);
	else  if (p > ptr->data)
		return search(p, ptr->rightChild);
	else
	{
		return ptr;
	}
		
}

BSTPnode & BST::getRoot() {
	return root;
}