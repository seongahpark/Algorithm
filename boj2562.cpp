#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int arr[9] = { 0 };
	int max = 0, max_i = 1;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (i == 0) {
			max = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
			max_i = i+1;
		}
	}

	cout << max << "\n" << max_i;

	return 0;
}