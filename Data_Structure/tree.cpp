#include <iostream>

using namespace std;

class myTree {
private:
	class myNode {
	public:
		int data;
		myNode* pLeft;
		myNode* pRight;
	};

	myNode* root = NULL;
	int depth;

public:
	void push();
	void print();
	void printNode(myNode* pN);
};

void myTree::push() {
	myNode* pNode = new myNode;
	pNode->pLeft = NULL;
	pNode->pRight = NULL;
	
	cout << "데이터를 입력하세요 : ";
	cin >> pNode->data;
	
	if (root == NULL) {
		root = pNode;
		return;
	}

	myNode* tmp = root;
	while (1) {
		if (tmp->data > pNode->data) {
			if (tmp->pLeft == NULL) {
				tmp->pLeft = pNode;
				break;
			}
			else {
				tmp = tmp->pLeft;
			}
		}
		else if (tmp->data < pNode->data) {
			if (tmp->pRight == NULL) {
				tmp->pRight = pNode;
				break;
			}
			else {
				tmp = tmp->pRight;
			}
		}
		else if (tmp->data == pNode->data) {
			cout << "같은 데이터가 존재합니다" << endl;
			delete pNode;
			break;
		}
	}
}

void myTree::print() {
	printNode(root);
}

void myTree::printNode(myNode* pN) {
	if (pN == NULL) return;
	printNode(pN->pLeft);
	cout << pN->data << " ";
	printNode(pN->pRight);
}

int main() {
	myTree mt;
	int num;
	while (1) {
		cin >> num;
		switch (num) {
		case 1:
			mt.push();
			break;
		case 2:
			mt.print();
			break;
		case 0:
			return 0;
		default:
			cout << "잘못된 입력입니다" << endl;
		}
	}
	return 0;
}