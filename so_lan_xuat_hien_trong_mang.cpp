#include<stdio.h>
#include<math.h>

void nhap_mang(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void hienthi(int a[], int n){
	printf("day sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
	    printf("%4d", a[i]);
	}
}
void So_lan_xuat_hien(int a[], int n, int x)
{
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            dem = dem + 1;
        }
	}
	printf("\nso lan xuat hien trong mang la: %d", dem);  
}
int main()
{
	int a[100], n, x;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("nhap x: ");
	scanf("%d", &x);
	nhap_mang(a, n);
	hienthi(a, n);
	So_lan_xuat_hien(a, n, x);
}

