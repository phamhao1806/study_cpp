#include<stdio.h>

void NhapDay ( int a[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf ( "a[%d]= ", i );
		scanf ( "%d", &a[i]);
	}
}

void HienThi ( int a[], int n ) 
{
	printf ( "day sau khi nhap: \n" ); 
	for ( int i = 0; i < n; i++ ) 
	{
		printf ( "%4d", a[i] );
	}
}

void GiamDan ( int a[], int n )
{
	printf ( "\nday sap xep giam dan la: \n");
	int tg;
	for ( int i = 0; i < n; i++ ) 
	{
		for ( int j = i+1; j < n; j++ ) 
		{
			if ( a[i] < a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf ( "%4d", a[i] );
	}
}

int main ()
{
	int a[00];
	int n;
	printf ( "nhap n: " );
	scanf ( "%d", &n );
	NhapDay ( a, n );
	HienThi ( a, n );
	GiamDan ( a, n );
}
