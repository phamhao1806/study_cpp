#include<stdio.h>
#include<math.h> 

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
	printf ("Day sau khi nhap : \n");
	for (int i = 0; i < n; i++)
	{
		printf ("%4d", a[i]); 
	} 
} 
int Max (int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i]; 
		} 
	}
	return max; 
	printf ("so lon nhat trong day: %d", max); 
}
int  Min (int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i]; 
		} 
	}
	return min; 
	printf ("so be nhat trong day: %d", min); 
 } 
int main()
{
	int n;
	int a[100]; 
	printf ("nhap n: ");
	scanf ("%d", &n);
	NhapDay (a, n);
	HienThi(a, n);
	printf ( "\nhieu so max va min la: %d", Max(a, n) - Min(a,n)); 
} 
