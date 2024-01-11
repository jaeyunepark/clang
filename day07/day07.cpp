#include <stdio.h>

int main() {

	/*for (int i=0; i < 100; i++) {
		if (i % 3 == 0)
			printf("%d ", i);
	}*/






	int A, B;
	printf("정수입력:");
	scanf_s("%d", &A);
	printf("정수입력:");
	scanf_s("%d", &B);
	
	for (int i = 0; i <= 1000; i++) {
		if (i % A == 0 && i % B == 0) {
			printf("%d\n", i);
		}
			
	}

				
	
	
	

	return 0;
}