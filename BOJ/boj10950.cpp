#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	int* arr = new int[num]; //�迭 �����Ҵ� ���
	//�迭 ����� �Ŀ� ������� �־�ߵǹǷ� �����Ҵ��� �̿��Ͽ���.
	int a, b;
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr; //�޸� ����

	/*
	* ���� ) �Է��� �� �ް� �Ѳ����� ����ؾߵǴ� �� �˰�
	* ���� �Ҵ��� ����Ͽ��µ� �׳� �� �ٸ��� �а� �ٷ� ����ص�
	* �Ǵ� �������ٰ� �Ѵ� ;��;
	* 
	* ex) 
	* for (int i=0;i<num;i++){
	*	cin >> a >> b;
		cout << a+b << endl;
		}
	*/
	return 0;
}