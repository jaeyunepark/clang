#include <iostream>

using namespace std;
//x������ �Է¹޾� ���, ����, 0���� �˻��ϴ� �ڵ带 �ۼ��غ���
int main() {

	int x;

	cout << "x���� �Է�:";
	cin >> x;

	if (x > 0) {
		cout << "x�� ����Դϴ�" << endl;
	}
	else if (x < 0) {
		cout << "x�� �����Դϴ�" << endl;
	}
	else {
		cout << "x�� 0�Դϴ�" << endl;
	}



	return 0;
}