#include <iostream>
#include <malloc.h>

void vidu_contro_thamchieu(int *p)
{
	*p = *p + 5;
}

void nhap_mang(int *a, int n)
{
	printf("Nhap gia tri cho mang:\n");
	for (int i = 0; i < n; i++)
	{
		printf("-> nhap a[%d] = ", i);
		//scanf("%d", &a[i]);
		scanf("%d", a + i);
	}
}

void in_mang(int *a, int n)
{
	printf("Cac gia tri cua mang:\n");
	for (int i = 0; i < n; i++)
	{
		//printf("-> a[%d] = %d\n", i, a[i]);
		printf("-> a[%d] = %d\n", i, *(a + i));
	}
}

int main()
{
	/*int *p;
	int a = 15;
	
	p = &a;
	printf("-> Dia chi cua a: %d\n", &a);
	printf("-> p = %d\n", p);
	
	int t;
	t = *p;
	printf("-> *p = %d\n", *p);
	printf("-> t = %d\n", t);
	
	a++;
	printf("-> *p = %d\n", *p);
	printf("-> t = %d\n", t);
	
	(*p)++;
	printf("-> *p = %d\n", *p);
	printf("-> a = %d\n", a);
	
	int *p2;
	p2 = p;
	printf("-> Dia chi cua a: %d\n", &a);
	printf("-> p = %d\n", p);
	printf("-> p2 = %d\n", p2);
	
	*p2 = 20;
	*p = 10;
	printf("-> *p = %d\n", *p);
	printf("-> a = %d\n", a);
	printf("-> *p2 = %d\n", *p2);
	
	*(p + 3) = 6;
	int *q;
	q = p + 3;
	
	printf("-> p = %d\n", p);
	printf("-> q = %d\n", q);
	printf("-> *q = %d\n", *q);*/
	
	/*int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("=> Gia tri cua mang a la:\n");
	for (int i = 0; i < 10; i++)
	{
		//printf("----> a[%d] = %d\n", i, a[i]);
		//printf("----> a[%d] = %d\n", i, *(a+i));
		
		printf("----> a[%d] = %d; *(a+%d) = %d\n", i, a[i], i, *(a+i));
		printf("----> &a[%d] = %d; (a+%d) = %d\n", i, &a[i], i, (a+i));
	}
	*/
	
	/*char name[20] = "Nguyen Tuan Anh";
	printf("=> name = %s\n", name);
	
	char *pname = name;
	printf("=> Dia chi name = %d; pname = %d\n", name, pname);
	printf("=> pname = %s\n", pname);*/
	
	/*int x = 5;
	vidu_contro_thamchieu(&x);
	printf("--> x = %d\n", x);
	int *p;
	p = &x;
	vidu_contro_thamchieu(p);
	printf("--> x = %d\n", x);
	*/
	
	/*int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	in_mang(a, 10);
	*/
	
	int *a;
	int n;
	printf("Nhap so luong: ");
	scanf("%d", &n);
	
	//Cap phat bo nho cho mang a
	//a = (int*)malloc(n * sizeof(int));
	a = (int*)calloc(n, sizeof(int));
	
	nhap_mang(a, n);
	
	in_mang(a, n);
	
	//free(a);
	printf("Dia chi cua a: %d\n", a);
	
	printf("Nhap so luong khac: ");
	scanf("%d", &n);
	
	realloc(a, n * sizeof(int));
	
	printf("Dia chi cua a sau khi goi realloc: %d\n", a);
	
	//nhap_mang(a, n);
	
	in_mang(a, n);
	
	free(a);
}
