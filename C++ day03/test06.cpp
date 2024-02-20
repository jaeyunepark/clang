#include <iostream>
using namespace std;
int main() {
	int choice, area, length, width;
	int round;
	int mit, nop;
	cout << "도형을 선택하세요(1,2,3):";
	cin >> choice;
	if (choice == 1) {
		cout << "가로 :";
		cin >> length;
		cout << "세로 :";
		cin >> width;
		area = length * width;
		cout << "면적 :" << area << endl;
	}
	else if (choice == 2) {
		cout << "반지름:";
		cin >> round;
		area = round * round * 3.14;
		cout << "원의 넓이:" << area << endl;
	}
	else if (choice == 3) {
		cout << "밑변:";
		cin >> mit;
		cout << "높이:";
		cin >> nop;
		area = (mit * nop) / 2;
		cout << "삼각형의 넓이:" << area << endl;
	}


	return 0;
}