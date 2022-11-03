#include<stdio.h>

void NhapDay ( int a[], int n ) 
{
	for ( int i = 0; i < n; i++ ) 
	{
		printf ( "a[%d]= ", i);
		scanf ( "%d", &a[i] );
	}
}
void HienThi ( int a[], int n )
{
	printf ( "Day sau khi nhap: " );
	for ( int i = 0; i < n; i++ )
	{
		printf ( "%4d", a[i] );
	}
}

void TrungBinhCong ( int a[], int n )
{
	int s = 0;
	float d = 0;
	for ( int i = 0; i < n; i++ ) 
	{
		s = s + a[i];
		d++;
	}
	printf ( "\nTrung binh cong cua day la: %.2f", s/d );
}

int main ()
{
	int n;
	printf( "nhap n: " );
	scanf( "%d", &n );
	int a[100];
	NhapDay( a, n );
	HienThi( a, n );
	TrungBinhCong( a, n );
}
