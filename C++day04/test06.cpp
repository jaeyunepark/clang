#include <iostream>
#include<string>
using namespace std;
int main() {

	string s;//string ��ü x�� �����Ѵ�
	string s1 = "hello";//string ��ü s1�� �����ϰ� �ʱ�ȭ

	string s2 = "world!";
	string s3 = s1 + s2;
	string s4 = s1;
	s += s4;

	cout << s << " " << endl;
	cout << s1 << " " << endl;
	cout << s2 << " " << endl;
	cout << s3 << " " << endl;
	cout << s4 << " " << endl;

	if (s1 == s2)
		cout << "������ ���ڿ� �Դϴ�" << endl;
	else
		cout << "������ ���ڿ��� �ƴմϴ�" << endl;
	if (s1 > s2)
		cout << "s1�� �ڿ� �ֽ��ϴ�" << endl;
	else
		cout << "s2�� �ڿ� �ֽ��ϴ�" << endl;
	return 0;
}