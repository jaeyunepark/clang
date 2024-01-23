#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node* next;
}node;

node* createnode() {
	node* newnode;
	newnode = (node*)malloc(sizeof(node));
	int n;
	printf("노드 값 입력:");
	scanf("%d", &n);
	newnode->data = n;
	newnode->next = NULL;
	return newnode;
}

void appendnode(node** head) {
	node* newnode = createnode();
	if (*head == NULL) {
		*head = newnode;
		return;
	}
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
	head = createnode();
	head->next = createnode();
	head->next->next = createnode();
	printnodes(head);

	return 0;
}