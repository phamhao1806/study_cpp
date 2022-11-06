#include<iostream>
#include<math.h>
using namespace std;

int SoNguyenTo ( int n )
{
	if (n < 2)
	{
		return 0;
	}
	for ( int i = 2; i < sqrt(n); i++ )
	{
		if ( n % i == 0 ) 
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for ( int i = 1; i < n; i++ )
    {
    	if ( SoNguyenTo(i) == 1 ) 
    	{
        	cout <<  i << " ";;
		}
    }
}

			
	
