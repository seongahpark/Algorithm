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
		a = num / 10; //10�ڸ� �� ����
		b = num % 10; //1���ڸ� �� ����
		
		int tmp = b; // 1�� �ڸ��� �ӽ÷� �����Ͽ� �� �������κ��� ���ع��� �ʵ��� ��
		b = (a + b) % 10; //1���ڸ� + 10���ڸ��� ���� 1���ڸ��� ����
		a = tmp; //������ 1�� �ڸ� ���� �����

		num = 10 * a + b;
		if (f_num == num) break; //ù �Է°� ���� ������ ���� ���� �� ����
		else count++; //�ƴ� �� count
	}
	cout << count;
	return 0;
}