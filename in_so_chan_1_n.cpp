#include<iostream>

using namespace std;

void InSoChan ( int n ) 
{
	for ( int i = 1; i < n; i++ )
	{
		if ( i % 2 == 0)
		{
			cout << i << " "; 
		} 
	} 
} 
int main ()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	InSoChan( n ); 
} 
