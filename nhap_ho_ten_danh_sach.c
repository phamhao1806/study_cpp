#include<stdio.h>
#include<string.h>
void nhap(char sinhvien[][50],int n);
void xuat(char sinhvien[][50],int n);
int main()
{
    int n,count = 0;

    printf("Nhap so luong sinh vien : ");
    scanf("%d",&n);

    char sinhvien[n][50];

    nhap(sinhvien, n);

    printf("--------------------------\n");
    xuat(sinhvien, n);

    printf("--------------------------\n");

    for(int i = 0; i < n; i++)
        {
            char temp[50];
            strcpy(temp,sinhvien[i]);
            if(strncmp(strlwr(temp),"nguyen",6) == 0)
                count ++;
        }
    if(count > 0)
    {
        printf("so sinh vien ho Nguyen (%d sinh vien) : \n",count);
        for(int i = 0; i < n; i++)
        {
            char temp[50];
            strcpy(temp,sinhvien[i]);
            if(strncmp(strlwr(temp),"nguyen",6) == 0)
                printf("%s\n",sinhvien[i]);
        }
    }
    else
    {
        printf("khong ton tai!");
    }

	return 0;
}
void nhap(char sinhvien[][50], int n)
{
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        printf("-->Nhap ten sinh vien thu %d :",i + 1);
        gets(sinhvien[i]);
    }
}
void xuat(char sinhvien[][50],int n)
{
    printf("Danh sach ten sinh vien :\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("-->%s\n",sinhvien[i]);

    }
}
