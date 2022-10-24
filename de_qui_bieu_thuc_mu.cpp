// Sn= 1^1 * 2^2 * 3^3 * 4^4 *...* n^n
#include <cstdlib> 
#include <iostream>
#include <cmath>

using namespace std;

double BieuThuc( int n ) {
	if( n==1 ) {
		return 1; 
	} else {
		return( pow((float)n,n )* BieuThuc( n-1 )); 
	}
}

int main(int argc, char *argv[])
{ 

	int n;
	cout<<"Nhap n bang: ";
	cin>>n;
	cout<< "Ket qua: " << BieuThuc(n) <<endl;
}
