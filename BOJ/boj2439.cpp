#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	for (int i = num; i > 0; i--) {
		for (int j = 0; j < i-1; j++) {
			cout << " ";
		}
		for (int z = 0; z <= num-i; z++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}