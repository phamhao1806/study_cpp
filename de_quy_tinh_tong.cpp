#include<iostream>

using namespace std;

int  TinhTong( int a, int b ) {
    if ( a == b ) {
        return b;
    } else {
        return a + TinhTong ( a + 1, b);
    }
}

int main () {
    int a, b;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << TinhTong( a, b );
}
