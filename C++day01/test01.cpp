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

	string s4 = "사과";
	string s5 = s4 + to_string(10) + "개";

	b = (s1 == s2);


	cout <<"bood형:"<< b << endl;
	cout << "문자형:"<<ch << endl;
	cout << "문자열:"<<s3 << endl;
	cout << "문자열 연결:" << s5 << endl;

	return 0;
}