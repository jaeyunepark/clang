#include <iostream>
#include<string>
using namespace std;
int main() {

	string str1, str2;
	int count = 0;

	cout << "문자열1 입력:";
	cin >> str1;
	cout << "문자열2 입력:";
	cin >> str2;
	if (str1.length() != str2.length())
		cout << "오류:문자열의 길이가 다름" << endl;
	else {
		for (int i = 0;i < str1.length();i++) {
			if (str1[i] != str2[i])
				count += 1;
		}
		cout << "해밍 거리는" << count << endl;
	}



	return 0;
}