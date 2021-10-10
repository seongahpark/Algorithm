#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class mySort {
private:
	int arr[10] =
	{ 8,4,3,6,7,2,5,1,9,0 };
	int size = sizeof(arr) / sizeof(int);

public:
	void makeArr();
	void selectionSort();
	void bubbleSort();
	void insertSort();
	void quickSort();
	void quickFunc(int a[10], int start, int end);
	void print();
};

void mySort::makeArr() {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand();
	}
}

void mySort::selectionSort() {
	/*
		���� ���� (Selection Sort) ����
		1. �ε����� �� �տ��� ����, �� ������ �迭 �� �� ���� ���� ���� ã�´�.
		2. ���� ���� ���� ã����, �� ���� ���� �ε����� �ٲ��ش�.
		3. ���� �ε������� �� ������ �ݺ����ش�.

		�ð� ���⵵ : O(n^2) <- ��ü�� ���ϱ� ����
		���� ���⵵ : O(n) <- �� �ϳ��� �迭������ ����
	*/
	cout << "selection Sort ����" << endl;
	int minIdx, tmp;
	for(int i = 0; i < size-1; i++) {
		minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[minIdx] > arr[j]) minIdx = j; //min ����
		}
		tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;
	}
}

void mySort::insertSort() {
	/*
		���� ����(Insert Sort)
		���� ��ġ���� �� ������ �迭���� ���Ͽ� �ڽ��� �� ��ġ�� ã�� ����
		1. �� ��° �ε������� �����ϸ�, �ε��� ���� ������ ������ �����Ѵ�.
		2. ���ε����� �ε���-1 ���� �������� ����, ������ ���� ���� �����ش�.
		3. ���ε����� �������� ���� ��� �� �ε���+1 �ڸ��� ������ �־��ش�.
		
		�ð� ���⵵ : �־��� ���(������ ���ĵ� ���) O(n^2)
						�̹� ���ĵ� ��쿡�� �� ���ۿ� ������ �ʱ� ������ O(n)
		���� ���⵵ : �ϳ��� �迭������ ���� O(n)
	*/
	cout << "insertSort ����" << endl;
	int j, tmp;
	for (int i = 1; i < size; i++) {
		tmp = arr[i]; //���� �ε����� ���� ����
		j = i - 1;

		while ((j >= 0) && (arr[j] > tmp)) {
			arr[j + 1] = arr[j]; //���� ���� ã�� �� ���� �迭�� ���������� �� ĭ�� �о��ش�
			j--;
		}
		arr[j+1] = tmp;
	}
}

void mySort::bubbleSort() {
	/*
		���� ����(Bubble Sort)
		�Ź� ���ӵ� �� ���� �ε����� ���Ͽ� ū ���� �ڷ� �Ѱ��ִ� ���
		1. ���� �ε��� ���� �� ���� �ε��� ���� ���Ѵ�
		2. ���� �ε����� �� ũ�� �ڸ��� �ٲ۴�.
		3. ���� �ε����� ������ ��ȯ���� �ʰ� ���� ���ӵ� �迭���� ���Ѵ�.
		4. �̸� (��ü �迭�� ũ�� - ������� ��ȯ�� ���� ��)��ŭ �ݺ��Ѵ�.

		�ð� ���⵵ : ��ü �񱳸� �����ϱ� ������ O(n^2)
		���� ���⵵ : �ϳ��� �迭������ �����ϱ� ������ O(n)
	*/
	cout << "bubbleSort ����" << endl;
	for (int i = size-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			} 
		}
	}
}

void mySort::quickSort() {
	/*
		�� ����(Quick Sort)
		���� ���� (Divide and Conquer)�� �̿��Ͽ� ������ �����ϴ� �˰���
		pivot�̶�� ���� ���� �����Ͽ� �� ���� �������� ���� ���� ����, ū ���� ���������� �ű��.
		�̸� �ݺ��Ͽ� ���ҵ� �迭�� ũ�Ⱑ 1�̵Ǹ� �迭�� ��� ���ĵȴ�.

		1. ������ �� pivot ����Ʈ�� ���Ѵ�. (�� ������ ����)
		2. �񱳸� ������ ���� ���� �ε���(pivot+1)���� ���� ������ �ε���(end) ���� �����Ѵ�.
		3. ������ pivot ���� left �ε��� ������ ũ�ų� ������������ �����ϸ� left idx ���� �����Ѵ�.
		4. �������� pivot ���� right �ε��� ������ �۰ų� ������������ �����ϸ� reft idx ���� ���ҽ����ش�.
		5. left�� right�� ����Ű�� �� �����͸� ���� ��ȯ�Ѵ�.
		6. �� �����Ͱ� ������ �� ���� �ݺ��ϸ�, �ݺ��� ������ pivot�� right idx���� ��ȯ�Ѵ�.
		7. �ű� pivot ���� �迭�� ���� �迭���� ���� ���� ������ �ݺ��Ѵ�. (����)
		8. �迭�� ũ�Ⱑ 1�� �ɶ����� �ݺ��Ѵ�.

		�ð� ���⵵ : �迭 ũ�� N��ŭ ���ϸ�, �� ���� ������ logN ��ŭ ���ϹǷ�
						�� ��Ƚ���� NlogN, O(NlogN)�̴�.
						�־��� ��쿡�� �̹� ���ĵ� ���¿��� ����Ǵ� ������, ������ N��ŭ �Ͼ O(n^2)�̴�.
						�̸� �����ϱ� ���ؼ��� ��ü �迭 �� �߰� ���̳� ���� ������ pivot�� �����ϱ⵵ �Ѵ�.
		���� ���⵵ : �� ���� �迭���� ����Ǳ� ������ O(n)
	*/
	cout << "quickSort ����" << endl;
	quickFunc(arr, 0, 9);
}

void mySort::quickFunc(int a[10], int start, int end) {
	if (start >= end) return; //���۰��� �Ѿ���� ��� ���� 

	int pivot = start; //���ذ�
	int i = start + 1; //���ذ��� �����ʿ������� ����
	int j = end; //���� �������������� ��������
	int tmp;

	while (i <= j) {
		while (i <= end && arr[pivot] >= arr[i]) {
			i++;
		}
		while (j > start && arr[pivot] <= arr[j]) {
			j--;
		}
		if (i > j) { // ���� �����ϸ� ���ذ��� ��ü
			tmp = arr[pivot];
			arr[pivot] = arr[j];
			arr[j] = tmp;
		}
		else { // �׷��� ������ i�� j ���� ��ü
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
 		}
	}

	quickFunc(arr, start, j - 1);
	quickFunc(arr, j + 1, end);
}

void mySort::print() {
	cout << "�迭 : ";
	for (int i = 0; i < size; i++) {
		if (i == size - 1) cout << arr[i] << endl;
		else cout << arr[i] << ", ";
	}
}

int main() {
	mySort ms;

	ms.makeArr();
	ms.print();
	ms.bubbleSort();
	ms.print();

	cout << "================================" << endl;

	ms.makeArr();
	ms.print();
	ms.insertSort();
	ms.print();

	cout << "================================" << endl;

	ms.makeArr();
	ms.print();
	ms.selectionSort();
	ms.print();

	cout << "================================" << endl;

	ms.makeArr();
	ms.print();
	ms.quickSort();
	ms.print();

	return 0;
}