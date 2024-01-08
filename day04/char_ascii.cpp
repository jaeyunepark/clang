#include <stdio.h>

int main() {
	char a, b;
	scanf_s("%c", &a); // m enter

	/*getchar/enter Èí¼ö*/
	//scanf_s¿¡ ¶ç¾î¾²±â ³Ö±â
	scanf_s("%c",a, b);
	printf("%c %c", a, b);












	return 0;
}