#include <iostream> 

using namespace std;
void print1(int x) {
	
	cout << "�������:" << x << endl;
}
void print2(double y) {
	cout << "�Ǽ����:" << y << endl;
}
void print3(char z) {
	cout << "�������:" << z << endl;
}
int main() {

	int a = 100;
	double b = 3.14;
	char c = 'c';
	print1(a);
	print2(b);
	print3(c);



	return 0;
}