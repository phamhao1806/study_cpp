#include<iostream>
using namespace std;

int so_dao_nguoc(int n)
{
	int dao = 0;
	while(n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	return dao;
}

int main()
{
	int n;
	cout <"nhap n: ";
	cin >> n;
	int kq = so_dao_nguoc(n);
	cout << "so dao nguoc la: " << kq << endl;
}
