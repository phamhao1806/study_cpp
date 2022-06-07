#include<stdio.h>
#include<string.h>

struct Sach{
	char masach[30];
	char tensach[30];
	int namxb;
	char nhaxb[30];
	float giaban;
};

//nhap vao danh sach gom n cuon sach vao bo nho dong
void nhapsach(Sach s[], int n){
	for(int i=0;i<n;i++){
		printf("nhap thong tin sach thu %d: \n",i+1);
		printf("nhap ma sach: \n");
		fflush(stdin);
		gets(s[i].masach);
		printf("nhap ten sach: \n");
		fflush(stdin);
		gets(s[i].tensach);
		printf("nhap nam xuat ban: \n");
		scanf("%d",&s[i].namxb);
		printf("nhap nha xuat ban: \n");
		fflush(stdin);
		gets(s[i].nhaxb);
		printf("nhap gia ban: \n");
		scanf("%f",&s[i].giaban);
	}
}

//hien thi day du thong tin cua n cuon sach ra man hinh. Moi cuon sach tren mot dong
void htsach(Sach s[], int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("ma sach: %s, ten sach: %s, nam xuat ban: %d, nha xuat ban: %s, gia ban: %.2f",s[i].masach,s[i].tensach,s[i].namxb,s[i].nhaxb,s[i].giaban);
		printf("\n");
	}
}

//liet ke ra man hinh tat ca nhung cuon sach cua nha xuat ban "BGD"
void nxb(Sach s[], int n){
	char ten[20]="bgd";
	int kt=0;
	printf("\nnhung cuon sach cua nha xuat ban bgd: \n");
	for(int i=0;i<n;i++){
		if(strcmp(s[i].nhaxb,ten)==0){
		kt=1;
		printf("ma sach: %s, ten sach: %s, nam xuat ban: %d, nha xuat ban: %s, gia ban: %.2f",s[i].masach,s[i].tensach,s[i].namxb,s[i].nhaxb,s[i].giaban);
		printf("\n");	
		}		
	}
	if(kt==0)
	printf("khong co sach cua nha xuat ban bgd");
}

//nhap vao mot nam, in ra man hinh tat ca nhung cuon sach xuat ban nam do
void namxb(Sach s[], int n){
	int nam;
	printf("nhap nam: ");
	scanf("%d",&nam);
	int kt=0;
	for(int i=0;i<n;i++){
		if(s[i].namxb==nam){
			kt=1;
			printf("ma sach: %s, ten sach: %s, nam xuat ban: %d, nha xuat ban: %s, gia ban: %.2f",s[i].masach,s[i].tensach,s[i].namxb,s[i].nhaxb,s[i].giaban);
		    printf("\n");
		}
	}
	if(kt==0)
	printf("khong co sach nao xuat ban nam %d",nam);
}

int main()
{ int n;
  Sach s[100];
  printf("nhap so luong sach: \n");
  scanf("%d",&n);
  nhapsach(s,n);
  htsach(s,n);
  nxb(s,n);
  namxb(s,n);
}
