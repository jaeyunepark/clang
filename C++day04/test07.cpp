#include <iostream>
#include <string>
using namespace std;

int main() {

	string name, addr;

	cout << "�̸��� �Է��ϼ���:";
	cin >> name;
	cin.ignore();
	cout << "�ּҸ� �Է��ϼ���:";
	getline(cin, addr);

	cout << addr << "��" << name << "�ȳ��ϼ��� !" << endl;




	return 0;
}