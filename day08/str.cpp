#include <stdio.h>
#include <string.h>
int main() {
//
//
//	char food[20];
//	printf("�԰������:");
//	scanf("%s",&food);
//	for (int i = 0; i < sizeof(food) / sizeof(char); i++) {
//		
//		if (i % 2 == 0) {
//			food[i] = 'a';
//		}
//	}
//	printf("�ϰ� �԰������:%s", food);



	
	
	
	/*char coffee[20];

	printf("Ŀ���Է�:");
	gets_s(coffee);
	printf("%s", &coffee);*/






	char bread[] = "icebread";

	//���ڿ� ���õ� �Լ� str~
	//string-length ���Ӹ�
	printf("%s�� ���̴� %d", bread, strlen(bread));
	printf("%s�� ���̴� %d", bread, sizeof(bread));






	return 0;
}