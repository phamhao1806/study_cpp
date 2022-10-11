#include<iostream>

using namespace std;

int Tong_uoc(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if ( n % i == 0) {
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
    cout << Tong_uoc(n);
}
