#include <iostream>

using namespace std;

class myStack {
private:
	int arr[10] = { 0 }; //stack�� �� ũ�⸦ 10���� ��
	int top = -1;

public:
	void push();
	void pop();
	void print();
};

void myStack::push() {
	if(top < 9){
		int num;
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;
		top++;
		arr[top] = num;
	}
	else {
		cout << "stack is full" << endl;
	}
}

void myStack::pop() {
	if (top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		arr[top] = 0;
		top--;
	}
}

void myStack::print() {
	if (top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		for (int i = 0; i <= top; i++) {
			cout << i << " : " << arr[i] << endl;
		}
	}
}

int main() {
	myStack ms;
	int inp;

	while (1) {
		cout << "��ȣ�� �Է��Ͻÿ� 1. push / 2. pop / 3. print / 4. ���� " << endl;
		cin >> inp;
		switch (inp) {
		case 1:
			ms.push();
			break;
		case 2:
			ms.pop();
			break;
		case 3:
			ms.print();
			break;
		case 4:
			return 0;
		default:
			cout << "�߸��� �Է��Դϴ�" << endl;
		}
	}
	return 0;
}