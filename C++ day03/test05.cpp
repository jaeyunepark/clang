#include <iostream>
#include<time.h>
using namespace std;
int main() {
	// 숫자 맞추기 게임
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		cout << "정답을 추측하여 보세요:";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "제시한 정수가 더 높습니다\n";
		if (guess < answer)
			cout << "제시한 점수가 더 낮습니다\n";
	} while (guess != answer);

	cout << "축하합니다 시도한 횟수=" << tries << endl;

	return 0;
}