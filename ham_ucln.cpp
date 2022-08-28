#include<iostream>
#include<math.h>
using namespace std;

void ucln(int so1, int so2){
	int min, ucln = 1;
	if(so1 == 0 && so2 == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (so1 != 0 && so2 == 0) {
        cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << abs(so1) << endl;
    } else if (so1 == 0 && so2 != 0) {
        cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << abs(so2) << endl;
    } else {
        if(so1 < so2) {
            min = so1;
        } else {
            min = so2;
        }
         
        for(int i = 1; i <= min; i++) {
            if(so1%i == 0 && so2%i == 0) {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << ucln << endl;
    }
}
int main(){
	int so1, so2;
	cout << "nhap so thu nhat: ";
	cin >> so1;
	cout << "nhap so thu 2: ";
	cin >> so2;
	ucln(so1, so2);
}
