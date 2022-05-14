#include<stdio.h>
#include<conio.h>
#define max 30
int main(){
    int size, a[max];
    int* ptr;
    ptr = &a[0];
    printf("\n nhap kich co mang:");
    scanf("%d", &size);
    printf("\n nhap %d so nguyen co trong mang:", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr);
        ptr++;
   }

   ptr = &a[size - 1];

   printf("\nHien thi cac phan tu mang theo chieu dao nguoc:");

   for (int i = size - 1; i >= 0; i--) {
      printf("\nPhan tu %d la %d: ", i, *ptr);
      ptr--;
   }
   return(0);
}

