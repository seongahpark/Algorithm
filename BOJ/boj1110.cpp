#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int f_num, num, count = 1;
	cin >> f_num;
	int a, b;
	if (f_num < 0 || f_num > 99) return 0;
	num = f_num;
	while (1) {
		a = num / 10; //10자리 수 추출
		b = num % 10; //1의자리 수 추출
		
		int tmp = b; // 1의 자리를 임시로 저장하여 새 연산으로부터 방해받지 않도록 함
		b = (a + b) % 10; //1의자리 + 10의자리한 수의 1의자리를 추출
		a = tmp; //기존의 1의 자리 값을 갖고옴

		num = 10 * a + b;
		if (f_num == num) break; //첫 입력과 새로 연산한 수가 같을 때 종료
		else count++; //아닐 시 count
	}
	cout << count;
	return 0;
}