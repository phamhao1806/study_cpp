
#include<stdio.h>

void dao_nguoc_xau(char str[]) {
  int lo = 0;
  int length;
  for (length = 0; str[length] != '\0' ; length++) {} 
  while ( lo < length ) {
    --length;
    char tmp = str[lo];
    str[lo] = str[length];
    str[length] = tmp;
    ++lo;
  }
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%s", str);
    dao_nguoc_xau(str);
    printf("xau viet nguoc: %s", str);
    return 0;
}
