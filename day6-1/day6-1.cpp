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
	int newdata;
	printf("������ �Է�");
	scanf("%d", &newdata);
	newnode->data = newdata;
	newnode->next = NULL;
	return newnode;
}

void appendnode(node** head) {
	node* target;
	target = createnode();
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

void deletelastnode(node** head) {
	node* searcher = *head;
	if (searcher == NULL) {
		printf("������ �����Ͱ� �����ϴ�.\n");
		return;
	}
	if (searcher->next == NULL) {
		*head = NULL;
		printf("������ %d�� �����Ǿ����ϴ�.\n", searcher->data);
		return;
	}
	while (searcher->next->next != NULL) {
		printf("%d=>", searcher->data);
		searcher = searcher->next;
		deletetarget = searcher->next->next;
	}
	
	node* deletetarget = NULL;
	deletetarget = searcher->next->next;
	printf("������ %d�� �����Ǿ����ϴ�.\n", deletetarget->data);
	free(deletetarget);
}

int main() {
	node* head = NULL;


	while (1) {
		int system;
		printf("1.�������߰�\n 2.������Ȯ��\n 3.����\n 4.����");
		printf("��ȣ �Է�:");
		scanf("%d", &system);
		switch (system) {
		case 1:
			appendnode(&head);
			break;
		case 2:
			printnode(&head);
			break;
		case 3:
			printf("����");
			break;
		case 4:
			deletelastnode(&head);
			break;
		}

	}
	return 0;
}


