#include<stdio.h>
#include<malloc.h>

void nhap_matran(int **a, int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void hienthi_matran(int **a, int m, int n)
{
    printf("ma tran sau khi nhap la: \n");
    for(int i = 0; i < m; i++){
        printf("\t");
        for(int j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void tinh_tong(int **a, int m, int n)
{
    int sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum = sum + a[i][j];
         }
    }
    printf("tong cac phan tu ma tran la: %d",sum);
}
void min_cot1(int **a, int m, int n)
{
    int min = a[0][1];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][1] < min){
                min = a[i][1];
            }
        }
    }
    printf("\ngia tri nho nhat cot 1: %d", min);
}
int ghi_file(int **a, int m, int n)
{
	FILE *pf;
	pf = fopen("D:\\matrannguyen06.txt", "w");
	
	fprintf(pf, "Cac phan tu cua ma tran duong la:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				fprintf(pf, " %d\n",  a[i][j]);
			}
		}
	}
	
	fclose(pf);
}
int main()
{
    int m, n;
    printf("nhap so hang: ");
    scanf("%d", &m);
    printf("nhap so cot: ");
    scanf("%d", &n);
    int **a;
    a = (int **)malloc(m*sizeof(int));
    for(int i = 0; i < m; i++){
        a[i] = (int *)malloc(n*sizeof(int*));
    }
    nhap_matran(a, m, n);
    hienthi_matran(a, m, n);
    tinh_tong(a, m, n);
    min_cot1(a, m, n);
    ghi_file(a, m, n);
    free(a);
}
