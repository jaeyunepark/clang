#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	//int* arr;
	//arr = (int*)malloc(5 * sizeof(int)); //(��ŭ ������)
	//for (int i = 0; i < 5; i++) {
	//	arr[i] = i + 10;
	//}
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", arr[i]);
	//}
	//free(arr);//����


	
	
	
	
	
	int num;
	printf("�� �л��� �Է�:");
	scanf("%d", num);

	int* engscore;
	engscore = (int*)malloc( num * sizeof(int) );
	for (int i = 0; i < num; i++) {
		int score;
		printf("%d��° ���� ����:", i);
		scanf("%d", &score);
		engscore[i] = score;
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += engscore[i];
	}
	printf("�����: %.2lf", (double)sum / num);
	free(engscore);











	return 0;
}