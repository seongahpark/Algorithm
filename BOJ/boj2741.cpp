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
	// endl�� ���� �ð��ʰ��� ���� \n���� �����Ͽ���.
	// ������ ���� ���� Ǯ �� endl ��� \n ����!
	return 0;
}
