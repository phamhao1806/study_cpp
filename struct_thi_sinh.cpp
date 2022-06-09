#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct thisinh{
     char sbd[10];
	  char tenthisinh[100];
	  int ngaysinh, thangsinh, namsinh;
	  char quequan[20];
	  float diemtong;	
};
void nhapsl(int &n){
    printf("nhap vao so luong thi sinh can quan ly : ");
	scanf("%d",&n);	
}
void nhapthongtin(thisinh *a, int n){
	for(int i=0;i<n;i++){
		printf("\nnhap vao thong tin cua thi sinh thu %d",(i+1));
		printf("\nnhap vao so bao danh : ");fflush(stdin);gets((a+i)->sbd);
		printf("nhap vao ten : ");fflush(stdin);gets((a+i)->tenthisinh);
		printf("nhap vao ngay : ");scanf("%d",&(a+i)->ngaysinh);
		printf("nhap vao thang : ");scanf("%d",&(a+i)->thangsinh);
		printf("nhap vao nam : ");scanf("%d",&(a+i)->namsinh);	
		printf("nhap vao que quan : ");fflush(stdin);gets((a+i)->quequan);
		printf("nhap vao tong diem : ");scanf("%f",&(a+i)->diemtong);
   }	
}
void hienthi(thisinh *a, int n){
    printf("%-10s| %-14s| %-s | %-10s| %s\n","sbd", "tenthisinh", "ngaysinh","quequan", "diemtong");
    for(int i = 0; i < n; i++){
        printf("%-10s| %-14s| %d/%d/%d| %-10s| %.2f\n", (a+i)->sbd, (a+i)->tenthisinh, (a+i)->ngaysinh, (a+i)->thangsinh, (a+i)->namsinh, (a+i)->quequan, (a+i)->diemtong);
    }
}
void in_theo_que(thisinh *a, int n){
    printf("danh sach thi sinh que o ha noi la:\n");
    for(int i = 0; i < n; i++){
        if(strcmp(((a+i)->quequan),"ha noi")==0){
            printf("%-10s| %-14s| %-s | %-10s| %s\n","sbd", "tenthisinh", "ngaysinh","quequan", "diemtong");
            printf("%-10s| %-14s| %d/%d/%d| %-10s| %.2f\n", (a+i)->sbd, (a+i)->tenthisinh, (a+i)->ngaysinh, (a+i)->thangsinh, (a+i)->namsinh, (a+i)->quequan, (a+i)->diemtong);
        }
    }
}
int main(){
    int n;
    nhapsl(n);
    thisinh *a;
    a = (thisinh*)malloc(n*sizeof(thisinh));
    nhapthongtin(a, n);
    hienthi(a, n);
    in_theo_que(a,n);
}
  
