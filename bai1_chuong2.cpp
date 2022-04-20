#include<stdio.h>
int main(){
	int a, *p;
	a = 6;
	p = &a;
	printf ("\n dia chi bien a la %p", p);
	printf ("\n gia tri cua a la %d", *p);
	printf("\n nhap gia tri cua a: ");
	scanf("%d", &a);
	printf ("\n gia tri cua a la %d",*p);
	printf("\nnhap gia tri cua a qua p: ");
	scanf("%d",p);
	printf ("\n gia tri cua a la %d",*p);
}
