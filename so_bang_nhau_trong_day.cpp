#include<stdio.h>

void NhapDay ( int a[], int n ) {
	for ( int i =0; i < n; i++ ) {
		printf ( "a[%d]= ", i);
		scanf ( "%d", &a[i] );
	}
}

void HienThi ( int a[], int n ) {
	printf ( "day sau khi nhap la: \n");
	for ( int i = 0; i < n; i++ ) {
		printf ( "%4d", a[i] );
	}
}

void SoBangNhau ( int a[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		for ( int j = i+1; j < n; j++ ) {
			if ( a[i] == a[j] ) {
				printf ( "\nso trung nhau la: %d \n", a[i]);
			}
		}
	}
}

int main () {
	int n;
	int a[100];
	printf ( "nhap n: ");
	scanf ( "%d", &n );
	NhapDay ( a, n );
	HienThi ( a, n );
	SoBangNhau ( a, n );
}
	 
