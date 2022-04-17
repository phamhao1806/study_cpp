#include <iostream>
#include <math.h>
 
using namespace std;
 
bool scp(int n){
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}
 
int main(){
    
    int n;
    do{
        cout << "Nhap n = ";
        cin >> n;
    }while(n <= 0);
    int a[n];
    for(int i = 0;i < n;i++) cin >> a[i];
    cout << "Cac so chinh phuong:" << endl;
    
    for(int i = 0;i < n; i++){
        if(scp(a[i])){
            cout << a[i] << "    ";
        }
    }
}
