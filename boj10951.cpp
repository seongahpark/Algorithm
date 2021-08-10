#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	while (1) {
		cin >> a >> b;
		if (cin.eof() == true) break;
		// cin으로 입력 받은 값이 eof일때 true를 반환하는 특성 이용
		else cout << a + b << "\n";
	}
	return 0;
}