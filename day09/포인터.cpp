#include <stdio.h>
int main() {

	/*int a = 10;*/

	//=���Կ�����
	//++�ø��� ������
	//& �ּҿ�����

	//printf("%d", &a);
	//int* pa;

	// * ������ ������=�ּڰ��� �ָ� �ű⿡ ��� ���� �����ٰ�
	
	
	
	
	
	
	
	
	int a = 10;
	int* pa = &a;

	printf("*pa:%d\n", *pa);
	printf("a: %d\n", a);
	printf("pa: %d\n", pa);
	printf("&a: %d\n", &a);

	*pa = 50;
	printf("a: %d\n", a);


		




	return 0;
}