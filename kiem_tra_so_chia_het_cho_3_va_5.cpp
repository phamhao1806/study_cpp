#include<iostream>
using namespace std;

void kiemtra(int n)
{
	if(n % 3 == 0 && n % 5 == 0){
		cout << "day la so chia het cho 3 va 5";
	}else{
		cout << "so khong chia het cho 3 va 5";
	}
}

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	kiemtra(n);
}
