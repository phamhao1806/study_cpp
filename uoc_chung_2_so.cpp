#include<iostream>

using namespace std;

void UocChung( int a, int b ) {
	if ( a > b ) {
		for ( int i = 1; i <= b; i++ ) {
			if ( a % i == 0 && b % i == 0 ) {
				cout << " " << i;
			}
		}
	} else if ( a == b ) {
		for ( int i = 1; i <= b; i++ ) {
			if ( a % i == 0 ) {
				cout << " " << i;
			}
		}
	} else {
		for ( int i = 1; i <= b; i++ ) {
			if ( a % i == 0 && b % i == 0 ) {
				cout << " " << i;
			}
		}
	}
}

int main () {
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	UocChung( a, b );
}
		
