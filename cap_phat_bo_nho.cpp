#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("nhap so luong phan tu n:");
	scanf("%d", &n);
	int* ptr = (int*)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf("\n errol : khong cap phat duoc");
	    return 0;
	}
	for(int i = 0; i < n; i++){
	    printf("a[%d]= ", i);
		scanf("%d", ptr+i);
	}
	for(int i = 0; i < n; i++){
	    printf("%d ", *(ptr+i));
	}
	free(ptr);
}				
