#include<iostream>

using namespace std;
    float diemtb(float diemtoan, float diemvan){
        return (diemtoan + diemvan)/2;
    }


int main(){
    string hoten;
    float diemtoan;
    float diemvan;
    
    cout <<"nhap ho ten:";
    cin >> hoten;
    do{
        cout << "nhap diem toan:";
        cin >> diemtoan;
    }while(diemtoan <0 || diemtoan >10);
    
    do{
        cout << "nhap diem van:";
        cin >> diemvan;
    }while(diemvan <0 || diemvan >10);
    cout << "diem tb cua ban:\n"<< diemtb(diemtoan, diemvan);
}
