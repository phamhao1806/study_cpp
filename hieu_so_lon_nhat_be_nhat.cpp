#include<stdio.h>
#include<malloc.h>

void NhapDay( int *a, int n) {
	for( int i = 0; i < n; i++ ){
		printf( "a[%d]= ", i );
		scanf( "%d", &a[i] );
	}
}

void HienThi( int *a, int n ){
	printf( "mang sau khi nhap la: \n" );
	for( int i = 0; i < n; i++) {
		printf( "%4d", a[i] );
	}
}

int Max( int *a, int n ) {
	int max = a[0];
	for ( int i = 0; i < n; i++ ) {
		if ( max < a[i] ) {
			max = a[i];
		}
	}
	return max;
}

int Min( int *a, int n ) {
	int min = a[0];
	for ( int i = 0; i < n; i++ ) {
		if ( min > a[i] ) {
			min = a[i];
		}
	}
	return min;
}

int TinhHieu( int *a, int n ) {
	int h = 0;

		h = Max( a, n) - Min( a, n );
	
	return h;
}

int main() {
	int n;
	int h;
	printf( "nhap so phan tu n: " );
	scanf( "%d", &n );
	int *a;
	a = ( int * ) malloc ( n * sizeof(int) );
	NhapDay( a, n );
	HienThi( a, n );
	Min( a, n );
	Max( a, n );
	printf("\nHieu cua max va min la: %d", h, TinhHieu(a, n));
	free(a);
}
