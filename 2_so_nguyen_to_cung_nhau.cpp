#include<iostream>
using namespace std;

bool KiemTra2SoNguyenTo(int a, int b)
{
	if (b == 0) {
		return (a == 1);
	} else {
		return KiemTra2SoNguyenTo(b, a % b);
	}
}
    

int main()
{
	int a, b;
	cout << " nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	if (KiemTra2SoNguyenTo(a, b) == 1 ) {
		cout << "la 2 so nguyen to cung nhau ";
	} else {
		cout << " la 2 so nguyen to khong cung nhau";
	}
}
