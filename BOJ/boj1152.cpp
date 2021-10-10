#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	getline(cin, str);

	vector<string> answer;
	stringstream ss(str);
	string temp;

	/*
	* stringstream은 문자열에서 필요한 자료형에 맞는 정보를 꺼낼 때 사용
	* 공백과 뉴라인을 제외하고 추출해내기 때문에 문제와 적합
	* sstream 전처리 헤더를 포함해야 한다
	* 
	* temp의 자료형이 string이기 때문에 string만 빼오는 것
	*/
	while (ss >> temp) {
		answer.push_back(temp);
	}

	cout << answer.size();

	return 0;
}