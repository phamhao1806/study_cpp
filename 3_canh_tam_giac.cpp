#include<iostream>

using namespace std;

bool KiemTraTamGiac(int a, int b, int c)
{
    if(a + b > c && a + c > b && b + c > a){
        return true;
    } else {
        return false;
    }
}

int main()
{
    int a, b, c;
    cout << "nhap canh thu nhat: ";
    cin >> a;
    cout << "nhap canh thu hai: ";
    cin >> b;
    cout << "nhap canh thu ba: ";
    cin >> c;
    if (KiemTraTamGiac(a, b, c) == true){
        cout << "la 3 canh cua tam giac";
    } else {
        cout << "khong phai 3 canh cua tam giac";
    }
}
