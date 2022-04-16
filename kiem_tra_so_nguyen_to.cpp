#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout << "nhap n:";
	cin >> n;
	if(n < 2){
		cout << "day k phai la so nguyen to" << n << endl;
	}
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
	    if(n % i == 0){
		    count ++;
		}
	}
	if( count == 0){
	    cout <<"day la so nguyen to" << endl;
	} else{
		cout << "day khong phai la so nguyen to" << endl;
	}				
}	

