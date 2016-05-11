#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int show;
int main(void) 
{
	double *A;
	*A = (double*)malloc(5*3*sizeof(double));
	int i;
	for(i=0;i<15;i++)
	{
	A[i]=i;
	}
	

	show(*A,5,3);
	
	system("Pause");
	return 0;
}
int show(double *A,int n1,int n2)
{
	int i;
	int j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%f ",A[n1*i+j]);
		}
		printf("\n");
	}
	return 0;
}
