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
	double* array = new  double[num]; //c++ 배열 동적 할당

	for (int i = 0; i < num; i++) {
		cin >> array[i];
		if (array[i] > max) max = array[i];
	}

	for (int i = 0; i < num; i++) {
		array[i] = array[i] * 100;
		array[i] /= (double)max; //max가 정수이므로 형변환
		sum += array[i];
	}
	avg = (double)sum / num;
	cout << setprecision(10); //소수점을 더 출력하기 위해 사용
	//헤더파일 iomanip 를 사용해야 함수 사용 가능
	cout << avg;

	delete[] array; //해제
	return 0;
}