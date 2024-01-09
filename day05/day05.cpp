#include <stdio.h>

int main() {

	char alpha;
	printf("ют╥б:");
	scanf_s("%c", &alpha);
	
	if (65 <= (int)alpha && (int)alpha <= 90) {
		printf("%c", (char)(alpha + 32));
	}
	else {
		printf("%c", (char)(alpha - 32));
	}

	







	return 0;
}