#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cout << i << "\n";
	}
	// endl을 쓰면 시간초과가 나서 \n으로 수정하였다.
	// 앞으로 코테 문제 풀 때 endl 대신 \n 쓰기!
	return 0;
}
