#include<stdio.h>
#include<stdlib.h>
void nhaplieu(int &n,int* ptr ){
	printf("nhap vao so luong phan tu ");
	scanf ("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d] ",i);
		scanf("%d",ptr+i);
	}
}
void xuatmang(int n, int* ptr){
	
	for (int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}	
}
int tong(int n,int* ptr){
	int tong=0;
	for (int i=0;i<n;i++){
		if (*(ptr+i)<0 || *(ptr+i)%2==1){
			tong+= *(ptr+i);
		}
	}
	printf("\ntong le + am = %d",tong);
}  
void sapxep(int n,int *ptr){
	printf("\nsap xep tang dan:");
	int tam;
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (*(ptr+i)<*(ptr+j)){
			 	tam =*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=tam;	
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
int main(){
	int n;
	int* ptr = (int*)malloc(n*sizeof(int));
	nhaplieu(n,ptr);
	xuatmang(n,ptr);
	tong(n,ptr);
	sapxep(n,ptr);
	free(ptr);
}
