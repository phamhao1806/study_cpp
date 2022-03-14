#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "nhap so phan tu n:";
	cin >> n;
	int a[30];
	cout << "nhap cac so trong mang" << endl;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout <<"day so sau khi nhap :" << endl;
	for(int i = 0; i < n; i++){
	    cout << "a["<< i <<"]= " << a[i] << endl;
	}
	int kiemtra = 1;
	for(int i = 0; i < n; i++){
		if(a[i+1] < a[i]){
			kiemtra = 0;
			break;
		}
		cout << "day so k tang" << endl;
	}
	if(kiemtra == 1){
	    cout << "day tang dan" << endl;		
	}	
}
	
			
