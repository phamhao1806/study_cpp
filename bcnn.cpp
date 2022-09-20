#include<iostream>
#include<math.h>
using namespace std;

int BCNN(int a, int b)
{
    int max, i, bcnn = 1;
    if(a == 0 && b == 0) {
        cout << a << " va " << b << " khong co boi chung nho nhat" << endl;
    } else {
        if(a > b) {
            max = a;
        } else {
            max = b;
        }

        int i = max;
        
        while(1)
        {
            if(i % a == 0 && i % b == 0)
            {
                bcnn = i;
                break;
            }
            i += max;
        }
        cout << "Boi chung nho nhat cua " << a << " va " << b << " la " << bcnn << endl;
    }
    return 0;
}

int main(){
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	BCNN(a, b);
}
	
