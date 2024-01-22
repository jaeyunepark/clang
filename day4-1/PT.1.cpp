#include <stdio.h>
#include <stdlib.h>

int main() {

	

	int n;
	printf("n을 입력:");
	scanf("%d", &n);

	int* ptr;
	ptr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		printf("숫자입력:");
		scanf("%d", &ptr[i]);
	}

	int max = ptr[0];

	for (int i = 0; i < n; i++) {
		if (max < ptr[i]) {
			max = ptr[i];
		}
	}
	
	printf("가장 큰 수는 %d 입니다.", max);










	












	return 0;
}