#include<stdio.h>
int main(){
	double x[] = {1,2,3,4,5};
	printf("mang X: \n");
	for(int i = 0; i < 5; i++){
		printf(" %d ", &x[i]);
	}
	printf("\n dia chi cua x la : %p", &x);
	printf("\n dia chi cua x[0] la : %p", &x[0]);
}		
