#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	int* arr = new int[num]; // �� ������ ù ��° ���� ����ϱ� ���� �迭
	double* score = new double[num]; // �� ������ ��� �Ѵ� ����� ������ ����ϱ� ���� �迭

	for (int i = 0; i < num; i++) {
		double sum = 0; // ���� �� �հ踦 ���
		double avg = 0; // ���� �� ��� ���
		int chk = 0; // ����� �Ѵ� �л� üũ ����
		cin >> arr[i];
		int* tmp = new int[arr[i]]; // ù��° ���� ���� ���� �迭�� ������ �޶����Ƿ�
		//�ӽ� �迭�� �������� �Ҵ����ش�
		for (int j = 0; j < arr[i]; j++) {
			cin >> tmp[j];
			sum += tmp[j];
		}

		avg = (double)sum / arr[i]; // �� ��ȯ
		for (int z = 0; z < arr[i]; z++) {
			if (tmp[z] > avg) chk++; // ����� �Ѵ� ����� chk ������ ���
		}
		score[i] = (double)chk / arr[i] * 100; // % ������ ��Ÿ���ߵǱ� ������ 100�� ������
	}

	for (int i = 0; i < num; i++) {
		cout << fixed << setprecision(3) << score[i] << "%\n"; // �Ҽ��� 3�ڸ������� ����� �ϱ� ���� fixed�� �Ҽ��� 3�ڸ� ���
	}

	return 0;
}