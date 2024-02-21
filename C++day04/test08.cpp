#include <iostream>
#include<string>
using namespace std;

int main() {
	string s = "when in rome, do as th romans.";

	int index = s.find("rome");

	cout << index << endl;
	return 0;
}