#include <iostream>

using namespace std;
int square(int n) {
	return n * n;
}




int main() {
	int n;
	cout << "제곱할 정수를 입력하세요:";
	cin >> n;
	cout << square(n)<< endl;




	return 0;
}