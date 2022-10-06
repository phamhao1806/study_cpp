#include<iostream>
#include<math.h>

using namespace std;

bool SoChinhPhuong(int n)
{
    int i = 0;
    while ( i * i <= n){
    	if ( i * i == n) {
    		return true;
		}
		i++;
	}
	return false;
}

int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    if (SoChinhPhuong(n) == true ) {
    	cout << n << " la so chinh phuong ";
	} else {
		cout << n << " khong la so chinh phuong ";
	}
}
