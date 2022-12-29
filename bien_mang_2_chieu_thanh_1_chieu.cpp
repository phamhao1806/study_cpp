#include<stdio.h>

void NhapMang (int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf ("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]); 
		} 
	} 
}
void HienThi (int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		printf ("\t"); 
		for (int j = 0; j < m; j++)
		{
			printf ("%d\t", a[i][j]); 
		} 
		printf ("\n"); 
	} 
} 
void Bien2ChieuThanh1Chieu(int a[][100], int n, int m)
{
	printf ("\nmang sau khi  bien doi: \n"); 
 	int b[n*m], k = 0;
 	for (int i = 0; i < n; i++)
  	{
     	for(int j = 0; j < m; j++)
        b[k++] = a[i][j];
  	}
 	for (int z = 0; z < k; z++)
 	{
 		printf ("%d \t", b[z]);
	}
}
int main ()
{
	int m, n;
	int a[100][100];
	printf ("Nhap n hang: ");
	scanf ("%d", &n);
	printf ("Nhap m cot: ");
	scanf ("%d", &m); 
	NhapMang (a, n, m);
	printf ("mang sau khi nhap la: \n");
	HienThi (a, n, m);
	Bien2ChieuThanh1Chieu (a, n, m);
}
