#include <iostream>

using namespace std;
//����ڷκ��� ���̸� �Է¹޾� ���, û�ҳ�, �������� �����ϴ� ���α׷�
int main() {

	int age;

	cout << "���̸� �Է��ϼ���:" << endl;
	cin >> age;

	if (age <= 12) {
		cout << "��� �Դϴ�" << endl;
	}
	else if(age<=19) {
		cout << "û�ҳ� �Դϴ�" << endl;

	}
	else {
		cout << "���� �Դϴ�" << endl;
	}


	return 0;
}