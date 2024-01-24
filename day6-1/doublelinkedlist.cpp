#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct coffee {
	char name[50];
	int price;
}coffee;

typedef struct node {
	struct node* prev;
	coffee data;
	struct node* next;
};

node* createnode() {
	
}

void appendnode() {

}

