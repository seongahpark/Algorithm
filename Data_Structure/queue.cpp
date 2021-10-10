#include <iostream>
using namespace std;

class myQueue {
private:
	int arr[10] = { 0 };
	int front = 0, rear = 0;

public:
	void push() {
		if (((rear + 1) % 10) == front) {
			cout << "Queue is Full" << endl;
		}
		else {
			cout << "데이터를 입력하세요 : ";
			int data;
			cin >> data;
			rear = (rear + 1) % 10;
			arr[rear] = data;
		}
	}
	void pop() {
		if (front == rear) {
			cout << "Queue is Empty" << endl;
			return;
		}
		front = (front + 1) % 10;
	}
	void print() {
		if (front == rear) {
			cout << "Queue is Empty" << endl;
			return;
		}
		for (int i = (front+1)%10; i != (rear + 1)%10; i = (i + 1) % 10) {
			cout << i << " : " << arr[i] << endl;
		}
	}
};
int main() {
	int num;
	myQueue q;
	while (1) {
		cout << "번호를 입력해주세요 1. push / 2. pop / 3. print / 4. 종료" << endl;
		cin >> num;
		switch (num) {
		case 1:
			q.push();
			break;
		case 2:
			q.pop();
			break;
		case 3:
			q.print();
			break;
		case 4:
			return 0;
		default :
			cout << "잘못된 입력입니다." << endl;
		}
	}

	return 0;
}