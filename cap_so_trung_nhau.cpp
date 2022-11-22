#include<stdio.h>

void NhapDay (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("a[%d]= ", i);
		scanf ("%d", &a[i]); 
	} 
} 
void HienThi (int a[], int n)
{
	printf ("Day sau khi nhap la: \n");
	for (int i = 0; i < n; i++)
	{
		printf ("%4d", a[i]); 
	} 
} 

void SoTrung (int a[], int n)
{
	int b; 
	for (int i = 0; i < n; i++)
	{
    	for(int j = i+1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				b = a[i]; 
			}	
		} 
	} 
	printf ("\ncap so trung nhau la: %d", b); 
} 
int main()
{
	int n;
	int a[100];
	printf ("nhap n: ");
	scanf ("%d", &n);
	NhapDay ( a, n);
	HienThi (a, n);
	SoTrung (a, n); 
 } 
