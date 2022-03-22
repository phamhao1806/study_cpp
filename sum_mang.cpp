#include<iostream>
using namespace std;
int sum(int a[100], int n){
	int s = 0;
	for(int i = 0; i < n; i++){
		s = s + a[i];
	}
	return s;
}
int main(){
    int n;
    cout << "nhap gia tri n:";
	cin >> n;	
	int a[100];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	cout << "day sau khi nhap : "<< endl;
	for(int i = 0; i < n; i++){
	    cout <<"a["<< i <<"]= " << a[i] << endl;
	}
	cout << sum(a, n);
    return 0;
}


