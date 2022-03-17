#include <stdio.h>

int giatribieuthuc(float a , float b , float c){
	int giatri = a*a + 12*b + c*c*c;
	return giatri;
}

int main(){
	float a, b, c;
    printf("Nhap he so bac 2, a = ");
    scanf("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf("%f", &c);
    printf("gia tri cua biêu thuc la :: %d",giatribieuthuc(a,b,c));
}
