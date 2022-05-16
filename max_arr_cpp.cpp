#include<iostream>

using namespace std;

int getmaxvalue(int *p, int n){
    int maxvalue = p[0];
    for(int i = 0; i < n; i++){
        if(p[i] > maxvalue){
            maxvalue = p[i];
        }
    }
    return maxvalue;
}
int main(){
    int n;
    cout << "nhap phan tu n:";
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "mang sau khi nhap" << endl;
    for(int i = 0; i < n; i++){
         cout << "a["<< i <<"]= " << a[i] << endl;
    }
    cout << "maxvalue = " << getmaxvalue(a, n);
}
    
    
