#include<stdio.h>
int main(){
    int n,m,i,j;
    int a[5][5];
    printf("nhap so hang:");scanf("%d",&n);
    printf("nhap so cot:");scanf("%d",&m);
    printf("nhap gia tri tung phan tu\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }   
    }	    
    printf("ma tran vua nhap la\n");
    for(i=0; i<n; i++){
      for(j=0; j<m; j++){
        printf("%7d", a[i][j]);
        printf("\n");
      }
    }   
    int max = a[1][0];
    for(i=0; i<n; i++){
      for(j=0; j<m; j++){ 
        if(a[1][j]> max){
           max= a[1][j];
        }
	  }
	}  
    printf("gia tri max cua hang 1 la %7d", max);
}    
  
