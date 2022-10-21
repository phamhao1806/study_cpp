#include<stdio.h>


void NhapDay ( int a[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		printf ( " a[%d]= ", i );
		scanf ( "%d", &a[i] );
	}
}

void HienThi ( int a[], int n ) {
	printf ( " Day sau khi nhap la: \n" );
	for ( int i = 0; i < n; i++ ) {
		printf ( "%4d", a[i] );
	}
}

void UocBoi (int a[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		for (int j = i + 1; j < n; j++ ) {
			if ( a[i] % a[j] == 0 || a[j] % a[i] == 0) {
				printf( "\n %d la uoc, %d la boi  \n", a[i] , a[j] );
			}
		}
	}
}

int main () {
	int n;
	printf( " nhap n: ");
	scanf ( "%d", &n );
	int a[100];
	NhapDay ( a, n );
	HienThi ( a, n );
	UocBoi ( a, n );
}


