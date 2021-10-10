#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10] = { 0 };
	int res[10] = { 0 };
	int count = 10;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		res[i] = arr[i] % 42;
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (res[i] == res[j]) {
				count--;
				break;
			}
		}
	}

	cout << count;
	return 0;
}