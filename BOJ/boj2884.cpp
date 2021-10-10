#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int h, m;
	cin >> h >> m;

	if (m < 45) {
		m -= 45;
		m += 60; // 시간을 -1 하였으니 분을 60분 더해준다
		h -= 1;
		if (h < 0) h = 23; //시작 시각이 0시일때를 고려
	}
	else {
		m -= 45;
	}

	cout << h << " " << m;
	return 0;
}