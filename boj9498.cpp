#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test;
	cin >> test;
	if (test >= 90 && test <= 100) {
		cout << "A";
	}
	else if (test >= 80) {
		cout << "B";
	}
	else if (test >= 70) {
		cout << "C";
	}
	else if (test >= 60) {
		cout << "D";
	}
	else {
		cout << "F";
	}
	return 0;
}