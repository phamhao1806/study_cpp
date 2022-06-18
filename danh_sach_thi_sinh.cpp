#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct thisinh
{
    char sbd[30];
    char hoten[30];
    int nam;
    char quequan[30];
    float tongdiem;
};

void nhapthongtin(thisinh *a, int n)
{
    for(int i = 0; i < n; i++){
        printf("nhap thong tin thi sinh %d \n", i+1);
        printf("nhap so bao danh: ");
        fflush(stdin);
        gets(a[i].sbd);
        printf("nhap ho ten thi sinh: ");
        fflush(stdin);
        gets(a[i].hoten);
        printf("nhap nam sinh: ");
        scanf("%d", &a[i].nam);
        printf("nhap que quan: ");
        fflush(stdin);
        gets(a[i].quequan);
        printf("nhap tong diem: ");
        scanf("%f", &a[i].tongdiem);
    }
}

void hienthi(thisinh *a, int n)
{
    printf("danh sach thong tin thi sinh la:\n");
    for(int i = 0; i < n; i++){
        printf("so bao danh: %-14s | ho ten: %-10s | nam sinh: %-4d | que quan: %-10s | tong diem : %.2f \n", a[i].sbd, a[i].hoten, a[i].nam, a[i].quequan, a[i].tongdiem);
    }
}
 
void in_quequan(thisinh *a, int n)
{
    printf("danh sach sinh vien o HN la: \n");
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].quequan, "HN") == 0){
            printf("so bao danh: %-14s | ho ten: %-10s | nam sinh: %-4d | que quan: %-10s | tong diem : %.2f \n", a[i].sbd, a[i].hoten, a[i].nam, a[i].quequan, a[i].tongdiem);
        }
    }
}

void in_nam(thisinh *a, int n)
{
    printf("danh sach thi sinh sinh nam 2001 la: \n");
    for(int i = 0; i < n; i++){
        if(a[i].nam == 2001){
            printf("so bao danh: %-14s | ho ten: %-10s | nam sinh: %-4d | que quan: %-10s | tong diem : %.2f \n", a[i].sbd, a[i].hoten, a[i].nam, a[i].quequan, a[i].tongdiem);
        }
    }
}   
                        
int main()
{
    int n;
    printf("nhap so luong thi sinh: ");
    scanf("%d", &n);
    thisinh *a;
    a = (thisinh *)malloc(n*sizeof(thisinh));
    nhapthongtin(a, n);
    hienthi(a, n);
    in_quequan(a, n);
    in_nam(a, n);
    
}
