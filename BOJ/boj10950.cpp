#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	int* arr = new int[num]; //배열 동적할당 방법
	//배열 선언시 식에 상수값이 있어야되므로 동적할당을 이용하였다.
	int a, b;
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr; //메모리 해제

	/*
	* 여담 ) 입력을 다 받고 한꺼번에 출력해야되는 줄 알고
	* 동적 할당을 사용하였는데 그냥 한 줄마다 읽고 바로 출력해도
	* 되는 문제였다고 한다 ;ㅅ;
	* 
	* ex) 
	* for (int i=0;i<num;i++){
	*	cin >> a >> b;
		cout << a+b << endl;
		}
	*/
	return 0;
}