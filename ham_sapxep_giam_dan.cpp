#include<iostream>
using namespace std;
void sapxep(int a[100], int n){
	int tg;
	for(int i = 0; i < n; i++){
	  for(int j = i+1; j < n; j++){
		  if(a[i] < a[j]){
		      tg = a[i];
		      a[i] = a[j];
		      a[j] =tg;
	 	  } 
	  }      
	}
}	
int main(){
    int a[100];
	int n;
	cout << "nhap gia tri n: ";
	cin >> n;
	cout << "nhap phan tu mang " << endl;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "day sau khi nhap : "<< endl;
	for(int i = 0; i < n; i++){
	    cout <<"a["<< i <<"]= " << a[i] << endl;
	}
	sapxep(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " " ;
	}	
	return 0;		
}		
		
		
