#include<iostream>

using namespace std;

int TinhTong(int a, int b)
{
    int s = 0;
    for (int i = 1; i < b; i++) {
        if (i % a == 0 ) {
            s = s + i;
        }
    }
    cout << " tong boi cua " << a << " va nho hon " << b << " : " << s << endl;
    return s;
}

int main()
{
    int a, b;
    cout << " nhap a: ";
    cin >> a;
    cout << " nhap b: ";
    cin >> b;
    TinhTong(a, b);
}
