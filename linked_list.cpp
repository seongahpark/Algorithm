#include <iostream>

using namespace std;

class myLinkedList {
private:
	class Node {
	public:
		int data;
		Node* nextNode;
	};
	Node* head = new Node;
	int size;

public:
	myLinkedList();
	void push();
	void pop();
	void print();
};

myLinkedList::myLinkedList() {
	head->nextNode = NULL;
	size = 0;
}

void myLinkedList::push() {
	int value;
	cout << "값을 입력하세요 : ";
	cin >> value;

	Node* NewNode = new Node;
	NewNode->data = value;
	NewNode->nextNode = NULL;

	if (head->nextNode == NULL) {
		head->nextNode = NewNode;
	}
	else {
		Node* pTmp = head;
		while (pTmp->nextNode != NULL) {
			pTmp = pTmp->nextNode;
		}
		pTmp->nextNode = NewNode;
	}

	size++;
}

void myLinkedList::pop() {
	int index;
	cout << "삭제할 인덱스를 입력하시오 : ";
	cin >> index;

	if (index >= size) {
		cout << "유효하지 않은 인덱스입니다" << endl;
		return;
	}

	Node* pTmp = head;
	Node* remove = head;

	for (int i = 0; i < index; i++) {
		pTmp = pTmp->nextNode;
		remove = remove->nextNode;
	}
	remove = remove->nextNode;
	pTmp->nextNode = remove->nextNode;
	remove->nextNode = NULL;
	delete remove;
	size--;
}

void myLinkedList::print() {
	cout << "Linked List print : ";
	Node* pTmp = head;
	for (int i = 0; i < size; i++) {
		pTmp = pTmp->nextNode;
		cout << pTmp->data << "->";
	}
	cout << "NULL" << endl;
}

int main() {
	int num;
	myLinkedList ml;
	while (1) {
		cout << "번호를 입력하세요 1.push 2.pop 3.print 4.종료 : ";
		cin >> num;

		switch (num) {
		case 1:
			ml.push();
			break;
		case 2:
			ml.pop();
			break;
		case 3:
			ml.print();
			break;
		case 4:
			return 0;
		default:
			cout << "잘못된 입력입니다." << endl;
		}
	}
	return 0;
}