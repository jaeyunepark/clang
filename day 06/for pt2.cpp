#include <stdio.h>

int main() {

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d %d\n", i, j);
		}
	}*/


	
	
	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d 곱하기 %d 는 %d 이다\n", i, j, i*j);
		}
	}*/

	
	
	
	int num;
	printf("숫자 ㄱ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("*\n");
		}
	}












	return 0;
}

