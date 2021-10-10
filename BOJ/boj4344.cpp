#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	int* arr = new int[num]; // 각 라인의 첫 번째 수를 기록하기 위한 배열
	double* score = new double[num]; // 각 라인의 평균 넘는 사람의 비율을 기록하기 위한 배열

	for (int i = 0; i < num; i++) {
		double sum = 0; // 라인 별 합계를 기록
		double avg = 0; // 라인 별 평균 기록
		int chk = 0; // 평균을 넘는 학생 체크 변수
		cin >> arr[i];
		int* tmp = new int[arr[i]]; // 첫번째 수에 따라 들어올 배열의 개수가 달라지므로
		//임시 배열을 동적으로 할당해준다
		for (int j = 0; j < arr[i]; j++) {
			cin >> tmp[j];
			sum += tmp[j];
		}

		avg = (double)sum / arr[i]; // 형 변환
		for (int z = 0; z < arr[i]; z++) {
			if (tmp[z] > avg) chk++; // 평균을 넘는 사람만 chk 변수에 기록
		}
		score[i] = (double)chk / arr[i] * 100; // % 비율로 나타내야되기 때문에 100을 곱해줌
	}

	for (int i = 0; i < num; i++) {
		cout << fixed << setprecision(3) << score[i] << "%\n"; // 소수점 3자리까지만 출력을 하기 위해 fixed로 소숫점 3자리 출력
	}

	return 0;
}