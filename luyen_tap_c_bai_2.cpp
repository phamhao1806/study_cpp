#include<stdio.h>
#include<stdlib.h>

void nhap(int &n, int *ptr)
{
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", ptr+i);
    }
}
void xuat(int &n, int *ptr)
{
    printf("mang sau khi nhap la : \n");
    for(int i = 0; i < n; i++){
        printf("%6d", *(ptr+i));
        printf("\n");
    }
}
float tim_vi_tri(int &n, int *ptr)
{   int a[50];
    int min = *(a+0);
    int index;
    for(int i = 0; i < n; i++){
        if( *(ptr+i) < min){
            min = *(ptr+i);
            index = i;
        }
    }
    return index;
    printf("vi tri cua phan tu nho nhat la: %f");
}
void sapxep(int &n, int *ptr)
{
    printf("sap xep mang giam dan: \n");
    int tg;
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
          if(*(ptr+i) < *(ptr+j)){
              int tg = *(ptr+i);
              *(ptr+i) = *(ptr+j);
              *(ptr+j) = tg;
            }
      }
    }
    for(int i = 0; i < n; i++){
        printf("%6d", *(ptr+i));
        printf("\n");
    }
}
int main(){
    int a[100];
    int n;
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*sizeof(int));
    nhap(n,ptr);
    xuat(n,ptr);
    tim_vi_tri(n, ptr);
    sapxep(n, ptr);
}
