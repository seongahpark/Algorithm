#include <iostream>
#define MAX 10001
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int tmp;
	int arr[MAX] = { 0 };
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		arr[tmp]++;
	}

	for (int i = 1; i < MAX; i++) {
		if (arr[i]) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}
	return 0;
}