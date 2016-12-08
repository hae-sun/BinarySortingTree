#include"BST.h"

void create(BST* &);
void insert(BST*);
void search(BST*);

int main() {
	cout << endl << "**           二叉排序树             **";
	cout << endl << "======================================";
	cout << endl << "**          1--建立二叉排序树       **";
	cout << endl << "**          2--插入元素             **";
	cout << endl << "**          3--查询元素             **";
	cout << endl << "**          4--退出程序             **";
	cout << endl << endl << endl;

	int choice;
	BST * bst = NULL;
	while (true) {
		cout << endl << "Please select:";
		cin >> choice;
		switch (choice) {
		case 1:   create(bst); break;
		case 2:   insert(bst); break;
		case 3:   search(bst); break;
		case 4:   exit(0); break;
		default: break;
		}
	}

	return 0;
}

void create(BST * & ptr) {
	if (ptr)
	{
		delete ptr;
		ptr = NULL;
	}
	
	ptr = new BST;
	ptr->outPut(ptr->getRoot()->leftChild);
	cout << endl << endl << endl;
}


void insert(BST* ptr) {
	int data;
	cout << "Please input key which inserted:";
	cin >> data;
	ptr->insert(data, ptr->getRoot()->leftChild);
	ptr->outPut(ptr->getRoot()->leftChild);
	cout << endl << endl << endl;
}


void search(BST* ptr) {
	int data;
	cout << "Please input key which searched:";
	cin >> data;
	if (ptr->search(data, ptr->getRoot()->leftChild))
		cout << endl << "search success";
	else
		cout << endl << "search failure";

	cout << endl << endl << endl;
}