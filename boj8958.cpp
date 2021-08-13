#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	string* arr = new string[num]; // �Է¹��� ��
	int* score = new int[num]; // �� �ٸ��� ���� ����� �迭
	int count = 0; // O �� ���������� ������ �÷��� ����

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		count = 0; //������ ���� �� ������ count�� �ʱ�ȭ����� ���� ����� ���ع��� �ʴ´�
		score[i] = 0; //�迭 ���� �Ҵ�� ����� �ʱ�ȭ�� ���ÿ� �� �� ���� for������ �ʱ�ȭ
		for (int j = 0; j < arr[i].length(); j++) {
			if (arr[i].at(j) == 'O') {
				count++; // O�� ���� �� ���� �����ؼ� count�� ����
				score[i] += count; //������ count ���� score�� ����
			}
			else {
				count = 0; //X�� ���� ��� count�� �ٽ� �ʱ�ȭ���ش�
			}
		}
	}

	for (int i = 0; i < num; i++) { //��� ���
		cout << score[i] << "\n";
	}

	delete[] arr;
	delete[] score;
	return 0;
}