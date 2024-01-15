#include <stdio.h>

int main() {
	//2차원 배열
	/*int score[2][3] = { {1,2,3},{4,5,6} };

	printf("%d", score[1][1]);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", score[i][j]);
		}
	}*/


	int score[3][3] = {
		{75,85,85},
		{75,85,70},
		{60,100,90}
	};
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		score[i][i];
	}

	printf("%.2lf\n", (double)sum / 3);






	return 0;
}