#include<iostream>
#include<math.h> 
using namespace std;

bool SoChinhPhuong ( int n )
{
	if ( n < 1) 
	{
		return false; 
	} 
	int i = sqrt (n);
	if ( i*i == n )
	{
		return true; 
	}
	return false; 
} 
void InSo ( int n )
{
	cout << "cac so chinh phuong nho hon  " <<  n << " : " << endl;
	int a = sqrt(n);
	if (SoChinhPhuong(n)) 
	{
		for ( int i = 1; i < a; i ++ )
		{
			cout << i*i << " "; 
		}	 
	} else 
	{ 
		for (int i = 1; i < a; i++ )
		{
			cout << i*i << " "; 
		} 
	}
}
int main ( )
{
	int n;
	cout << "nhan n: ";
	cin >> n;
	InSo(n); 
 } 
