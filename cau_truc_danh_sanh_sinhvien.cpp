#include<stdio.h>
#include<string.h>
#include<malloc.h>


struct sinhvien
{
    char masv[30];
    char hoten[30];
    int nam;
    char lop[30];
    int diem;
};

void nhap_thongtin(sinhvien *a, int n)
{
    for(int i = 0; i < n; i++){
        printf("nhap thong tin sinh vien thu: %d \n", i+1);
        printf("nhap ma sinh vien: ");
        fflush(stdin);
        gets(a[i].masv);
        printf("nhap ho ten sinh vien: ");
        fflush(stdin);
        gets(a[i].hoten);
        printf("nhap nam sinh: ");
        scanf("%d", &a[i].nam);
        printf("nhap lop sinh vien: ");
        fflush(stdin);
        gets(a[i].lop);
        printf("nhap diem tong ket: ");
        scanf("%d", &a[i].diem);
    }
}

void hienthi(sinhvien *a, int n)
{
    printf("Danh sach thong tin sinh vien:\n");
    for(int i = 0; i < n; i++){
        printf("ma sinh vien : %-10s | ho ten : %-14s | nam sinh : %-4d | lop sinh vien : %-10s | diem tong ket : %4d \n", a[i].masv, a[i].hoten, a[i].nam, a[i].lop, a[i].diem);
    }
}
void in_diemtong4(sinhvien *a, int n)
{
    printf("\nthong tinh sinh vien co diem tong tren 4 la:\n");
    for(int i = 0; i < n; i++){
        if(a[i].diem > 4){
            printf("ma sinh vien : %-10s | ho ten : %-14s | nam sinh : %-4d | lop sinh vien : %-10s | diem tong ket : %4d \n", a[i].masv, a[i].hoten, a[i].nam, a[i].lop, a[i].diem);
        }
    }
}

void in_lop(sinhvien *a, int n)
{
    printf("\nthong tin sinh vien lop D14CNPM8 la: \n");
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].lop, "D14CNPM8") == 0){
            printf("ma sinh vien : %-10s | ho ten : %-14s | nam sinh : %-4d | lop sinh vien : %-10s | diem tong ket : %4d \n", a[i].masv, a[i].hoten, a[i].nam, a[i].lop, a[i].diem);
        }
    }
}
void ghi_file(sinhvien *a, int n)
{
    FILE *pf;
    pf = fopen("D:\dulieu13.dat", "w");
    fprintf(pf,"danh sach thong tin sinh vien sinh nam 2000 la :\n");
    for(int i = 0; i < n; i++){
        if(a[i].nam == 2000){
            printf("ma sinh vien : %-10s | ho ten : %-14s | nam sinh : %-4d | lop sinh vien : %-10s | diem tong ket : %4d \n", a[i].masv, a[i].hoten, a[i].nam, a[i].lop, a[i].diem); 
        }
    }
    fclose(pf);
}
int main()
{
   int n; 
   printf("nhap so luong sinh vien:");
   scanf("%d", &n);
   sinhvien *a;
   a = (sinhvien *)malloc(n*sizeof(sinhvien));
   nhap_thongtin(a, n);
   hienthi(a, n);
   in_diemtong4(a, n);
   in_lop(a, n);
   ghi_file(a, n);
   free(a);
}
                        
