#include <iostream>
#include <string>
using namespace std;

int main() {

	string name, addr;

	cout << "이름을 입력하세요:";
	cin >> name;
	cin.ignore();
	cout << "주소를 입력하세요:";
	getline(cin, addr);

	cout << addr << "의" << name << "안녕하세요 !" << endl;




	return 0;
}