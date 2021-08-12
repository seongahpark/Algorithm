#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, max = 0;
	double sum = 0, avg = 0;
	cin >> num;
	double* array = new  double[num]; //c++ �迭 ���� �Ҵ�

	for (int i = 0; i < num; i++) {
		cin >> array[i];
		if (array[i] > max) max = array[i];
	}

	for (int i = 0; i < num; i++) {
		array[i] = array[i] * 100;
		array[i] /= (double)max; //max�� �����̹Ƿ� ����ȯ
		sum += array[i];
	}
	avg = (double)sum / num;
	cout << setprecision(10); //�Ҽ����� �� ����ϱ� ���� ���
	//������� iomanip �� ����ؾ� �Լ� ��� ����
	cout << avg;

	delete[] array; //����
	return 0;
}