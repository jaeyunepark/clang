#include <stdio.h>

int main() {

	/*int a;
	printf("�����Է�:");
	scanf_s("%d", &a);
	int sum; //������ ��
	for (int i = 0; i <= a; i++) {
		if (i % 2 !=0) {
			sum += i;
		}
	}
	printf("%d\n",i);*/

	
	
	/*int sum = 0,avg=0,count=0;
	while (1) {
		int num;
		printf("���� �Է�:");
		scanf_s("%d", &num);
		if (num <= 0)break;
		sum += num;
		count++;
	}
	printf("�հ�;%d ���: %.2lf ����: %d",sum,(double)sum/count,count);*/


	
	
	
	int a,b;
	printf("1.���ϱ� 2.���ϱ� 3.���� 4.������");
	switch (a,b) {
	case '1':int a, b;
		printf("�����Է�:");
		scanf_s("%d", &a);
		printf("�����Է�:");
		scanf_s("%d", &b);
		printf("%d���ϱ�%d=%d �Դϴ�.", a, b, a + b);
		break;
	case '2':int a, b;
		printf("�����Է�:");
		scanf_s("%d", &a);
		printf("�����Է�:");
		scanf_s("%d", &b);
		printf("%d���ϱ�%d=%d �Դϴ�.", a, b, a * b);
		break;
	case '3':int a, b;
		printf("�����Է�:");
		scanf_s("%d", &a);
		printf("�����Է�:");
		scanf_s("%d", &b);
		printf("%d����%d=%d �Դϴ�.", a, b, a - b);
		break;
	case '4':int a, b;
		printf("�����Է�:");
		scanf_s("%d", &a);
		printf("�����Է�:");
		scanf_s("%d", &b);
		printf("%d������%d=%d �Դϴ�.", a, b, a / b);
		break;
	}
	


	return 0;
}