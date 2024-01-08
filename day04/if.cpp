#include <stdio.h>

int main() {

	//control statement(제어문)
	// 코드실행 순서를 조작

	//1)conditional statement(조건문)
	//어떤 코드를 실행할지 결정
	//-1) if/ else if/ else
	//-2) switch

	
	
	
	//int a = 10;
	//
	//if (a > 0) {
	//	printf("0보다 큽니다!");
	//}

	//printf("프로그래밍 끝 ㅅㄱ");

	
	
	
	
	//int a = 10;
	//if (20 < a && a < 30) {
	//	printf("ㅅㄱ");
	//}

	
	
	
	
	
	
	int a;
	scanf_s("%d", &a);
	if (a > 0) {
		printf("양수입니다.");
	}
	else {
		printf("0또는 음수입니다.");
	}





	

	int num = 10;
		//중첩(nested) 조건문
		if (num > 0) {
			if (num % 2 == 0) {
				printf("양의 짝수");
			}
			else {
				printf("양의 홀수");
			}
		}
	





	return 0;
}