#include <stdio.h>
#include <string.h>


typedef struct book {
	char name[50];
	char writer[50];
	int price;
	int isbn;
}book;

void raisebookprice(book* something) {
	int p;
	printf("���� �Է�:");
	scanf("%d", &p);
	something->price += p;

}

void changewriter(book* something) {
	char name[50];
	printf("�۰� �Է�:");
	scanf("%s", &name);
	strcpy(something->writer, name);
}


int main() {
	
	return 0;
}