#include <stdio.h>
#include <string.h>



int main() {

	int arr[] = { 6,4,3,7,1,9,8 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

}