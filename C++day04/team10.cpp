#include <iostream>
#include<string>
using namespace std;
int main() {

	string str1, str2;
	int count = 0;

	cout << "���ڿ�1 �Է�:";
	cin >> str1;
	cout << "���ڿ�2 �Է�:";
	cin >> str2;
	if (str1.length() != str2.length())
		cout << "����:���ڿ��� ���̰� �ٸ�" << endl;
	else {
		for (int i = 0;i < str1.length();i++) {
			if (str1[i] != str2[i])
				count += 1;
		}
		cout << "�ع� �Ÿ���" << count << endl;
	}



	return 0;
}