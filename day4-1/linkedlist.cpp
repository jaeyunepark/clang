#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node* next;
}node;


int main() {

	node first;
	first.data = 1;

	node second;
	second.data = 2;

	node third;
	third.data = 3;


	first.next = &second;
	second.next = &third;
	third.next = NULL;

	

		node* head;
		head = &first;
		printf("%d->", head->data);
		head = head->next;
		printf("%d->", head->data);
		head = head->next;
		printf("%d->", head->data);
	
}









	