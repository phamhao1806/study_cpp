#include<iostream>
#include<math.h>
using namespace std;

void giai_pt_bac2(float a, float b, float c)
{
	if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
        }
        return;
    }
    
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }
}

int main()
{
	float a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
	giai_pt_bac2(a, b, c);
}
