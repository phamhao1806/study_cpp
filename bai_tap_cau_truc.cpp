#include<iostream>

struct date
{
    int ngay, thang, nam;
};
struct sinhvien
{
    int masv;
    char hoten[20];
    date ngaysinh;
};
void nhap(sinhvien &sv1)
{
    printf("nhap ma sinh vien:");
    scanf("%d", &sv1.masv);
    printf("nhap ho ten:");
    fflush(stdin);
    gets(sv1.hoten);
    printf("nhap ngay sinh:");
    scanf("%d", &sv1.ngaysinh.ngay);
    printf("nhap thang sinh:");
    scanf("%d", &sv1.ngaysinh.thang);
    printf("nhap nam sinh:");
    scanf("%d", &sv1.ngaysinh.nam);
}
