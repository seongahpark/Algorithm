#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	string* arr = new string[num]; // 입력받을 줄
	int* score = new int[num]; // 각 줄마다 점수 기록할 배열
	int count = 0; // O 가 있을때마다 점수를 올려줄 변수

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		count = 0; //라인을 시작 할 때마다 count를 초기화해줘야 이전 결과에 방해받지 않는다
		score[i] = 0; //배열 동적 할당시 선언과 초기화를 동시에 할 수 없어 for문에서 초기화
		for (int j = 0; j < arr[i].length(); j++) {
			if (arr[i].at(j) == 'O') {
				count++; // O가 있을 때 마다 누적해서 count가 증가
				score[i] += count; //증가한 count 값을 score에 저장
			}
			else {
				count = 0; //X가 나올 경우 count를 다시 초기화해준다
			}
		}
	}

	for (int i = 0; i < num; i++) { //결과 출력
		cout << score[i] << "\n";
	}

	delete[] arr;
	delete[] score;
	return 0;
}