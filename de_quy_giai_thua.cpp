#include<iostream>

using namespace std;

int GiaiThua( int n ) {
    if ( n == 1 ) {
        return 1;
    }
    return n * GiaiThua( n -1 );
}

int main () {
    int n;
    cout << " Nhap n: ";
    cin >> n;
    cout << " Giai thua " << n << " la: " << GiaiThua( n ) << endl;
}
