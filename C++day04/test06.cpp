#include <iostream>
#include<string>
using namespace std;
int main() {

	string s;//string 객체 x를 생성한다
	string s1 = "hello";//string 객체 s1을 생성하고 초기화

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
		cout << "동일한 문자열 입니다" << endl;
	else
		cout << "동일한 문자열이 아닙니다" << endl;
	if (s1 > s2)
		cout << "s1이 뒤에 있습니다" << endl;
	else
		cout << "s2가 뒤에 있습니다" << endl;
	return 0;
}