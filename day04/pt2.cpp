#include <stdio.h>

int main() {
	

	int num;
	printf("글자입력:");
	scanf_s("%c", &num);
	printf("%d", num);

	char alpha;
	int isCapital, isSmall, toAscii;
	printf("입력:");
	scanf_s("%c", &alpha);
	toAscii = (int)alpha;
	isCapital = (65 <= toAscii && to Ascii <= 90);
	isSmall = (97 <= toAscii && to Ascii <= 122);
	printf("%d", is Capital || isSmall ? 1 : 0);

	char capital;
	printf("대문자:");
	scanf_s("소문자: %c", (char)((int)capital + 32));



	return 0;
}