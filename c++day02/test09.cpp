#include <iostream>

using namespace std;
int main() {

	int fruit;
	cout << "������ ��ȣ�� �Է�(1:���,2:��,5:�ٳ���,������:����):";
		cin >> fruit;
	switch (fruit) {
	case 1:cout << "���";
		break;
	case 2:cout << "��";
		break;
	case 5:cout << "�ٳ���";
		break;
	default:
		cout << "�����Դϴ�";
		break;
	}

	return 0;
}