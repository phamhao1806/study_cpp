#include<stdio.h>
#include<string.h>
 
void to_lower(char s[]){
    for(int i = 0; s[i] != 0; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
}
void to_upper(char s[]){
    for(int i = 0; s[i] != 0; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }
}
int main(){
    char s[100];
    int i;
    printf("nhap chuoi:");
    gets(s);
    to_lower(s);
    printf("\n chuyen chu in thanh chu thuong = %s", s);
    to_upper(s);
    printf("\n chuyen chu thuong thanh chu in = %s", s);
    return 0;
}
