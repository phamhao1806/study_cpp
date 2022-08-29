#include<iostream>
#include<math.h>
using namespace std;

int kiemtra(int n){
	if(n < 2){
		cout << "day khong phai so nguyen to";
	}
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			dem ++;
			break;
		}
	}
	if(dem == 0){
		cout << n << " la so nguyen to" << endl;
	}else{
		cout << n << " khong la so nguyen to" << endl;
	}
	return 0;
}

int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	kiemtra(n);
}
