#include <iostream>

using namespace std;
int main() {

	int n = 12;
	while (n > 6) {
		n = n - 2;
		if (n == 6)
			break;
		cout << n << endl;
	}

	return 0;
}