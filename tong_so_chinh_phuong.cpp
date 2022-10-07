#include<iostream>

using namespace std;

bool SoChinhPhuong(int n)
{
    int i = 0;
    while (i * i <= n){
        if( i * i == n){
            return true;
		}
		i++;
	}
	return false;
}

int TinhTong(int n)
{
    int s = 0;
    for ( int i = 1; i < n; i++) {
    	if ( SoChinhPhuong(i) == true) {
    		s = s + i;
		}
	}
	return s;
}

int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    SoChinhPhuong(n);
    cout << TinhTong(n);
}
