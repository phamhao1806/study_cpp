#include<stdio.h>
#include<stdlib.h>
void nhap_mang(int &n, int *a)
{
    printf("nhap cac phan tu mang:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", a+i);
    }
}
void xuat_mang(int &n, int *a)
{
    printf("mang sau khi nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%6d", *(a+i));
    }
}
void soduong( int n, int *a)
{
    int kt = 0;
    printf("\n hai so duong bang nhau la: ");
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
          if(*(a+i) > 0 && *(a+j) > 0 && *(a+i) == *(a+j)){
             kt = 1;
             printf("\na[%d] va a[%d]= %3d", i, j, *(a+i));
          }
      }
    }
    if(kt==0){
        printf("khong co"); 
    }
}
void sap_xep(int &n, int *a)
{   
    printf("\nday sau khi sap xep giam dan la:\n");
    int tg;
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
          if(*(a+i) < *(a+j)){
              tg = *(a+i);
              *(a+i) = *(a+j);
              *(a+j) = tg;
          }
       }
    }
    for(int i = 0; i < n; i++){
        printf("%6d", *(a+i));
    }
}
void ghifile(int &n, int *a, FILE *pf)
{
    pf = fopen("D://soduong11.txt","w");
    int kt=0;
    for(int i = 0; i < n; i++){
        if(*(a+i)>0){
            fprintf(pf, "%2d", (a+i));
            kt=1;
        }
    }
    if(kt == 1)
    printf("\n nghhi file thanh cong");
    if(kt==0)
    fprintf(pf, "khong co");
    fclose(pf);
}
    

int main(){
    int n;
    FILE  *pf;
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    nhap_mang(n, a);
    xuat_mang(n, a);
    soduong(n, a);
    sap_xep(n, a);
    ghifile(n, a ,pf);
    free(a);
}
    
              
   
    
