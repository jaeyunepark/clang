#include<stdio.h>
#include<stdlib.h>

typedef struct queuenode {
	int data;
	struct queuenode* next;
}queuenode;


typedef struct queue{
	queuenode* front;
	queuenode* rear;
}queue;

void initqueue(queue* q) {
	q->front = NULL;
	q->rear = NULL;
}

void enqueue(queue* q) {
	queuenode* newnode = createnode();

	if (q->front==NULL) {
		q->front = newnode;
	}
	else {
		q->rear->next = newnode;
	}
	q->rear = newnode;
}

void printqueue(queue* q) {

	if (q->front == NULL) {
		printf("큐가 비었음");
		return;
	}
	queuenode* searcher = q->front;
	while (searcher != NULL) {
		printf("%d->", searcher->data);
		searcher - searcher->next;
	}
	printf("%d", searcher->data);
	printf("\n");
}

void enqueue()


int main() {
	queue q;
	initqueue(&q);
	
	enqueue(&q);
	enqueue(&q);
	enqueue(&q);
	printqueue
}