#include <stdio.h>
#include <string.h>
int main() {
//
//
//	char food[20];
//	printf("먹고싶은것:");
//	scanf("%s",&food);
//	for (int i = 0; i < sizeof(food) / sizeof(char); i++) {
//		
//		if (i % 2 == 0) {
//			food[i] = 'a';
//		}
//	}
//	printf("니가 먹고싶은것:%s", food);



	
	
	
	/*char coffee[20];

	printf("커피입력:");
	gets_s(coffee);
	printf("%s", &coffee);*/






	char bread[] = "icebread";

	//문자에 관련된 함수 str~
	//string-length 줄임말
	printf("%s의 길이는 %d", bread, strlen(bread));
	printf("%s의 길이는 %d", bread, sizeof(bread));






	return 0;
}