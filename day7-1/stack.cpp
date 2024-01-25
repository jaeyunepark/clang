#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
	int top;
	int data[100];
}stack;

void initstack(stack* stack) {
	stack->top = -1;
}

int isfull(stack* stack) {
	return stack->top == 99;
}

void pop(stack* stack) {
	

}


void push(stack* stack) {
	if (isfull(stack)) {
		printf("����\n");
		return;
	}
	int num;
	printf("�����Է�:");
	scanf("%d", &num);
	stack->top++;
	stack->data[stack->top] = num;
}
int isempty(stack* stack) {
	return stack->top == -1;
}

void printstack(stack* stack) {
	if (isempty(stack)) {
		printf("��������\n");
		return;
	}
	for (int i = stack->top; i >= 0; i--) {
		printf("%d->", stack->data[i]);
	}
	printf("���� ����\n");
	return;
}
int main() {
	stack st;
	initstack(&st);
	push(&st);
	push(&st);
	push(&st);
	printstack(&st);
	return 0;
}