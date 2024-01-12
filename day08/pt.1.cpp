#include <stdio.h>

int main() {

	/*int a;
	printf("정수입력:");
	scanf_s("%d", &a);
	int sum; //쓰레기 값
	for (int i = 0; i <= a; i++) {
		if (i % 2 !=0) {
			sum += i;
		}
	}
	printf("%d\n",i);*/

	
	
	/*int sum = 0,avg=0,count=0;
	while (1) {
		int num;
		printf("정수 입력:");
		scanf_s("%d", &num);
		if (num <= 0)break;
		sum += num;
		count++;
	}
	printf("합계;%d 평균: %.2lf 개수: %d",sum,(double)sum/count,count);*/


	
	
	
	int a,b;
	printf("1.더하기 2.곱하기 3.빼기 4.나누기");
	switch (a,b) {
	case '1':int a, b;
		printf("숫자입력:");
		scanf_s("%d", &a);
		printf("숫자입력:");
		scanf_s("%d", &b);
		printf("%d더하기%d=%d 입니다.", a, b, a + b);
		break;
	case '2':int a, b;
		printf("숫자입력:");
		scanf_s("%d", &a);
		printf("숫자입력:");
		scanf_s("%d", &b);
		printf("%d곱하기%d=%d 입니다.", a, b, a * b);
		break;
	case '3':int a, b;
		printf("숫자입력:");
		scanf_s("%d", &a);
		printf("숫자입력:");
		scanf_s("%d", &b);
		printf("%d뺴기%d=%d 입니다.", a, b, a - b);
		break;
	case '4':int a, b;
		printf("숫자입력:");
		scanf_s("%d", &a);
		printf("숫자입력:");
		scanf_s("%d", &b);
		printf("%d나누기%d=%d 입니다.", a, b, a / b);
		break;
	}
	


	return 0;
}