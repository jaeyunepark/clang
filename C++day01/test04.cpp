#include<iostream>
#include<string>
using namespace std;
int main() {

	int money;
	int price;
	
	cout << "현재가지고 있는 돈 입력:";
	cin >> money;

	cout << "사탕의 가격:";
	cin >> price;

	cout << "살수있는 사탕의 갯수:" <<money/price<< endl;
	cout << "남은돈:" << money % price << endl;

	return 0;
}