#include <iostream>

using namespace std;
//������ ������ ū �� ã��
int main() {
	int a, b, c, largest;
	cout << "3���� ������ �Է��ϼ���:"<<endl;
	cin >> a >> b >> c;

	if (a > b && a > c) {
		largest = a;
	}
	else if (b>a&&b>c) {
		largest = b;
	}
	else {
		largest = c;
	}
	cout << "���� ū ����"<<largest<<endl;



	return 0;
}