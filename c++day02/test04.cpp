#include <iostream>

using namespace std;
//사용자로부터 나이를 입력받아 어린이, 청소년, 성인으로 구분하는 프로그램
int main() {

	int age;

	cout << "나이를 입력하세요:" << endl;
	cin >> age;

	if (age <= 12) {
		cout << "어린이 입니다" << endl;
	}
	else if(age<=19) {
		cout << "청소년 입니다" << endl;

	}
	else {
		cout << "성인 입니다" << endl;
	}


	return 0;
}