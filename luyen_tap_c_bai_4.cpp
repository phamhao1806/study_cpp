#include<stdio.h>
#include<stdlib.h>

void comatran(int &m, int &n){
    printf("nhap so hang ma tran:");
    scanf("%d", &m);
    printf("nhap so cot ma tran :");
    scanf("%d", &n);
}
void nhapmatran(int &m, int &n, int *matran){
    printf("\n nh ap vao ma tran so nguyen: \n");
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
          printf("a[%d][%d]= ", i, j);
          scanf("%d", matran+i*n+j);
      }
    }
}
void inmatran(int &m, int&n, int *matran){
    printf(" \n ma tran vua nhap la:\n");
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
          printf("%-5d", *(matran+i*n+j));
      }
    }
    printf("\n");
}
void tbcongle(int m, int n, int *matran){
    float sum = 0;
    int k = 0;
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
          if(*(matran+i*n+j) % 2 != 0){
              sum += *(matran+i*n+j);
              k++;
          }
        }
    }
    printf("trung binh cong le: %.2f",(sum/k));
}
void lemaxcot0(int m, int n, int *matran){
    int max0 = *(matran+0*n+0);
    for(int i = 1; i < m; i++){
        if(*(matran+i*n+0+0) % 2 != 0 && max0 < *(matran + i*n + 0)){
            max0 = *(matran+ i*n+0);
        }
        if(max0 % 2 != 0 && max0 != 0){
            printf("\n so le lon nhat tren cot 0 la: %d", max0);
        }else{
             printf("cot 0 cua ma tran vua nhap khong chua so le");
         }
    }
}
int main(){
    int m, n; int *matran;
    comatran(m, n);
    matran =(int *)malloc(m*n*sizeof(int));
    nhapmatran(m, n, matran);
    inmatran(m, n, matran);
    tbcongle(m, n, matran);
    lemaxcot0(m, n, matran);
    free(matran);
}

