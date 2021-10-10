#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int total, a;
	int num;
	cin >> total >> a;
	for (int i = 0; i < total; i++) {
		cin >> num;
		if (num < a) cout << num << " ";
	}

	return 0;
}