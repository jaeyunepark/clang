#include <iostream>
#include<string>
using namespace std;
int main() {

	char ch;
	string solution;
	string list[] =
	{
		"the",
		"C++",
		"program",
		"language",
	};
	int n = rand() % 4;
	solution=list[n];

	string guess(solution.length(), '_');
	
	while (true) {
		cout << guess << endl;
		cout << "���ڸ� �Է��ϼ���:";
		cin >> ch;
		for (int i = 0;i < solution.length();i++) {
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		if (solution == guess) {
			cout << solution << endl;
			cout << "�����ϼ̽��ϴ�";
		}
	}
	return 0;
}