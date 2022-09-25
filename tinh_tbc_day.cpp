#include<stdio.h>

void nhap(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void hienthi(int a[], int n)
{
	printf("day sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}

void tbc(int a[], int n)
{
	int s = 0;
	float dem = 0;
	for(int i = 0; i < n; i++){
		s = s + a[i];
		dem ++; 
	}
	printf("\ntrung binh cong cua day la : %f", s/dem);
}

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int a[100];
	nhap(a, n);
	hienthi(a, n);
	tbc(a, n);
}
