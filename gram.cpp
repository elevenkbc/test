#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int show(double *A, int n1, int n2);
int main() 
{
	double *A;
	A = (double*)malloc(7*5*sizeof(double));
	
	int i;
	for(i=0;i<7*5;i++)
	{
		A[i]=i;
	}
	


	

	return 0;
}
int gram(double *A, double *Q, double *R, int n1, int n2)
{
	
}
int show(double *A, int n1, int n2)
{
	int i;
	int j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%f ",A[i+j*n1]);
		}
		printf("\n");
	}
	return 0;
}
