#include <stdio.h>
#include <stdlib.h>

int main() {

	

	int n;
	printf("n�� �Է�:");
	scanf("%d", &n);

	int* ptr;
	ptr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		printf("�����Է�:");
		scanf("%d", &ptr[i]);
	}

	int max = ptr[0];

	for (int i = 0; i < n; i++) {
		if (max < ptr[i]) {
			max = ptr[i];
		}
	}
	
	printf("���� ū ���� %d �Դϴ�.", max);










	












	return 0;
}