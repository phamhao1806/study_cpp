#include<iostream>
using namespace std;
int maxarray(int a[100], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(max > a[0]){
			max = a[0];
		}
	}
}
int main(){
    int n1, n2;
    int a1[100], a2[100];
    cout << "nhap gia tri n1: ";
	cin >> n1;
	for(int i = 0; i < n1; i++){
	    cin >> a1[i];
	}
	for(int i = 0; i < n1; i++){
		cout <<"a1["<< i <<"]=" << a1[i] << endl;
	}
	cout <<"nhap gia tri n2:";		
	cin >> n2;
	for(int i = 0; i < n2; i++){
	    cin >> a2[i];
	}
	for(int i = 0; i < n2; i++){
		cout <<"a2["<< i <<"]=" << a1[i] << endl;
	}
	cout << "gia tri max la : " << endl;
	cout << maxarray(a1, n1) << " "<< maxarray(a2, n2);
}					
	
