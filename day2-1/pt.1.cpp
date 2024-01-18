#include <stdio.h>

void square(int* num) {
	*num = *num * *num;
}
	int main() {
	int	n = 5;
	square(&n);
	printf("%d", n);


	return 0;
}
















	
