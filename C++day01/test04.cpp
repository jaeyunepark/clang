#include<iostream>
#include<string>
using namespace std;
int main() {

	int money;
	int price;
	
	cout << "���簡���� �ִ� �� �Է�:";
	cin >> money;

	cout << "������ ����:";
	cin >> price;

	cout << "����ִ� ������ ����:" <<money/price<< endl;
	cout << "������:" << money % price << endl;

	return 0;
}