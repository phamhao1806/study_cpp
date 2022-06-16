#include<stdio.h>
#include<malloc.h>

void nhap_mang(int *a, int n)
{   
    printf("nhap phan tu mang:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}

void hienthi(int *a, int n)
{
    printf("mang sau khi nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d]= %d\n", i , a[i]);
    }
}
void in_phantu(int *a, int n)
{
    printf("cac phan tu chia het cho 3 va nho hon 50 la:\n");
    for(int i = 0; i < n; i++){
        if(a[i] % 3 == 0 && a[i] < 50){
            printf("a[%d]= %d\n", i, a[i]);
        }
    }
}
void chen_phantu(int *a, int n, int x, int k)
{
    printf("nhap phan tu x:");
    scanf("%d", &x);
    printf("nhap vi tri k:");
    scanf("%d", &k);
    for(int i = n; i >= k; i--){
        a[i] = a[i-1];
    }
    for(int i = 1; i < n+1; i++){
        printf("\nmang sau khi chen la:\n");
        printf("a[%d]= %d\n", i , a[i]);
    }
}
int main()
{
    int n, x, k;
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n*sizeof(int));
    nhap_mang(a, n);
    hienthi(a, n);
    in_phantu(a, n);
    chen_phantu(a, n, x, k);
}
