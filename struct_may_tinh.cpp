#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct maytinh
{
    char mamay[30];
    char tenmay[30];
    int ngaysx;
    char nhasx[30];
    float gia;
};

void nhap(maytinh *a, int n){
    for(int i = 0; i < n; i++){
        printf("nhap ma may:");
        fflush(stdin);
        scanf("%s", &(a+i)->mamay);
        printf("nhap ten may:");
        fflush(stdin);
        scanf("%s", &(a+i)->tenmay);
        printf("ngay san xuat:");
        scanf("%d", &(a+i)->ngaysx);
        printf("nhap nha san xuat:");
        fflush(stdin);
        scanf("%s", &(a+i)->nhasx);
        printf("nhap gia ban:");
       scanf("%f", &(a+i)->gia);
    }
}

void hienthi(maytinh *a, int n){
    printf("%-10s | %-14s | %-10d | %-10s| %.2f\n","ma may", "ten may", "ngay san xuat", " nha san xuat", "gia ban");
    for(int i = 0; i < n; i++){
        printf("%-10s | %-14s | %-10d | %-10s| %.2f\n", (a+i)->mamay, (a+i)->tenmay, (a+i)->ngaysx, (a+i)->nhasx, (a+i)->gia);
    }
}
int main()
{
	int n;
	do{
		printf("nhap so may :: "); scanf("%d", &n );
	}while( n <= 0 );
	maytinh *a;
	a = (maytinh*)malloc( n * sizeof(maytinh));
   nhap(a, n);
   hienthi(a, n);
}
             

