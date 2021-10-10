// 백준 2588번 곱셈 문제
#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;
	cin >> a >> b;
	int b1 = b / 100; //100의 자리수
	int b2 = (b - b1*100) / 10; //10의 자리수
	int b3 = b - (b1 * 100) - (b2 * 10); //1의 자리수

	//(3), (4), (5) 는 차례대로 a와 1의자리수, 10의자리수, 100의자리수를 곱한 값의 결과
	cout << a * b3 << endl;
	cout << a * b2 << endl;
	cout << a * b1 << endl;
	cout << a * b;
	return 0;
}