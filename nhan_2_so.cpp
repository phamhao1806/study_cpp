#include <iostream>
using namespace std;
double TinhToan (double a, double b) 
{
	double count = 0;
	double tich = 0;
	for(; count < b ; count++)
	{
		tich += a;
	}
	return tich;
}
int main()
{
	double a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << TinhToan(a, b);
}
