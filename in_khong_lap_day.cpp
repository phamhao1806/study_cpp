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
void Xoa (int a[], int &n, int vitrixoa)
{
	for (int i = vitrixoa + 1; i < n; i++)
	{
		a[i-1] = a[i]; 
	} 
	n--; 
} 
void  InKhongLap (int a[], int n)
{
	printf ("\nDay so khong trung: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				Xoa (a, n, j);
				i--; 
			} 
		} 
	} 
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]); 
	} 
} 
int main()
{
	int n;
	int a[100];
	printf ("Nhap n: ");
	scanf ("%d", &n);
	NhapDay (a, n);
	HienThi (a, n);
	InKhongLap (a, n); 
} 
