#include<stdio.h>

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
void InSoChan (int a[][100], int m, int n)
{
	printf ("So chan trong mang la: \n"); 
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf ("%4d", a[i][j]); 
			} 
		} 
	} 
} 
int main()
{
	int m, n;
	int a[100][100];
	printf ("Nhap m hang: ");
	scanf ("%d", &m);
	printf ("Nhap n cot: ");
	scanf ("%d", &n); 
	NhapMang (a, m, n);
	HienThi (a, m, n);
	InSoChan (a, m, n); 
} 
