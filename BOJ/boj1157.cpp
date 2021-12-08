#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int alpha[26];

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
		int tmp = str[i] - 'A';
		alpha[tmp]++;
	}

	int maxIdx = 0;
	int maxVal = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > maxVal) {
			maxIdx = i;
			maxVal = alpha[i];
		}
	}

	char maxAlpha = maxIdx + 'A';

	sort(alpha, alpha + 26);
	if (alpha[25] == alpha[24]) cout << "?";
	else cout << maxAlpha;

	return 0;
}