#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int h, m;
	cin >> h >> m;

	if (m < 45) {
		m -= 45;
		m += 60; // �ð��� -1 �Ͽ����� ���� 60�� �����ش�
		h -= 1;
		if (h < 0) h = 23; //���� �ð��� 0���϶��� ���
	}
	else {
		m -= 45;
	}

	cout << h << " " << m;
	return 0;
}