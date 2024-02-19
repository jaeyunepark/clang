#include <iostream>

using namespace std;
int main() {

	int fruit;
	cout << "과일을 번호로 입력(1:사과,2:배,5:바나나,나머지:과일):";
		cin >> fruit;
	switch (fruit) {
	case 1:cout << "사과";
		break;
	case 2:cout << "배";
		break;
	case 5:cout << "바나나";
		break;
	default:
		cout << "과일입니다";
		break;
	}

	return 0;
}