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
	printf("노드값 입력:");
	scanf("%d", &n);
	newnode->data = n;
	newnode->next = NULL;
	return newnode;
}

void appendnode(node** head) {
	node* target;
	target=createnode();
	if (*head == NULL) {
		*head = target;
		return;
	}
	else {
		node* searcher = *head;
		while (searcher->next != NULL) {
			searcher = searcher->next;
		}
		searcher->next = target;
	}
}

void printnode(node** head) {
	node* searcher = *head;
	while (searcher->next != NULL) {
		printf("%d=>", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);
}

int main() {
	node* head = NULL;
	appendnode(&head);
	appendnode(&head);
	appendnode(&head);
	appendnode(&head);
	appendnode(&head);
	return 0;
}