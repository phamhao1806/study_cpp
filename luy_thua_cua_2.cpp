#include<iostream>
#include<math.h>
using namespace std;

int kiemtra(int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(n == pow(2,i)){
			dem = 1;
			break;
		}
	}
	if(dem == 1){
		cout << n << " la luy thua cua 2";
	}else if(dem == 0){
		cout << n << " khong la luy thua cua 2";
	} 
}

int main(){
	int n;
	cout << "nhap gia tri n: ";
	cin >> n;
	kiemtra(n);
}
