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
	void insert();
	void remove();
};

myLinkedList::myLinkedList() {
	head->nextNode = NULL;
	size = 0;
}

void myLinkedList::push() {
	int value;
	cout << "���� �Է��ϼ��� : ";
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
	if (size == 0) {
		cout << "����Ʈ�� ����ֽ��ϴ�." << endl;
		return;
	}

	Node* pTmp = head;
	Node* remove = head;

	for (int i = 0; i < size - 1; i++) {
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

void myLinkedList::insert() {
	cout << "�����͸� ������ ��ġ�� �Է��ϼ���" << endl;
	int index;
	cin >> index;

	if (index > size) {
		cout << "��ȿ���� ���� index �Դϴ�" << endl;
		return;
	}

	cout << "������ �����͸� �Է��ϼ��� : " << endl;
	int data;
	cin >> data;

	Node* NewNode = new Node;
	NewNode->data = data;
	NewNode->nextNode = NULL;

	if (head->nextNode == NULL) {
		head->nextNode = NewNode;
	}
	else {
		Node* pTmp = head;
		for (int i = 0; i < index; i++) {
			pTmp = pTmp->nextNode;
		}
		NewNode->nextNode = pTmp->nextNode;
		pTmp->nextNode = NewNode;
	}

	size++;
}

void myLinkedList::remove() {
	int index;
	cout << "������ �ε����� �Է��Ͻÿ� : ";
	cin >> index;

	if (index >= size) {
		cout << "��ȿ���� ���� �ε����Դϴ�" << endl;
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

int main() {
	int num;
	myLinkedList ml;
	while (1) {
		cout << "��ȣ�� �Է��ϼ��� 1.push 2.pop 3.print 4.insert 5.remove 0.���� : ";
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
			ml.insert();
			break;
		case 5:
			ml.remove();
			break;
		case 0:
			return 0;
		default:
			cout << "�߸��� �Է��Դϴ�." << endl;
		}
	}
	return 0;
}