#include <stdio.h>

int main() {

	/*int arr[5] = { 2,4,6,8,10 };
	printf("%d\n", arr);
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[1]);

	int* pa;
	pa = &arr[2];
	*pa = 100;

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);*/


	int arr[5] = { 2,4,6,8,10 };
	printf("%d\n", arr);
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);

	printf("%d\n ", arr + 1);
	printf("%d\n", &arr[1]);
	printf("%d\n", *(arr + 1));




	return 0;
}