#include <iostream>

using namespace std;     

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, mul;
	int arr[20] = { 0 }; // �ִ밡 1000*1000*1000 ���� �۱� ����
	int num[10] = { 0 }; // 0~9���� ī��Ʈ ���� �迭 ����
	int i=0; //�ڸ��� ī��Ʈ�� ���� ���� ����
	cin >> a >> b >> c;
	mul = a * b * c; // a, b, c�� ���� ����

	while (mul != 0) {
		arr[i] = mul % 10; // ������ ������ �� �ڸ����� �ش��ϴ� ������ �������� ����
		mul /= 10; // 10���� ���������ν� �ڸ����� ���� ����
		i++; //�ڸ��� +
	}

	for (int j = 0; j < 10; j++) { //�� �ڸ��� ���� 0���� 9���� ���ڰ� �ִ��� üũ
		for (int z = 0; z < i; z++) { //�ڸ����� �ش��ϴ� i���� üũ
			if (j == arr[z]) num[j]++;
		}
	}

	for (int z = 0; z < 10; z++) { // ��¿� �ڵ�
		cout << num[z] << "\n";
	}

	return 0;
}