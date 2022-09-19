#include<iostream>
using namespace std;

void hoandoi(int a, int b)
{
	swap(a, b);
	cout << "2 so sau khi hoan doi\n a= " << a << " b= " << b << endl;
}

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	hoandoi(a, b);
}
