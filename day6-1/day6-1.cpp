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
	printf("데이터 입력");
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
		printf("삭제할 데이터가 없습니다.\n");
		return;
	}
	if (searcher->next == NULL) {
		*head = NULL;
		printf("데이터 %d가 삭제되었습니다.\n", searcher->data);
		return;
	}
	while (searcher->next->next != NULL) {
		printf("%d=>", searcher->data);
		searcher = searcher->next;
		deletetarget = searcher->next->next;
	}
	
	node* deletetarget = NULL;
	deletetarget = searcher->next->next;
	printf("데이터 %d가 삭제되었습니다.\n", deletetarget->data);
	free(deletetarget);
}

int main() {
	node* head = NULL;


	while (1) {
		int system;
		printf("1.데이터추가\n 2.데이터확인\n 3.종료\n 4.종료");
		printf("번호 입력:");
		scanf("%d", &system);
		switch (system) {
		case 1:
			appendnode(&head);
			break;
		case 2:
			printnode(&head);
			break;
		case 3:
			printf("종료");
			break;
		case 4:
			deletelastnode(&head);
			break;
		}

	}
	return 0;
}


