#include<stdio.h>
#include<stdlib.h>
void mang(int a[50], int &n){
    //nhap mang va hien thi day tren mot cot
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
        printf("\n");
    }
    // so lon nhat trong mang
    int max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf(" so lon nhat trong mang la: %d", max);
    //sap xep mang giam dan
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
    printf("\n");
    printf("mang sau khi sap xep: \n");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}
int main(){
    int n;
    int a[50];
    printf("nhap so phan tu n:");
    scanf("%d", &n);
    mang(a, n);
}
    
