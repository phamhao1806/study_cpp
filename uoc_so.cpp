#include<iostream>
using namespace std;

bool KiemTraUocSo(int a, int b)
{
	if ( a % b == 0 || b % a == 0) {
		return true;
	} else {
		return false;
	}
}

int main()
{
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	if (KiemTraUocSo(a, b)) {
		cout << a << " la uoc so cua " << b;
	} else {
		cout << a << " khong la uoc so cua " << b;
	}
}
