#include <stdio.h>

int main() {

	
	
	char alpha[100];
	int count = 0;
	
	while (1) {
		char a;
		printf("���ĺ��� �Է�(0 ����):");
		scanf_s("%c", &a);
		getchar();
		if (a == '0') {
			alpha[count] = '\0';
			break;
		}
		alpha[count] = a;
		count++;
	}
	printf("%s", alpha);






	return 0;
}