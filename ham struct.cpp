#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};
int main()
{
   struct person *ptr;
   int i, n;
   printf("nhap so nguoi: ");
   scanf("%d", &n);
   ptr = (struct person*) malloc(n * sizeof(struct person));
   for(i = 0; i < n; ++i)
   {
       printf("nhap ten va tuoi tuong ung: ");
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }
   printf("hien thi thong tin:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
   return 0;
}
