#include<stdio.h>
#include<malloc.h>

void nhap_mang(int *a, int n)
{
	for(int i = 0; i < n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void hien_thi(int *a, int n)
{
	printf("mang sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}

void sap_xep(int *a, int n){
	printf("\nmang sau khi sap xep lon den be: \n");
	int tg;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] < a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int *a;
	a = (int *)malloc(n*sizeof(int));
	nhap_mang(a, n);
	hien_thi(a, n);
	sap_xep(a, n);
}
