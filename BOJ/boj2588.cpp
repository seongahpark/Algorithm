// ���� 2588�� ���� ����
#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;
	cin >> a >> b;
	int b1 = b / 100; //100�� �ڸ���
	int b2 = (b - b1*100) / 10; //10�� �ڸ���
	int b3 = b - (b1 * 100) - (b2 * 10); //1�� �ڸ���

	//(3), (4), (5) �� ���ʴ�� a�� 1���ڸ���, 10���ڸ���, 100���ڸ����� ���� ���� ���
	cout << a * b3 << endl;
	cout << a * b2 << endl;
	cout << a * b1 << endl;
	cout << a * b;
	return 0;
}