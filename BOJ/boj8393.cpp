#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num, sum = 0;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}