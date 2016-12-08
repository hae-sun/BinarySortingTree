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
			std::cerr << "�����ڵ�ʱ�ڴ����ʧ��";	exit(1);
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



BSTPnode BST::search(int p, BSTPnode ptr) {                //β�ݹ飬����Ƕ������������ŵ㣬����ȫ�������Ļ���û��������

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