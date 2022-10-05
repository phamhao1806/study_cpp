#include<iostream>
using namespace std;

void DaoSo(int n)
{
    int tmp;
    int s = 0;
    while (n > 0) {
        tmp = n % 10;
        s = s * 10 + tmp;
        n = n / 10	;	
    }
    cout << "so sau khi dao: " << s;
}

int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    DaoSo(n);
}
