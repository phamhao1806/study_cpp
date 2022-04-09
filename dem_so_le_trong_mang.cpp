#include<iostream>
using namespace std;
int countarray(int a[100], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
	    if(a[i] % 2 == 1){
		    count ++;
		}
	}
	return count;
}
int main (){
	int n;
	cout << "nhap gia tri n:";
	cin >> n;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
	    cout <<"a["<< i << "]= " << a[i] << endl;
	}
	cout <<countarray(a, n);
	return 0;		
}		    
