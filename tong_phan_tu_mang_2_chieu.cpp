#include<stdio.h>

void NhapMang (int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]); 
		} 
	} 
}
void HienThi (int a[][100], int m, int n)
{
	printf ("mang sau khi nhap la: \n");
	for (int i = 0; i < m; i++)
	{
		printf ("\t"); 
		for (int j = 0; j < n; j++)
		{
			printf ("%d\t", a[i][j]); 
		} 
		printf ("\n"); 
	} 
} 
void TinhTong (int a[][100], int m, int n)
{
	int tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tong = tong + a[i][j]; 
		} 
	} 
	printf ("tong cac phan tu trong mang la : %d", tong); 
} 
int main ()
{
	int m, n;
	int a[100][100]; 
	printf ("nhap so hang: ");
	scanf ("%d", &m);
	printf ("nhap so cot: ");
	scanf ("%d", &n);
	NhapMang (a, m, n);
	HienThi (a, m, n); 
	TinhTong (a, m, n); 
} 
 
