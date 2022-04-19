#include<iostream>
#include<math.h>
using namespace std;
bool songuyento(int n){
	if(n < 2){
		return false;
	}
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
	    if(n % i == 0){
		    count ++;
		}
	}
	if( count == 0){
	    return true;
	} else{
		return false;
	  }				
}
int main(){
	int n;
	cout << "nhap n:";
	cin >> n;
	if(songuyento(n) == true){
		cout << "day la so nguyen to" << endl;
	}else{
		cout << "day khong phai la so nguyen to" << endl;
	 }	
	return 0;
}	
	
