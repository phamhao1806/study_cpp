
#include <stdio.h>
#include <string.h>
char kiemtra(char chuoi[100], char n)
{
    int dem = 0;
    for (int i = 0; i < strlen(chuoi); i++)
    {
        if (chuoi[i] == n)
        {
            dem++;
        }
    }
    if (dem > 0)
    {
        printf("\nki tu %c trong chuoi xuat hien %d lan ", n, dem);
    }
    if (dem == 0)
    {
        return 1;
    }
}
int main()
{
    char chuoi[100], n;
    int dem = 0;
    printf("nhap chuoi: ");
    gets(chuoi);
    printf("chuoi vua nhap la : %s", chuoi);
    printf("\nxin moi ban nhap vao ki tu can dem\n");
    scanf("%c", &n);
    if (kiemtra(chuoi, n) == 1)
    {
        printf("\nki tu %c khong co trong chuoi\n", n);
    }
}

