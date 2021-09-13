#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	int tmp;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}