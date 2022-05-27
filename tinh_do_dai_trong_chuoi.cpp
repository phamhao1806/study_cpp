#include<stdio.h>
#include<string.h>

int my_strlen(char x[]){
    int count = 0;
    while(x[count]!='\0'){
        count ++;
    }
    return count++;
}

int main(){
    char ten[50]="PHAM TRONG HAO";
    printf("\n ten cua ban la: %s \n", ten );
    printf("do dai ten= %d", strlen(ten));
}   
    
