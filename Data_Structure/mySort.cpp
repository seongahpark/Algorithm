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
		선택 정렬 (Selection Sort) 로직
		1. 인덱스의 맨 앞에서 부터, 그 이후의 배열 값 중 가장 작은 값을 찾는다.
		2. 가장 작은 값을 찾으면, 그 값을 현재 인덱스와 바꿔준다.
		3. 다음 인덱스에서 위 과정을 반복해준다.

		시간 복잡도 : O(n^2) <- 전체를 비교하기 때문
		공간 복잡도 : O(n) <- 단 하나의 배열에서만 진행
	*/
	cout << "selection Sort 실행" << endl;
	int minIdx, tmp;
	for(int i = 0; i < size-1; i++) {
		minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[minIdx] > arr[j]) minIdx = j; //min 갱신
		}
		tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;
	}
}

void mySort::insertSort() {
	/*
		삽입 정렬(Insert Sort)
		현재 위치에서 그 이하의 배열들을 비교하여 자신이 들어갈 위치를 찾아 삽입
		1. 두 번째 인덱스부터 시작하며, 인덱스 값을 별도의 변수에 저장한다.
		2. 비교인덱스는 인덱스-1 부터 왼쪽으로 가며, 변수에 넣은 값과 비교해준다.
		3. 비교인덱스가 변수보다 작을 경우 비교 인덱스+1 자리에 변수를 넣어준다.
		
		시간 복잡도 : 최악의 경우(역으로 정렬된 경우) O(n^2)
						이미 정렬된 경우에는 한 번밖에 비교하지 않기 때문에 O(n)
		공간 복잡도 : 하나의 배열에서만 진행 O(n)
	*/
	cout << "insertSort 실행" << endl;
	int j, tmp;
	for (int i = 1; i < size; i++) {
		tmp = arr[i]; //기준 인덱스의 값을 저장
		j = i - 1;

		while ((j >= 0) && (arr[j] > tmp)) {
			arr[j + 1] = arr[j]; //작은 값을 찾을 때 까지 배열을 오른쪽으로 한 칸씩 밀어준다
			j--;
		}
		arr[j+1] = tmp;
	}
}

void mySort::bubbleSort() {
	/*
		버블 정렬(Bubble Sort)
		매번 연속된 두 개의 인덱스를 비교하여 큰 값을 뒤로 넘겨주는 방법
		1. 현재 인덱스 값과 그 다음 인덱스 값을 비교한다
		2. 현재 인덱스가 더 크면 자리를 바꾼다.
		3. 현재 인덱스가 작으면 교환하지 않고 다음 연속된 배열값을 비교한다.
		4. 이를 (전체 배열의 크기 - 현재까지 순환한 바퀴 수)만큼 반복한다.

		시간 복잡도 : 전체 비교를 진행하기 때문에 O(n^2)
		공간 복잡도 : 하나의 배열에서만 진행하기 때문에 O(n)
	*/
	cout << "bubbleSort 실행" << endl;
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
		퀵 정렬(Quick Sort)
		분할 정복 (Divide and Conquer)을 이용하여 정렬을 수행하는 알고리즘
		pivot이라는 기준 값을 설정하여 이 값을 기준으로 작은 값은 왼쪽, 큰 값은 오른쪽으로 옮긴다.
		이를 반복하여 분할된 배열의 크기가 1이되면 배열이 모두 정렬된다.

		1. 기준이 될 pivot 포인트를 정한다. (맨 앞으로 설정)
		2. 비교를 진행할 가장 왼쪽 인덱스(pivot+1)부터 가장 오른쪽 인덱스(end) 값을 저장한다.
		3. 왼쪽은 pivot 값이 left 인덱스 값보다 크거나 같을때까지만 진행하며 left idx 값을 증가한다.
		4. 오른쪽은 pivot 값이 right 인덱스 값보다 작거나 같을때까지만 진행하며 reft idx 값을 감소시켜준다.
		5. left와 right가 가리키는 두 데이터를 서로 교환한다.
		6. 두 데이터가 엇갈릴 때 까지 반복하며, 반복이 끝나면 pivot과 right idx값을 교환한다.
		7. 옮긴 pivot 앞의 배열과 뒤의 배열에서 각각 위의 과정을 반복한다. (분할)
		8. 배열의 크기가 1이 될때까지 반복한다.

		시간 복잡도 : 배열 크기 N만큼 비교하며, 총 분할 깊이인 logN 만큼 비교하므로
						총 비교횟수는 NlogN, O(NlogN)이다.
						최악의 경우에는 이미 정렬된 상태에서 진행되는 것으로, 분할이 N만큼 일어나 O(n^2)이다.
						이를 방지하기 위해서는 전체 배열 중 중간 값이나 랜덤 값으로 pivot을 결정하기도 한다.
		공간 복잡도 : 한 개의 배열에서 진행되기 때문에 O(n)
	*/
	cout << "quickSort 실행" << endl;
	quickFunc(arr, 0, 9);
}

void mySort::quickFunc(int a[10], int start, int end) {
	if (start >= end) return; //시작값이 넘어가버린 경우 종료 

	int pivot = start; //기준값
	int i = start + 1; //기준값의 오른쪽에서부터 시작
	int j = end; //제일 마지막에서부터 왼쪽으로
	int tmp;

	while (i <= j) {
		while (i <= end && arr[pivot] >= arr[i]) {
			i++;
		}
		while (j > start && arr[pivot] <= arr[j]) {
			j--;
		}
		if (i > j) { // 서로 교차하면 기준값과 교체
			tmp = arr[pivot];
			arr[pivot] = arr[j];
			arr[j] = tmp;
		}
		else { // 그렇지 않으면 i와 j 값을 교체
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
 		}
	}

	quickFunc(arr, start, j - 1);
	quickFunc(arr, j + 1, end);
}

void mySort::print() {
	cout << "배열 : ";
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