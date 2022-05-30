#include <stdio.h>
#include <string.h>  

int main ()
{
   char chuoi1[12] = "Hello";
   char chuoi2[12] = "Phamhao";
   char chuoi3[12];
   int  dodai ;

   // sao chep chuoi1 vao trong chuoi3 
   strcpy(chuoi3, chuoi1);
   printf("Ban su dung ham strcpy( chuoi3, chuoi1) de sao chep:  %s\n", chuoi3 );

   // noi hai chuoi: chuoi1 va chuoi2 
   strcat( chuoi1, chuoi2);
   printf("Ban su dung ham strcat( chuoi1, chuoi2) de noi chuoi:   %s\n", chuoi1 );

   // tinh do dai cua chuoi1 sau khi noi chuoi 
   dodai = strlen(chuoi1);
   printf("Ban su dung ham strlen(chuoi1) de tinh do dai:  %d\n", dodai );
   
   printf("\n===========================\n");
   printf(" chuc cac ban hoc tot! \n");

   return 0;
}
