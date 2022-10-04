#include<iostream>
#include<math.h>
using namespace std;

bool KiemTra(int n)
{
	if ( n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int  TongSoNguyenTo(int n)
{
	int s = 0;
	for(int i = 2; i < n; i ++) {
		if (KiemTra(i) == 1) {
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
	KiemTra(n);
	cout << TongSoNguyenTo(n);
}
