#include<iostream>

using namespace std;

long TinhTich( int n )
{
	if( n > 0 )
	{
		return n * TinhTich(n-1); 
	}else 
	{
		return 1; 
	} 
} 
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << TinhTich(n); 
} 
