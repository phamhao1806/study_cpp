#include<stdio.h>
#include<malloc.h>
void nhap_mang(int *a, int n)
{
    printf("nhap cac phan tu mang:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}
void xuat_mang(int *a, int n)
{
    printf("mang sau khi nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }
}
void soduong( int *a, int n)
{
    int kt = 0;
    printf("\nhai so duong bang nhau va canh nhau la: ");
    for(int i = 0; i < n; i++)
       if(a[i] > 0 && a[i] == a[i+1])
       {
          kt = 1;
          printf("%d", a[i]);
       }
    if(kt==0){
       printf("khong co"); 
    }
}
void sap_xep(int *a, int n)
{   
    printf("\nday sau khi sap xep giam dan la:\n");
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
void ghifile(int *a, int n)
{
    FILE *pf;
    pf = fopen("D:\\soduong11.txt", "w");
    fprintf(pf, "gia tri duong trong day :\n");
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            fprintf(pf,"%4d", a[i]);
        }
    }
    fclose(pf);
}
    

int main(){
    int n;
    FILE  *pf;
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    nhap_mang(a, n);
    xuat_mang(a, n);
    soduong(a, n);
    sap_xep(a, n);
    ghifile(a, n);
    free(a);
}
    
              
   
    
