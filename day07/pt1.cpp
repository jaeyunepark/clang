#include <stdio.h>
int main() {

	
	//int score[5];
	//for (int i = 0; i < 5; i++) {
	//	printf("수학 점수:");
	//	scanf_s("%d", &score[i]);
	//}

	//int sum = 0;
	//for (int i = 0; i < 5; i++) {
	//	printf("%d번재 학생점수: %d\n", i, score[i]);
	//	sum += score[i];
	//}
	//printf("반평균:%.2lf", double(sum / 5));



	
	
	
	
	////1번째 char 배열 선언법
	//char it[] = { 'm','e','g','a','s','t','u','d','y','!' };

	////printf("%d" , sizeof(it)); //4byte
	//for (int i = 0; i < sizeof(it); i++) {
	//	printf("%c", it[i]);
	//}

	char starbucks[20] = { 'l','a','t','t','e','t'};
	char megacoffee[20];

	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0';//null

	for (int i = 0; megacoffee[i] != '\0';i++) {
		printf("%c", megacoffee[i]);
	}



	return 0;
}