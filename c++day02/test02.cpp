#include<iostream>

using namespace std;
int main() {
	int x, y;
	cout << "x���� �Է��ϼ���: ";//�Է� �ȳ� ���
	cin >> x;
	cout << "y���� �Է��ϼ���:"; //�Է� �ȳ� ���
		cin >> y;

	if (x > y)
		cout << "x�� y���� Ů�ϴ�" << endl;
	else {
		cout << "y��x���� ũ�ų� �����ϴ�" << endl;
	}
	return 0;
}