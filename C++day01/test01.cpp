#include<iostream>
#include<string>
using namespace std;
int main() {

	bool b;
	b = true;

	char ch;
	ch = 'a';

	string s1 = "good";
	string s2 = "afternoon";

	string s3 = s1 +" " +s2+"!";

	string s4 = "���";
	string s5 = s4 + to_string(10) + "��";

	b = (s1 == s2);


	cout <<"bood��:"<< b << endl;
	cout << "������:"<<ch << endl;
	cout << "���ڿ�:"<<s3 << endl;
	cout << "���ڿ� ����:" << s5 << endl;

	return 0;
}