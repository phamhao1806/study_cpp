#include<stdio.h>

void tinh_tong(int n)
{
	int s  = 0;
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 1)
		{
			s = s + i;
		}
	}
    printf("tong cac so le nho hon n la %d", s);
}

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	tinh_tong(n);
}
