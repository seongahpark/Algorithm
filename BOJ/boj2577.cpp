#include <iostream>

using namespace std;     

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, mul;
	int arr[20] = { 0 }; // 최대가 1000*1000*1000 보다 작기 때문
	int num[10] = { 0 }; // 0~9까지 카운트 해줄 배열 생성
	int i=0; //자리수 카운트를 위해 변수 생성
	cin >> a >> b >> c;
	mul = a * b * c; // a, b, c의 곱을 저장

	while (mul != 0) {
		arr[i] = mul % 10; // 나머지 값으로 각 자리수에 해당하는 값들을 역순으로 저장
		mul /= 10; // 10으로 나눠줌으로써 자리수를 측정 가능
		i++; //자리수 +
	}

	for (int j = 0; j < 10; j++) { //각 자리수 별로 0부터 9까지 숫자가 있는지 체크
		for (int z = 0; z < i; z++) { //자리수에 해당하는 i까지 체크
			if (j == arr[z]) num[j]++;
		}
	}

	for (int z = 0; z < 10; z++) { // 출력용 코드
		cout << num[z] << "\n";
	}

	return 0;
}