#include<stdio.h>
#include<conio.h>
#include<math.h> 

bool SoHoanHao ( int n )
{    
    int s = 0;
    for( int i = 1 ; i < n ; i++)
    {
        if ( n % i == 0 )
        {
            s = s + i;
        }        
    } 
    if( s == n )
    {
        return true;
    }
    else
    {
        return false;
    }        
}

int main ()
{
	int n;
	printf ( "nhap n: ");
	scanf ( "%d", &n );
	int x;
	scanf( "%d", &x);
	if ( SoHoanHao( n ) == true ) 
	{
		printf( "Day la so hoan hao" );
	} else 
	{
		printf ( "day khong phai la so hoan hao");
    }
}
