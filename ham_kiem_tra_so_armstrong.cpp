#include<stdio.h>
#include<math.h>
int countdigit(int n){
    int count = 0;
    while(n>0){
    n /= 10;
    count++;
    }
    return count;
}
bool isarmstrong(int n){
    int numdigit = countdigit(n);
    int tmp = n;
    int sum = 0;
    while(tmp > 0){
        int last = tmp % 10;
        tmp /= 10;
        sum += pow(last, numdigit);
    }
    if(sum == n) return true;
    return false;
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    if(isarmstrong(n) == true){
        printf("\n %d la so armstrong", n);
    }else{
        printf("\n %d khong la so armstrong", n);
     }
}
