#include <iostream>
#include<time.h>
using namespace std;
int main() {
	// ���� ���߱� ����
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		cout << "������ �����Ͽ� ������:";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "������ ������ �� �����ϴ�\n";
		if (guess < answer)
			cout << "������ ������ �� �����ϴ�\n";
	} while (guess != answer);

	cout << "�����մϴ� �õ��� Ƚ��=" << tries << endl;

	return 0;
}