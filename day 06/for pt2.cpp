#include <stdio.h>

int main() {

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d %d\n", i, j);
		}
	}*/


	
	
	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ���ϱ� %d �� %d �̴�\n", i, j, i*j);
		}
	}*/

	
	
	
	int num;
	printf("���� ��");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("*\n");
		}
	}












	return 0;
}

