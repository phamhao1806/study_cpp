
#include<iostream>
#include<math.h>   
using namespace std;
bool kt_scp(int n){
    if(n<1)
        return false;
    int i = sqrt(n);
    if(i*i==n)
        return true;
    return false;
}
void in_scp(int n){
    cout<<"Cac so chinh phuong nho hon "<<n<<endl;
    int a = sqrt(n);
    if(kt_scp(n)){
        for(int i=1;i<a;i++){
            cout<<i*i<<" ";
        }
    }else{
        for(int i=1;i<=a;i++){
            cout<<i*i<<" ";
        }
    }
}
int main(){
    int n;
    do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    kt_scp(n);
    in_scp(n);
    return 0;
}
