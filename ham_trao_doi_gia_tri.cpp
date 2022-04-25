#include<stdio.h>
void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){
    int num1, num2;
    printf("\n nhap so thu nhat:");
    scanf("%d", &num1);
    printf("\n nhap so thu hai:");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("\n Hai so sau khi trao doi:");
    printf("\n so thu nhat la: %d", num1);
    printf("\n so thu hai la: %d", num2);
    return 0;
}
