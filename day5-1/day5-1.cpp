#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node* next;
}node;

node* createnode(int n) {
	node* newnode;
	newnode = (node*)malloc(sizeof(node));
	newnode->data = n;
	newnode->next = NULL;
	return newnode;
}
void printnodes(node* head) {
	while (head->next != NULL) {
		printf("%d=>", head->data);
		head = head->next;
	}
	printf("%d", head->data);
}



int main() {

	node* head;
	head = createnode(10);
	head->next = createnode(20);
	head->next->next = createnode(30);
	printnodes(head);

	return 0;
}