#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	while (1) {
		cin >> a >> b;
		if (cin.eof() == true) break;
		// cin���� �Է� ���� ���� eof�϶� true�� ��ȯ�ϴ� Ư�� �̿�
		else cout << a + b << "\n";
	}
	return 0;
}