#include <iostream>
using namespace std;
int main() {
	int choice, area, length, width;
	int round;
	int mit, nop;
	cout << "������ �����ϼ���(1,2,3):";
	cin >> choice;
	if (choice == 1) {
		cout << "���� :";
		cin >> length;
		cout << "���� :";
		cin >> width;
		area = length * width;
		cout << "���� :" << area << endl;
	}
	else if (choice == 2) {
		cout << "������:";
		cin >> round;
		area = round * round * 3.14;
		cout << "���� ����:" << area << endl;
	}
	else if (choice == 3) {
		cout << "�غ�:";
		cin >> mit;
		cout << "����:";
		cin >> nop;
		area = (mit * nop) / 2;
		cout << "�ﰢ���� ����:" << area << endl;
	}


	return 0;
}