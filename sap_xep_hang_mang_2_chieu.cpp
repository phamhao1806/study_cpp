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
void SapXep (int a[][100], int n, int m)
{
	printf ("mang sau khi sap xep tang dan tren mang 2 chieu: \n"); 
    int i, j, k;
    for(i = 0; i < n; i++)
	{
        for(j = 0; j < m; j++)
		{
            for(k = j+1; k < m; k++)
			{
                if(a[i][j] > a[i][k])
				{ 
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
	HienThi (a, n, m); 
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
	SapXep (a, n, m); 
} 
