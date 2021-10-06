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
	* stringstream�� ���ڿ����� �ʿ��� �ڷ����� �´� ������ ���� �� ���
	* ����� �������� �����ϰ� �����س��� ������ ������ ����
	* sstream ��ó�� ����� �����ؾ� �Ѵ�
	* 
	* temp�� �ڷ����� string�̱� ������ string�� ������ ��
	*/
	while (ss >> temp) {
		answer.push_back(temp);
	}

	cout << answer.size();

	return 0;
}