#include <iostream>

using namespace std;

int main() {

	char secret_code = 'h';
	cout << "��� �ڵ带 ���� ������:";
	char code;
	cin >> code;

	if (code < secret_code) {
		cout << code << "�ڿ� �ֽ��ϴ�" << endl;
	}
	else if(code > secret_code) {
		cout << code << "�տ� �ֽ��ϴ�" << endl;
	}
	else {
		cout << code << "���߾����ϴ�!" << endl;
	}


	return 0;
}