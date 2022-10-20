#include <iostream>

using namespace std;

int Tong ( int n ) {
	if ( n == 1 ) {
		return 1;
    } if ( n % 2 == 0 ) {
        return Tong( n - 1 );
    } else {
        return n + Tong( n - 1 );
    }
}

int main() {
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << Tong( n ) << endl;
}
