#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

void intputDate(struct Date &d){
    printf("nhap vao ngay: ");
    scanf("%d", &d.day);
    printf("\n nhap vao thang: ");
    scanf("%d", &d.month);
    printf("\n nhap vao nam: ");
    scanf("%d", &d.year);
} 

void printDate(struct Date d){
    printf("%d/%d/%d", d.day, d.month, d.year);
}

int main(){
    struct Date myDate;
    intputDate(myDate);
    printf("\n---\n");
    printDate(myDate);
} 

 
