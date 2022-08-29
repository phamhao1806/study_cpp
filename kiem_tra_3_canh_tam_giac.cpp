#include<iostream>
using namespace std;

void kiemtra_tamgiac(int a, int b, int c){
	if(a+b > c && a+c > b && b+c > a){
		cout << "la 3 canh cua tam giac" << endl;
	}else{
		cout << "khong phai 3 canh cua tam giac"<< endl;
	}
}

int main(){
	int a, b, c;
	cout << "nhap canh thu nhat: ";
	cin >> a;
	cout << "nhap canh thu 2: ";
	cin >> b;
	cout << "nhap canh thu 3: ";
	cin >> c;
	kiemtra_tamgiac(a, b, c);
	
}
