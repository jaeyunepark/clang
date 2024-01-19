#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	//int* arr;
	//arr = (int*)malloc(5 * sizeof(int)); //(얼만큼 무엇을)
	//for (int i = 0; i < 5; i++) {
	//	arr[i] = i + 10;
	//}
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", arr[i]);
	//}
	//free(arr);//삭제


	
	
	
	
	
	int num;
	printf("반 학생수 입력:");
	scanf("%d", num);

	int* engscore;
	engscore = (int*)malloc( num * sizeof(int) );
	for (int i = 0; i < num; i++) {
		int score;
		printf("%d번째 영어 점수:", i);
		scanf("%d", &score);
		engscore[i] = score;
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += engscore[i];
	}
	printf("반평균: %.2lf", (double)sum / num);
	free(engscore);











	return 0;
}