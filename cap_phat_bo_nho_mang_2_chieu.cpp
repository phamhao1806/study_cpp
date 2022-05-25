#include <stdio.h>
#include <stdlib.h>
void NhapMaTran(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void XuatMaTran(int **a, int m, int n)
{   printf("mang sau khi nhap la:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int **a = NULL, m, n;
    printf("Nhap vao so dong m = ");
    scanf("%d", &m);
    printf("Nhap vao so cot n = ");
    scanf("%d", &n);
    
    a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        
        a[i] = (int *)malloc(n * sizeof(int));
    }
    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);
 
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
