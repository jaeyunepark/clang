#include <stdio.h>
#include <string.h>

//typedef int umm;//int�� umm��� ��

typedef struct coffee {
	char name[50];
	int price;
	int shorts;
}coffee;

int main() {
	int a[3]={1,2,3};
	coffee menu[3] = {
		{"americano",6500,2},
		{"signature",9000,1},
		{"today",5000,2}
	};
	for (int i = 0; i <3 ; i++) {
		
		printf("Ŀ�� �̸�:%s, ����:%d, ����:%d\n", menu[i].name,menu[i]. price, menu[i]. shorts);
	}
	
}




