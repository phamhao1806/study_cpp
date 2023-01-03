#include<stdio.h>

void NhapMang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("a[%d]= ", i);
		scanf ("%d", &a[i]); 
	} 
}

void HienThi (int a[], int n)
{
	printf ("Mang sau khi nhap: \n");
	for (int i = 0; i < n; i++)
	{
		printf ("%4d", a[i]); 
	} 
}

void SoChiaHet (int a[], int n)
{
	printf ("\nCac so chia het cho 3 va 5 la: \n");
	for (int i = 0; i < n; i++) 
	{
		if (a[i] % 3 == 0 && a[i] % 5 == 0 )
		{
			printf ("%4d", a[i]); 
		} 
	}
} 
int main ()
{
	int n;
	printf ("Nhap n: ");
	scanf ("%d", &n);
	int a[100];
	NhapMang (a, n);
	HienThi (a, n);
	SoChiaHet (a, n); 
 } 
