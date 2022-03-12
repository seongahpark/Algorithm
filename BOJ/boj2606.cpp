#include <iostream>

const int MAX = 101;

using namespace std;

int arr[MAX][MAX];
bool visited[MAX];
int cnt = -1, n, num;

void dfs(int x) {
	visited[x] = true;
	cnt++;
	for (int i = 1; i <= num; i++) {
		if (!visited[i] && arr[x][i]) {
			dfs(i);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> num >> n;
	//겁나 어이없는 실수
	//어차피 max로 돌릴거니까 num은 필요없겠지~하고 다 n으로 받아버림
	//그러다보니 dfs돌릴 때 out of bounds가.. 되어버림.. 완전 멍충..
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(1);
	cout << cnt;
	return 0;
}