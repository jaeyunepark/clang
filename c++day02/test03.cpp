#include <iostream>

using namespace std;
//x변수를 입력받아 양수, 음수, 0인지 검사하는 코드를 작성해보자
int main() {

	int x;

	cout << "x변수 입력:";
	cin >> x;

	if (x > 0) {
		cout << "x는 양수입니다" << endl;
	}
	else if (x < 0) {
		cout << "x는 음수입니다" << endl;
	}
	else {
		cout << "x는 0입니다" << endl;
	}



	return 0;
}