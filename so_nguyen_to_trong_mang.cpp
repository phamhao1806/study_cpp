#include<stdio.h>

void NhapMang ( int a[], int n )
{
	for ( int i = 0; i < n; i++ ) 
	{
		printf( "a[%d]= ", i );
		scanf ( "%d", &a[i]); 
	}
}

void HienThi ( int a[], int n )
{
	printf ( " Day sau khi nhap : \n");
	for (int i = 0; i < n; i ++)
	{
		printf ( "%4d", a[i]); 
	} 
}
int KiemTra ( int n ){
    if ( n < 2)
        return 0;
    else{
        for ( int i = 2 ; i <= n/2; i++)
            if( n % i == 0)
                return 0;
        return 1;
    }
}
void SoNguyenTo ( int a[], int n )
{
	printf ( "\nSo nguyen to trong mang: \n");
	for ( int i = 0; i < n; i++ )
	{
		if ( KiemTra(a[i]) )
		{
			printf ( "%4d", a[i]); 
		}	
	} 
} 
int main ()
{
	int n;
	int a[100];
	printf ( "Nhap n: ");
	scanf ( "%d", &n );
	NhapMang(a, n);
	HienThi(a, n);
	SoNguyenTo(a, n); 
 } 
