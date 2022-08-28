#include<stdio.h>
#include<malloc.h>

void nhap_mang(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void hien_thi(int *a, int n){
	printf("mang sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}

int main(){
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d", &n);
	int *a;
	a = (int *)malloc(n*sizeof(int));
	nhap_mang(a, n);
	hien_thi(a, n);
	free(a);
}
