#include <stdio.h>

int main() {

	int arr[] = { 3,7,81,45,2,7,9 };
	int size = sizeof(arr) / sizeof(int);

	for (int gap = size / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < size; i++) {
			int temp = arr[i];
			int j = i;

			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");



	return 0;
}