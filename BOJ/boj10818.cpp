#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int tot, min= 0, max=0, num;
	cin >> tot;
	for (int i = 0; i < tot; i++) {
		cin >> num;
		if (i == 0) {
			min = num;
			max = num;
		}
		if (num <= min) min = num;
		else if (num >= max) max = num;
	}
	cout << min << " " << max;
	return 0;
}