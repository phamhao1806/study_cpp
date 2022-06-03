#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int &n, int *ptr)
{   
    printf("nhap cac phan tu mang: \n");
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", ptr+i);
    }   
}
void xuat_mang(int &n, int *ptr)
{
    printf("mang sau khi nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%6d", *(ptr+i));
    }
}
float tbcong_so_am(int &n, int *ptr)
{
    float sum = 0, tbc;
    int k = 0;
    for(int i = 0; i < n; i++){
        if(*(ptr+i) < 0){
            sum = sum + *(ptr+i);
            k++;
        }
    }
    if(k == 0){
       printf("\n khong co so am nao trong mang va tbc = 0");
    }else{
       tbc = sum/k;
       printf("\n trung binh cong so am trong mang: %2f", tbc);
    }
}
void sap_xep_tang_dan(int &n, int *ptr)
{   
    printf("\n mang sau khi sap xep tang dan:\n");
    int tg;
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
        if(*(ptr+i) > *(ptr+j)){
            tg = *(ptr+i);
            *(ptr+i) = *(ptr+j);
            *(ptr+j) = tg;
        }
      }
    }
    for(int i = 0; i < n; i++){
        printf("%6d", *(ptr+i));
    }
}
           
int main(){
    int n;
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*sizeof(int));
    nhap_mang(n, ptr);
    xuat_mang(n, ptr);
    tbcong_so_am(n, ptr);
    sap_xep_tang_dan(n, ptr);
    free(ptr);
} 

