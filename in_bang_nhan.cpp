#include<iostream>
using namespace std;

void InBangNhan(int n)
{
	for(int i = 1; i < 10; i++)
	{
		cout <<  n << " X " << i << " = " << n*i << endl;	
	}
}

int main()
{
	int n;
	cout << " nhap n: ";
	cin >> n;
	InBangNhan(n);
}
