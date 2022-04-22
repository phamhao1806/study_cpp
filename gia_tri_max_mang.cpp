#include<iostream>
using namespace std;
int maxmang(int a[100], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}	
	}
	return max;
}
int main(){
    int n;
	cout << "nhap phan tu n:";
	cin >> n;
	int a[100];
	cout << "phan tu can nhap:" << endl;
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	cout <<" mang sau khi nhap:" << endl;
	for(int i = 0; i < n; i++){
	    cout << "a["<< i <<"]= "<< a[i] << endl;	
	}
	cout << "gia tri lon nhat trong mang:" <<maxmang(a, n); 
	return 0;		
}	
