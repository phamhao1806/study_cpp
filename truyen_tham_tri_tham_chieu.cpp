#include<stdio.h>

void swap_thamtri(int a, int b){
    int tam = a; 
    a = b;
    b = tam;
}

void swap_thamchieu(int &a, int &b){
    int tam = a;
    b = a;
    b = tam;
}

int main(){
    int a, b;
    printf("nhap vao 2 so a, b:");
    scanf("%d%d", &a, &b);
    printf("\n gia tri ban dau: a = %d va b = %d", a, b);
    swap_thamtri(a, b);
    printf("\n hoan doan-truyen tham tri: a = %d va b =%d", a, b);
    swap_thamchieu(a, b);
}
