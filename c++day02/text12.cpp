#include<iostream> 
#include<string>
using namespace std;
int main() {
	string str;

	do {
		cout << "���ڿ��� �Է��ϼ��� :";
		getline(cin, str);
		cout << "������� �Է���:" << str << endl;
	} while (str != "����");
	cout << "���α׷� ����" << endl;


	return 0;
}