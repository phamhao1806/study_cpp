#include<stdio.h>
int main(){
	int var;
	printf("nhap var :");
	scanf("%d", &var);
	printf("\n gia tri cua var = %d", var);
	printf("\n dia chi cua var trong bo nho la : %p", &var);
	
	int *pc, c;
	c = 3;
	pc = &c;
	printf("\n gia tri cua c la : %d", *pc);
	printf("\n dia chi cua c la : %p", pc);
}	
